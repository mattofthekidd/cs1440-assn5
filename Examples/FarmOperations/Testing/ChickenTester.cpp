//
// Created by Stephen Clyde on 2/25/17.
//

#include "ChickenTester.h"
#include "../YearMonth.h"
#include "../FarmAnimal.h"
#include "../Chicken.h"

#include <iostream>
#include <cassert>

void ChickenTester::testValidObjects()
{
    std::cout << "Execute: testValidObjects" << std::endl;
    YearMonth currentYearMonth;

    {
        std::cout << "\tTry constructing Chicken(\"Plymouth Rock\") and manipulating it" << std:: endl;
        Chicken c("Plymouth Rock");
        assert(1<=c.getId());
        assert("Plymouth Rock"<=c.getBreed());
        assert(currentYearMonth==c.getBornOn());
        assert(0==c.getAgeInMonths());
        assert(!c.getIsMolting());
    }
}


void ChickenTester::testInvalidObjects()
{
    std::cout << "Execute: testInvalidObjects" << std::endl;

}