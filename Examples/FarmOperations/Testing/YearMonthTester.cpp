//
// Created by Stephen Clyde on 2/25/17.
//

#include "YearMonthTester.h"
#include "../YearMonth.h"

#include <cassert>
#include <iostream>

void YearMonthTester::testValidObjects()
{
    std::cout << "Execute: testValidObjects" << std::endl;

    {
        std::cout << "\tTry the default constructor" << std:: endl;
        YearMonth ym;
        assert(2017<=ym.getYear());
        assert(1<=ym.getMonth() && ym.getMonth()<=12);
        assert(ym.getIsValid());
    }

    {
        std::cout << "\tTry valid case: YearMonth(1930, 3)" << std:: endl;
        YearMonth ym(1930, 3);
        assert(1930==ym.getYear());
        assert(3==ym.getMonth());
        assert(ym.getIsValid());
    }

    {
        std::cout << "\tTry valid case: YearMonth(2015, 10)" << std:: endl;
        YearMonth ym(2015, 10);
        assert(2015==ym.getYear());
        assert(10==ym.getMonth());
        assert(ym.getIsValid());
    }

    {
        std::cout << "\tTry valid case: YearMonth(610, 6)" << std:: endl;
        YearMonth ym(610, 6);
        assert(610==ym.getYear());
        assert(6==ym.getMonth());
        assert(ym.getIsValid());
    }

    {
        std::cout << "\tTry valid case: YearMonth(1910, 7)" << std:: endl;
        YearMonth ym1(1910, 7);
        YearMonth ym2(ym1);

        assert(1910==ym2.getYear());
        assert(7==ym2.getMonth());
        assert(ym2.getIsValid());
    }

    {
        std::cout << "\tTry valid case: YearMonth(2010, 4)" << std:: endl;
        YearMonth ym1(2010, 4);
        YearMonth ym2(ym1);

        assert(2010==ym2.getYear());
        assert(4==ym2.getMonth());
        assert(ym2.getIsValid());
    }

}

void YearMonthTester::testInvalidObjects()
{
    std::cout << "Execute: testInvalidObjects" << std::endl;

    {
        std::cout << "\tTry invalid case: YearMonth(-1,3)" << std:: endl;
        YearMonth ym(-1,3);
        assert(-1<=ym.getYear());
        assert(3==ym.getMonth());
        assert(!ym.getIsValid());
    }

    {
        std::cout << "\tTry invalid case: YearMonth(2011,0)" << std:: endl;
        YearMonth ym(2011,0);
        assert(2011==ym.getYear());
        assert(0==ym.getMonth());
        assert(!ym.getIsValid());
    }

    {
        std::cout << "\tTry invalid case: YearMonth(2012,13)" << std:: endl;
        YearMonth ym(2012,13);
        assert(2012==ym.getYear());
        assert(13==ym.getMonth());
        assert(!ym.getIsValid());
    }
}