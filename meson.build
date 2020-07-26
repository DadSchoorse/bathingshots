project('newlayer', ['c', 'cpp'], default_options: ['c_std=c11', 'cpp_std=c++2a'])

newlayer_include_path = include_directories('./include')
add_project_arguments('-ffast-math', language: ['c', 'cpp'])

subdir('src')
