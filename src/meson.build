subdir('shader')

newlayer_src = [
    'keyboard_input.cpp',
    'keyboard_input_x11.cpp',
    'layer_entry.cpp',
    'logger.cpp',
    'stb_image_write.cpp',
    'vulkan_buffer.cpp',
    'vulkan_descriptor.cpp',
    'vulkan_image.cpp',
    'vulkan_pipeline.cpp',
]


lib_dir = get_option('libdir')

x11_dep = dependency('x11')

shared_library(meson.project_name().to_lower(), 
    newlayer_src, shader_include,
    include_directories : newlayer_include_path,
    dependencies : [x11_dep],
    link_args: '-fvisibility=hidden',
    install : lib_dir,
    )
