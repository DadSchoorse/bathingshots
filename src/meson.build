subdir('shader')

bathingshots_src = [
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

thread_dep = dependency('threads')

shared_library(meson.project_name().to_lower(), 
    bathingshots_src, shader_include,
    include_directories : bathingshots_include_path,
    dependencies : [x11_dep, thread_dep],
    link_args: '-fvisibility=hidden',
    install : lib_dir,
    )
