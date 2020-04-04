cmake_minimum_required(VERSION 3.14)

# set the project name
project(Lab5)

add_executable(Lab5 src/Source.cpp src/GrilaCarteziana.cpp)
target_include_directories(Lab5 PRIVATE src)
target_include_directories(Lab5 PRIVATE include)
target_link_libraries(Lab5 -lOpenGL32 -lFreeGLUT)
