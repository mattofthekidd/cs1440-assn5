//
// Created by Stephen Clyde on 3/2/17.
//

#include "CowTester.h"
#include "../YearMonth.h"
#include "../FarmAnimal.h"
#include "../Cow.h"

#include <iostream>
#include <cassert>


void CowTester::testValidObjects()
{
    std::cout << "Execute: testValidObjects" << std::endl;

    {
        std::string testInput = "Angus,2015/3,F";
        std::cout << "\tTry constructing Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(c.getIsValid());
        assert(1<=c.getId());
        assert("Angus"<=c.getBreed());
        assert(2015==c.getBornOn().getYear());
        assert(3==c.getBornOn().getMonth());
        assert(23<=c.getAgeInMonths());
        assert(!c.getIsMilking());

        int oldId = c.getId();
        c.setBreed("Jersey");
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2015==c.getBornOn().getYear());
        assert(3==c.getBornOn().getMonth());
        assert(!c.getIsMilking());

        c.setBornOn(YearMonth(2014,1));
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(!c.getIsMilking());

        c.setIsMilking(true);
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMilking());

        c.setBornOn(YearMonth(2014,0));
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Brown Holstein,2012/1,T";
        std::cout << "\tTry constructing Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(c.getIsValid());
        assert(1<=c.getId());
        assert("Brown Holstein"<=c.getBreed());
        assert(2012==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(36<=c.getAgeInMonths());
        assert(c.getIsMilking());

        int oldId = c.getId();
        c.setBreed("Jersey");
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2012==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMilking());

        c.setBornOn(YearMonth(2014,1));
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMilking());

        c.setIsMilking(false);
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(!c.getIsMilking());

        c.setBornOn(YearMonth(2014,0));
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Angus,2014/12,F";
        std::cout << "\tTry constructing Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(c.getIsValid());
        assert(1<=c.getId());
        assert("Angus"<=c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(12==c.getBornOn().getMonth());
        assert(25<=c.getAgeInMonths());
        assert(!c.getIsMilking());

        int oldId = c.getId();
        c.setBreed("Jersey");
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(12==c.getBornOn().getMonth());
        assert(!c.getIsMilking());

        c.setBornOn(YearMonth(2014,1));
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(!c.getIsMilking());

        c.setIsMilking(true);
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Jersey"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMilking());

        c.setBornOn(YearMonth(2014,0));
        assert(!c.getIsValid());
    }
}


void CowTester::testInvalidObjects()
{
    std::cout << "Execute: testInvalidObjects" << std::endl;

    {
        std::string testInput = "Angus,2014/12,X";
        std::cout << "\tTry constructing an invalid Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Angus,2014/13,F";
        std::cout << "\tTry constructing an invalid Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Angus,2014/12";
        std::cout << "\tTry constructing an invalid Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Angus";
        std::cout << "\tTry constructing an invalid Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "";
        std::cout << "\tTry constructing an invalid Cow(\"" << testInput << "\") and manipulating it" << std:: endl;
        Cow c(testInput);
        assert(!c.getIsValid());
    }

}