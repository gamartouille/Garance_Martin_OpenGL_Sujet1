cmake_minimum_required(VERSION 3.5)

project(OpenGL_API_V6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(OpenGL_API_V6 main.cpp
    renderer.h renderer.cpp
    vertexarray.h vertexarray.cpp
    vertexbuffer.h vertexbuffer.cpp
    shader.h shader.cpp
    shaders/SimpleFragmentShader.fragmentshader shaders/SimpleVertexShader.vertexshader
    object.cpp object.h texture.cpp texture.h uvbuffer.cpp uvbuffer.h
    stb_image/stb_image.cpp stb_image/stb_image.h
    camera.cpp camera.h
    controls.cpp controls.h fpscontrols.cpp fpscontrols.h navigationcontrols.cpp navigationcontrols.h)

include(GNUInstallDirs)
install(TARGETS OpenGL_API_V6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

target_link_libraries(OpenGL_API_V6 glfw GLEW libGLEW.so libGLU.so libGL.so)
