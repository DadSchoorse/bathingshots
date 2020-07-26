project('bathingshots', ['c', 'cpp'], default_options: ['c_std=c11', 'cpp_std=c++2a'])

bathingshots_include_path = include_directories('./include')
add_project_arguments('-ffast-math', language: ['c', 'cpp'])

if get_option('with_so')
    subdir('src')
endif

data_dir = get_option('datadir')

vulkan_layer_dir = join_paths(data_dir, 'vulkan', 'implicit_layer.d')

lib_dir = get_option('libdir')
ld_lib_dir_bathingshots = ''

if get_option('append_libdir_bathingshots')
    lib_dir = join_paths(lib_dir, 'bathingshots')
    ld_lib_dir_bathingshots = get_option('prefix') + '/\$LIB/bathingshots/'
endif

if get_option('with_json')
    configure_file(
        input : 'bathingshots.json.in',
        output : 'bathingshots.json',
        configuration : {'ld_lib_dir_bathingshots' : ld_lib_dir_bathingshots},
        install : true,
        install_dir : vulkan_layer_dir,
    )
endif
