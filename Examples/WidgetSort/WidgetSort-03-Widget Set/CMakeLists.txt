cmake_minimum_required(VERSION 3.6)
project(WidgetSort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Widget.cpp Widget.h WidgetSet.cpp WidgetSet.h)
add_executable(WidgetSort ${SOURCE_FILES})