cmake_minimum_required(VERSION 3.6)
project(FarmOperations)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES YearMonth.cpp YearMonth.h FarmAnimal.cpp FarmAnimal.h Chicken.cpp Chicken.h)
add_executable(FarmOperations main.cpp  ${SOURCE_FILES} Cow.cpp Cow.h Pig.cpp Pig.h Sheep.cpp Sheep.h)

set(TEST_FILES Testing/YearMonthTester.cpp Testing/YearMonthTester.h Testing/ChickenTester.cpp Testing/ChickenTester.h)
add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})
