#version 330 core

layout(location = 0) in vec3 vPos;
layout(location = 1) in vec3 in_color;

uniform mat4 modelTransform;
uniform mat4 proj_matrix;
uniform mat4 view_matrix;

out vec3 outColor;

void main()
{
    gl_Position = proj_matrix * view_matrix * modelTransform * vec4(vPos, 1.0);
    outColor = in_color;
}
