
newlayer_src = [
    'layer_entry.cpp',
    'logger.cpp',
]


lib_dir = get_option('libdir')

shared_library(meson.project_name().to_lower(), 
    newlayer_src,
    include_directories : newlayer_include_path,
    dependencies : [],
    link_args: '-fvisibility=hidden',
    install : lib_dir,
    )
