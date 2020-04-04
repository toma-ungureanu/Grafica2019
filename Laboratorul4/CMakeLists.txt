cmake_minimum_required(VERSION 3.14)

# set the project name
project(Lab4)

add_executable(Lab4 src/Source.cpp src/GrilaCarteziana.cpp)
target_include_directories(Lab4 PRIVATE src)
target_include_directories(Lab4 PRIVATE include)
target_link_libraries(Lab4 -lOpenGL32 -lFreeGLUT)
