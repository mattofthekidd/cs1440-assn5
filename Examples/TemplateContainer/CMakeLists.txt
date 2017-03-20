cmake_minimum_required(VERSION 3.6)
project(TemplateContainer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        Container.h
        Widget.cpp Widget.h Gadget.cpp Gadget.h)

add_executable(TemplateContainer main.cpp ${SOURCE_FILES})