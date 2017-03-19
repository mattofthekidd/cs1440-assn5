cmake_minimum_required(VERSION 3.6)
project(GeoRegions)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Utils.cpp Utils.h
        MenuOption.cpp MenuOption.h
        Menu.cpp Menu.h
        UserInterface.cpp UserInterface.h
        World.cpp World.hpp
        Nation.cpp Nation.hpp
        State.cpp  State.hpp
        County.cpp County.hpp
        City.cpp City.hpp
        Region.cpp Region.hpp
        WorldUserInterface.cpp WorldUserInterface.h
        NationUserInterface.cpp NationUserInterface.h
        StateUserInterface.cpp StateUserInterface.h
        CountyUserInterface.cpp CountyUserInterface.h
        )

add_executable(GeoRegions main.cpp ${SOURCE_FILES})

set(TEST_FILES
        Testing/testMain.cpp
        Testing/UtilsTester.cpp Testing/UtilsTester.h
        Testing/RegionTester.cpp Testing/RegionTester.h)

add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})