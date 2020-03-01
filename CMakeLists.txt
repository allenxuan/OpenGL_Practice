cmake_minimum_required(VERSION 3.14)
project(GLFW_GLAD_OpenGL)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        /usr/local/include/
        glad_header/
        glm/
        header/
        imgui/
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
        imgui/imgui.cpp
        imgui/imgui_demo.cpp
        imgui/imgui_draw.cpp
        imgui/imgui_impl_glfw.cpp
        imgui/imgui_impl_opengl3.cpp
        imgui/imgui_widgets.cpp
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
        #        learn_camera_temp2.cpp
        #        learn_camera_temp3.cpp
        #        learn_camera.cpp
        #        colors.cpp
        #        basic_lighting_diffuse.cpp
        #                basic_lighting_specular.cpp
        #        basic_lighting_specular_imgui_integrated.cpp
        #        demo_src/lighting/materials/materials.cpp
        #        demo_src/lighting/lighting_maps/lighting_maps_specular.cpp
        #        demo_src/lighting/light_casters/light_casters_directional.cpp
        #        demo_src/lighting/light_casters/light_casters_point.cpp
        #        demo_src/lighting/light_casters/light_casters_spot_soft.cpp
        demo_src/lighting/multiple_lights/multiple_lights.cpp
        #        my_imgui_demo.cpp
        #        c_plus_plus_test.cpp
        #        test.cpp
)