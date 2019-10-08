#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 TexCoord;

// texture sampler
uniform sampler2D textureSampler2D;

void main()
{
	FragColor = texture(textureSampler2D, TexCoord) * vec4(ourColor, 1.0);
}