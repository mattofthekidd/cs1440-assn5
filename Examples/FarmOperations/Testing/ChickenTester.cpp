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

    {
        std::string testInput = "Plymouth Rock,2015/3,F";
        std::cout << "\tTry constructing Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(c.getIsValid());
        assert(1<=c.getId());
        assert("Plymouth Rock"==c.getBreed());
        assert(2015==c.getBornOn().getYear());
        assert(3==c.getBornOn().getMonth());
        assert(23<=c.getAgeInMonths());
        assert(!c.getIsMolting());

        int oldId = c.getId();
        c.setBreed("Leghorn");
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Leghorn"==c.getBreed());
        assert(2015==c.getBornOn().getYear());
        assert(3==c.getBornOn().getMonth());
        assert(!c.getIsMolting());

        c.setBornOn(YearMonth(2014,1));
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Leghorn"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(!c.getIsMolting());

        c.setIsMolting(true);
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Leghorn"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMolting());

        c.setBornOn(YearMonth(2014,0));
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Leghorn,2012/1,T";
        std::cout << "\tTry constructing Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(c.getIsValid());
        assert(1<=c.getId());
        assert("Leghorn"<=c.getBreed());
        assert(2012==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(36<=c.getAgeInMonths());
        assert(c.getIsMolting());

        int oldId = c.getId();
        c.setBreed("Plymouth Rock");
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Plymouth Rock"==c.getBreed());
        assert(2012==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMolting());

        c.setBornOn(YearMonth(2014,1));
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Plymouth Rock"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMolting());

        c.setIsMolting(false);
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Plymouth Rock"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(!c.getIsMolting());

        c.setBornOn(YearMonth(2014,-1));
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Leghorn,2014/12,F";
        std::cout << "\tTry constructing Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(c.getIsValid());
        assert(1<=c.getId());
        assert("Leghorn"<=c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(12==c.getBornOn().getMonth());
        assert(25<=c.getAgeInMonths());
        assert(!c.getIsMolting());

        int oldId = c.getId();
        c.setBreed("Plymouth Rock");
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Plymouth Rock"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(12==c.getBornOn().getMonth());
        assert(!c.getIsMolting());

        c.setBornOn(YearMonth(2014,1));
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Plymouth Rock"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(!c.getIsMolting());

        c.setIsMolting(true);
        assert(c.getIsValid());
        assert(oldId==c.getId());
        assert("Plymouth Rock"==c.getBreed());
        assert(2014==c.getBornOn().getYear());
        assert(1==c.getBornOn().getMonth());
        assert(c.getIsMolting());

        c.setBornOn(YearMonth(-1,10));
        assert(!c.getIsValid());
    }
}


void ChickenTester::testInvalidObjects()
{
    std::cout << "Execute: testInvalidObjects" << std::endl;

    {
        std::string testInput = "Leghorn,2014/12,X";
        std::cout << "\tTry constructing an invalid Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Leghorn,2014/13,F";
        std::cout << "\tTry constructing an invalid Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Leghorn,2014/12";
        std::cout << "\tTry constructing an invalid Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "Leghorn";
        std::cout << "\tTry constructing an invalid Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(!c.getIsValid());
    }

    {
        std::string testInput = "";
        std::cout << "\tTry constructing an invalid Chicken(\"" << testInput << "\") and manipulating it" << std:: endl;
        Chicken c(testInput);
        assert(!c.getIsValid());
    }

}