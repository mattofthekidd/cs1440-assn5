cmake_minimum_required(VERSION 3.6)
project(FarmOperations)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES YearMonth.cpp YearMonth.h
        Farm.cpp Farm.h
        Animal.cpp Animal.h
        FarmAnimal.cpp FarmAnimal.h
        Chicken.cpp Chicken.h
        Cow.cpp Cow.h
        Pig.cpp Pig.h
        Sheep.cpp Sheep.h
        Pet.cpp Pet.h
        MenuOption.cpp MenuOption.h
        Menu.cpp Menu.h
        UserInterface.cpp UserInterface.h
        Utils.cpp Utils.h)

add_executable(FarmOperations main.cpp  ${SOURCE_FILES})

set(TEST_FILES Testing/YearMonthTester.cpp Testing/YearMonthTester.h
        Testing/ChickenTester.cpp Testing/ChickenTester.h
        Testing/CowTester.cpp Testing/CowTester.h
        Testing/SheepTester.cpp Testing/SheepTester.h
        Testing/PigTester.cpp Testing/PigTester.h
        Testing/PetTester.cpp Testing/PetTester.h
        Testing/FarmTester.cpp Testing/FarmTester.h)

add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})

