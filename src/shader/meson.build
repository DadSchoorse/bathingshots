

shader_src = [
    'image2D_to_buffer.comp.glsl',
]

glsl_compiler = find_program('glslangValidator')
glsl_generator = generator(glsl_compiler,
    output    : [ '@BASENAME@.h' ],
    arguments : [ '-V', '-x', '@INPUT@', '-o', '@OUTPUT@' ])

shader_include = glsl_generator.process(shader_src)