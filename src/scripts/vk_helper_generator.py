#!/usr/bin/env python3

import os
import urllib.request
import xml.etree.ElementTree as etree
from dataclasses import dataclass
from dataclasses import field
from typing import List

VK_API_VERSION = "1.2.148"
INDENT = "    "

g_platforms = []


@dataclass
class vk_platform:
    name: str = "None"
    guard: str = ""

@dataclass
class vk_enum_value:
    name: str
    value: str
    platform: vk_platform = vk_platform()

@dataclass
class vk_func:
    name: str
    parent: str = "VkInstance"
    platform: vk_platform = vk_platform()
    aliases: List[str] = field(default_factory=list)

def get_vk_xml(filename, version):
    url = "https://raw.github.com/KhronosGroup/Vulkan-Docs/v{}/xml/vk.xml".format(version)
    if not os.path.isfile(filename):
        urllib.request.urlretrieve(url, filename)

def get_vk_platforms(root):
    global g_platforms
    g_platforms = [vk_platform()]
    platforms = root.find("platforms")
    for i in platforms:
        name = i.attrib.get("name")
        guard = i.attrib.get("protect")
        g_platforms.append(vk_platform(name, guard))

######################
### format helpers ###
######################
def format_line(line, indent_level=0):
    return INDENT * indent_level + line.replace("\t", INDENT) + "\n"

def format_lines(lines, indent_level=0):
    return [format_line(line, indent_level) for line in lines]

######################
#### ENUM helpers ####
######################
def add_to_enum_list(elist, new_enum):
    if new_enum != None and next((i for i in elist if (i.value == new_enum.value)), None) == None:
        elist.append(new_enum)

def get_enum_value(root, extnumber = None):
    #print(root.tag, root.attrib)
    if "alias" in root.attrib:
        return None
    if "value" in root.attrib:
        return vk_enum_value(name=root.attrib.get("name"), value=root.attrib.get("value"))
    if "extnumber" in root.attrib:
        extnumber = (int(root.attrib.get("extnumber")) - 1) * 1000
    offset = int(root.attrib.get("offset"))
    value = 1000000000 + extnumber + offset
    return vk_enum_value(name=root.attrib.get("name"), value=str(value))

def get_sub_enum(root, result, enum_name, ext_num = None):
    for item in root.findall("enum"):
        if item.attrib.get("extends") == enum_name:
            add_to_enum_list(result, get_enum_value(item, ext_num))

def get_enum_from_feature(root, result, enum_name, ext_num = None):
    for require in root.findall("require"):
        if "extension" in require.attrib:
            continue
        get_sub_enum(require, result, enum_name, ext_num)

def get_enum(root, enum_name):
    core_enum = [i for i in root.findall("enums") if i.get("name") == enum_name][0];
    if core_enum.get("type") != "enum":
        raise LookupError("not enum")
    #print(core_enum.tag, core_enum.attrib)
    result = []
    for i in core_enum:
        add_to_enum_list(result, get_enum_value(i))

    features = root.findall("feature");
    for feature in features:
        get_enum_from_feature(feature, result, enum_name)

    extensions = root.find("extensions");

    for ext in extensions:
        if ext.attrib.get("supported") != "disabled":
            tmp = []
            get_enum_from_feature(ext, tmp, enum_name, int(ext.attrib.get("number")))
            platform = [i for i in g_platforms if i.name == str(ext.attrib.get("platform"))][0]
            for value in tmp:
                value.platform = platform
                add_to_enum_list(result, value)

    result.sort(key=lambda e: int(e.value))
    return result

######################
#### func helpers ####
######################
def get_all_funcs(root):
    funcs = []
    child_instance = {'VkInstance', 'VkPhysicalDevice'}
    child_device = {'VkDevice', 'VkCommandBuffer', 'VkQueue'}

    commands = root.find("commands")
    for command in commands.findall("command"):
        name = None
        parent = None

        if command.attrib.get("alias") != None:
            func = [i for i in funcs if i.name == command.attrib.get("alias")][0]
            func.aliases.append(command.attrib.get("name"))

        proto = command.find("proto")
        if proto != None:
            name = proto.find("name").text

        param = command.find("param")
        if param != None:
            if param.find("type").text in child_instance:
                parent = "VkInstance"
            elif param.find("type").text in child_device:
                parent = "VkDevice"
            else:
                continue
        else:
            continue
        funcs.append(vk_func(name, parent))

##    result = []
##    features = root.findall("feature");
##    for feature in features:
##        for require in feature.findall("require"):
##            for command in require.findall("command"):
##                result.append(vk_func(command.attrib.get("name")))
##
    extensions = root.find("extensions");

    for ext in extensions:
        if ext.attrib.get("supported") != "disabled":
            for require in ext.findall("require"):
                platform = [i for i in g_platforms if i.name == str(ext.attrib.get("platform"))][0]
                for command in require.findall("command"):
                    try:
                        func = [i for i in funcs if i.name == command.attrib.get("name")][0]
                        func.platform=platform
                    except:
                        pass
        else:
            for require in ext.findall("require"):
                platform = [i for i in g_platforms if i.name == str(ext.attrib.get("platform"))][0]
                for command in require.findall("command"):
                    try:
                        func = [i for i in funcs if i.name == command.attrib.get("name")][0]
                        funcs.remove(func)
                    except:
                        pass
    #print(funcs)
    return funcs

######################
### sType helpers ####
######################
def convert_sType_to_name(sType: str):
    vendor_parts = ["EXT", "KHR", "KHX", "AMD", "NV", "NVX", "IMG", "AMDX", "ARM", "ANDROID", "FUCHSIA",
                    "GGP", "GOOGLE", "QCOM", "NN", "MVK", "MESA", "INTEL",]
    blacklisted_parts = ["ID", "LOD", "SM", "ASTC", "AABB",]
                        #TODO auto generate + add more

    special_parts = {"8BIT" : "8Bit", "16BIT" : "16Bit", "DIRECTFB" : "DirectFB",}

    special_meaning = {"VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO"   : "VkLayerDeviceCreateInfo",
                       "VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO" : "VkLayerInstanceCreateInfo",
                       "VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT" :
                       "VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT",}

    if special_meaning.get(sType) != None:
        return special_meaning[sType];

    struct_parts = sType[len("VK_STRUCTURE_TYPE_"):].split("_")

    struct_name = "Vk"

    for i in range(len(struct_parts)):
        part = struct_parts[i]
        if part in vendor_parts and i == len(struct_parts) - 1:
            struct_name += part
        elif part in blacklisted_parts:
            struct_name += part
        elif special_parts.get(part) != None:
            struct_name += special_parts[part]
        else:
            struct_name += part[0]
            struct_name += part[1:].lower()

    return struct_name

######################
##### generators #####
######################
def write_vulkan_sizeof(sTypes):
    with open("../generated/vulkan_sizeof.h", "w") as file:
        boilerplate_start = ["#pragma once", "",
                             "#ifdef __cplusplus",
                             "extern \"C\" {",
                             "#endif", "",
                             "#include <stddef.h>", "",
                             "//Frog",
                             ]
        vksizeof_start = ["static size_t vksizeof(VkStructureType sType)",
                          "{",
                          "\tswitch (sType)",
                          "\t{",
                          ]

        vksizeof_end = ["\t\tdefault: return 0;",
                        "\t}",
                        "}", "",
                        ]


        boilerplate_end = ["#ifdef __cplusplus",
                           "}",
                           "#endif",
                           ]

        file.writelines(format_lines(boilerplate_start))

        file.writelines(format_lines(vksizeof_start))

        for i in sTypes:
            if i.platform.name != "None":
                file.write(format_line("#ifdef {}".format(i.platform.guard)))
            line = "case {}: return sizeof({});".format(i.name, convert_sType_to_name(i.name))
            file.write(format_line(line, 2))
            if i.platform.name != "None":
                file.write(format_line("#endif"))

        file.writelines(format_lines(vksizeof_end))

        file.writelines(format_lines(boilerplate_end))

def write_vulkan_get_sType(sTypes):
    with open("../generated/vulkan_stype.hpp", "w") as file:
        boilerplate_start = ["#pragma once", "",
                             "#include <type_traits>", "",
                             "//Frog generated",
                             ]
        get_sType_start = ["template <typename T>",
                           "constexpr VkStructureType sTypeFromStruct()",
                           "{",
                           ]

        get_sType_end = ["",
                         "\treturn (VkStructureType) -1;",
                         "}",
                         ]


        boilerplate_end = []

        file.writelines(format_lines(boilerplate_start))

        file.writelines(format_lines(get_sType_start))

        for i in sTypes:
            if i.platform.name != "None":
                file.write(format_line("#ifdef {}".format(i.platform.guard)))
            lines = ["if constexpr (std::is_same<T, {}>::value)".format(convert_sType_to_name(i.name)),
                     "{",
                     "\treturn {};".format(i.name),
                     "}",
                     ]
            file.writelines(format_lines(lines, 1))
            if i.platform.name != "None":
                file.write(format_line("#endif"))

        file.writelines(format_lines(get_sType_end))

        file.writelines(format_lines(boilerplate_end))

def write_vulkan_dispatch_table(funcs):
    with open("../generated/vulkan_dispatch_table.hpp", "w") as file:
        boilerplate_start = ["#pragma once", "",
                             "//Frog generated",
                             ]

        d_table_start = ["struct VulkanDispatchTable",
                         "{",
                         ]

        d_table_end = ["};",
                       "",
                       ]

        init_instance_start = ["static void initInstanceTable(PFN_vkGetInstanceProcAddr gipa, VkInstance instance, VulkanDispatchTable* table)",
                               "{",
                               ]

        init_instance_end = ["}", ""]

        init_device_start = ["static void initDeviceTable(PFN_vkGetDeviceProcAddr gdpa, VkDevice device, VulkanDispatchTable* table)",
                             "{",
                             ]

        init_device_end = ["}",]


        boilerplate_end = []

        file.writelines(format_lines(boilerplate_start))

        file.writelines(format_lines(d_table_start))

        for i in funcs:
            if i.platform.name != "None":
                file.write(format_line("#ifdef {}".format(i.platform.guard)))
            line = "PFN_{} {} = nullptr;".format(i.name, i.name[2:])
            file.write(format_line(line, 1))
            if i.platform.name != "None":
                file.write(format_line("#endif"))

        file.writelines(format_lines(d_table_end))

        file.writelines(format_lines(boilerplate_end))

def write_vulkan_dispatch_int(funcs):
    with open("../generated/vulkan_dispatch_init.hpp", "w") as file:
        boilerplate_start = ["#pragma once", "",
                             "//Frog generated",
                             ]

        init_instance_start = ["static void initInstanceTable(PFN_vkGetInstanceProcAddr gipa, VkInstance instance, VulkanDispatchTable* table)",
                               "{",
                               ]

        init_instance_end = ["}", ""]

        init_device_start = ["static void initDeviceTable(PFN_vkGetDeviceProcAddr gdpa, VkDevice device, VulkanDispatchTable* table)",
                             "{",
                             ]

        init_device_end = ["}",]


        boilerplate_end = []

        file.writelines(format_lines(boilerplate_start))
    
        file.writelines(format_lines(init_instance_start))

        for i in [f for f in funcs if f.parent == "VkInstance"]:
            if i.platform.name != "None":
                file.write(format_line("#ifdef {}".format(i.platform.guard)))
            commands = [i.name] + i.aliases
            for command in commands:
                lines = ["if (table->{} == nullptr)".format(i.name[2:]),
                         "\ttable->{} = (PFN_{}) gipa(instance, \"{}\");".format(i.name[2:], i.name, command)]
                file.writelines(format_lines(lines, 1))
            if i.platform.name != "None":
                file.write(format_line("#endif"))

        file.writelines(format_lines(init_instance_end))

        file.writelines(format_lines(init_device_start))

        for i in [f for f in funcs if f.parent == "VkDevice"]:
            if i.platform.name != "None":
                file.write(format_line("#ifdef {}".format(i.platform.guard)))
            commands = [i.name] + i.aliases
            for command in commands:
                lines = ["if (table->{} == nullptr)".format(i.name[2:]),
                         "\ttable->{} = (PFN_{}) gdpa(device, \"{}\");".format(i.name[2:], i.name, command)]
                file.writelines(format_lines(lines, 1))
            if i.platform.name != "None":
                file.write(format_line("#endif"))

        file.writelines(format_lines(init_device_end))
        
        file.writelines(format_lines(boilerplate_end))

def main():
    vk_xml = "vk-{}.xml".format(VK_API_VERSION)

    get_vk_xml(vk_xml, VK_API_VERSION)

    tree = etree.parse(vk_xml)

    get_vk_platforms(tree)
    #print(g_platforms)

    sTypes = get_enum(tree, "VkStructureType")
    #print(sTypes)
    #print([i.name for i in sTypes])

    write_vulkan_sizeof(sTypes)
    write_vulkan_get_sType(sTypes)
    funcs = get_all_funcs(tree)
    write_vulkan_dispatch_table(funcs)
    write_vulkan_dispatch_int(funcs)

if __name__ == "__main__":
    main()
