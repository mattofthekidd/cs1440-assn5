//
// Created by Stephen Clyde on 2/6/17.
//

#include "UtilsTester.h"
#include "../Utils.h"
#include <iostream>

void UtilsTester::testForNormalCases()
{

    std::cout << "test for normal cases" << std::endl;

    // Test case 1
    double d1 = 7;
    double d2 = 3;
    double margin = 2;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                << ", " << d2
                << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    result = isApproximatelyEquals(d2,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }

    d1 = 0.0325;
    d2 = 0.03249;
    margin = 0.001;
    result = isApproximatelyEquals(d1,d2,margin);
    if (!result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }
}

void UtilsTester::testForBadMargin()
{

    std::cout << "test for bad marins" << std::endl;

    // Test case 1
    double d1 = 4;
    double d2 = 4;
    double margin = 0;

    bool result = isApproximatelyEquals(d1,d2,margin);

    if (result)
    {
        std::cout << "Unexpected result for (" << d1
                  << ", " << d2
                  << ", " << margin << ")" << std::endl;
    }

    // Test case 2
    margin = -1;
    result = isApproximatelyEquals(d2,d1,margin);
    if (result)
    {
        std::cout << "Unexpected result for (" << d2
                  << ", " << d1
                  << ", " << margin << ")" << std::endl;
    }
}

void UtilsTester::testForZeros()
{

}

void UtilsTester::testForInfinity()
{

}
