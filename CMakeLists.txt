project(experiment_cmake_dependency)
cmake_minimum_required(VERSION 3.16)
include_directories(include)
add_definitions(-DHEADER_FILE="macro_headerfile.h")
add_executable(app source.cpp)
