cmake_minimum_required(VERSION 3.6)
project(SimpleTemplates)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        MaxFunctions.h MaxFunctions.cpp
        MaxTemplate.h)
add_executable(SimpleTemplates ${SOURCE_FILES})