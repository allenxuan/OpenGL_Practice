cmake_minimum_required(VERSION 3.14)
project(GLFW_GLAD_OpenGL)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        /usr/local/include/
        glad_header/
        glm/
        header/
        stb/)

link_libraries(
        /usr/local/Cellar/glfw/3.3/lib/libglfw.3.3.dylib)
#if (APPLE)
#    link_libraries(
#            "-framework OpenGL")
#endif ()

add_executable(
        GLFW_GLAD_OpenGL

        glad_src/glad.c
        #        one_triangle.cpp
        #        two_triangle.cpp
        #        learn_shader.cpp
        #        learn_shader_temp.cpp
        #        learn_shader_temp2.cpp
        #                learn_shader.cpp
        #        learn_texture_temp.cpp
        #        learn_texture.cpp
        #        learn_transformation.cpp
        #        learn_coordinate_temp.cpp
        #                learn_coordinate_temp2.cpp
        #        learn_coordinate.cpp
        #        learn_camera_temp.cpp
        learn_camera_temp2.cpp
        #        test.cpp
)