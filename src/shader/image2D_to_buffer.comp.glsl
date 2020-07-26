#version 450
#extension GL_EXT_samplerless_texture_functions : require

layout(local_size_x=8, local_size_y=8, local_size_z=1) in;

layout(std430, set = 0, binding = 0) writeonly buffer storageStruct
{
    uint outputData[];
};
layout(set = 0, binding = 1) uniform texture2D inputImage;

layout(push_constant) uniform pushConstants
{
    uvec2  imageExtent;
    uvec2  imageOffset;
    int   mipLevel;
    uint   bufferOffset;
    uint   bufferRowLength;
} region;

void main()
{
    if(any(greaterThanEqual(gl_GlobalInvocationID.xy,  region.imageExtent)))
    {
        return;
    }
    
    uint dataOffset = region.bufferOffset + gl_GlobalInvocationID.y * region.bufferRowLength + gl_GlobalInvocationID.x;
    vec4 rawData = texelFetch(inputImage, ivec2(gl_GlobalInvocationID.xy + region.imageOffset), region.mipLevel);
    uint data = packUnorm4x8(rawData);
    outputData[dataOffset] = data;
}
