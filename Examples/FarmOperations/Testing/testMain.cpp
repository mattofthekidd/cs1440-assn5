#include <iostream>

#include "YearMonthTester.h"
#include "ChickenTester.h"
#include "CowTester.h"
#include "PigTester.h"
#include "SheepTester.h"
#include "PetTester.h"
#include "FarmTester.h"

int main() {
    std::cout << "Execute Test Cases" << std::endl;

    std::cout << std::endl << "Test YearMonth" << std::endl;
    YearMonthTester yearMonthTester;
    yearMonthTester.testValidObjects();
    yearMonthTester.testInvalidObjects();

    std::cout << std::endl << "Test Chicken" << std::endl;
    ChickenTester chickenTester;
    chickenTester.testValidObjects();
    chickenTester.testInvalidObjects();

    std::cout << std::endl << "Test Cow" << std::endl;
    CowTester cowTester;
    cowTester.testValidObjects();
    cowTester.testInvalidObjects();

    std::cout << std::endl << "Test Pig" << std::endl;
    PigTester pigTester;
    pigTester.testValidObjects();
    pigTester.testInvalidObjects();

    std::cout << std::endl << "Test Sheep" << std::endl;
    SheepTester sheepTester;
    sheepTester.testValidObjects();
    sheepTester.testInvalidObjects();

    std::cout << std::endl << "Test Pet" << std::endl;
    PetTester petTester;
    petTester.testValidObjects();
    petTester.testInvalidObjects();

    std::cout << std::endl << "Test Farm" << std::endl;
    FarmTester farmTester;
    farmTester.testCreateAndAdd();
    farmTester.testLoadAndSave();

    return 0;
}