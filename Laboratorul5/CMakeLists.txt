cmake_minimum_required(VERSION 3.14)

# set the project name
project(Lab5)

include_directories(src)
include_directories(include)
add_executable(Lab5 src/Source.cpp src/GrilaCarteziana.cpp src/MyListPairs.cpp)
target_link_libraries(Lab5 -lOpenGL32 -lFreeGLUT)
