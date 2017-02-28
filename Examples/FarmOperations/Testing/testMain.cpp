#include <iostream>

#include "YearMonthTester.h"
#include "ChickenTester.h"

int main() {
    std::cout << "Execute Test Cases" << std::endl;

    std::cout << std::endl << "Test YearMonth" << std::endl;
    YearMonthTester yearMonthTester;
    yearMonthTester.testValidObjects();
    yearMonthTester.testInvalidObjects();

    std::cout << std::endl << "Test Chicken" << std::endl;
    ChickenTester chickernTester;
    chickernTester.testValidObjects();
    chickernTester.testInvalidObjects();

    return 0;
}