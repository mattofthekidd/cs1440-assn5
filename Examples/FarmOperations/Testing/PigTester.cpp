//
// Created by Stephen Clyde on 3/2/17.
//

#include "PigTester.h"
#include "../YearMonth.h"
#include "../FarmAnimal.h"
#include "../Pig.h"

#include <iostream>
#include <cassert>

void PigTester::testValidObjects()
{
    std::cout << "Execute: testValidObjects" << std::endl;

    {
        std::string testInput = "Hampshire,2015/3,F";
        std::cout << "\tTry constructing Pig(\"" << testInput << "\") and manipulating it" << std:: endl;
        Pig p(testInput);
        assert(p.getIsValid());
        assert(1<=p.getId());
        assert("Hampshire"<=p.getBreed());
        assert(2015==p.getBornOn().getYear());
        assert(3==p.getBornOn().getMonth());
        assert(23<=p.getAgeInMonths());

        int oldId = p.getId();
        p.setBreed("Poland China");
        assert(p.getIsValid());
        assert(oldId==p.getId());
        assert("Poland China"==p.getBreed());
        assert(2015==p.getBornOn().getYear());
        assert(3==p.getBornOn().getMonth());

        p.setBornOn(YearMonth(2014,1));
        assert(p.getIsValid());
        assert(oldId==p.getId());
        assert("Poland China"==p.getBreed());
        assert(2014==p.getBornOn().getYear());
        assert(1==p.getBornOn().getMonth());

        p.setBornOn(YearMonth(2014,0));
        assert(!p.getIsValid());
    }

    {
        std::string testInput = "Poland China,2012/1,T";
        std::cout << "\tTry constructing Pig(\"" << testInput << "\") and manipulating it" << std:: endl;
        Pig p(testInput);
        assert(p.getIsValid());
        assert(1<=p.getId());
        assert("Poland China"<=p.getBreed());
        assert(2012==p.getBornOn().getYear());
        assert(1==p.getBornOn().getMonth());
        assert(36<=p.getAgeInMonths());

        int oldId = p.getId();
        p.setBreed("Berkshire");
        assert(p.getIsValid());
        assert(oldId==p.getId());
        assert("Berkshire"==p.getBreed());
        assert(2012==p.getBornOn().getYear());
        assert(1==p.getBornOn().getMonth());

        p.setBornOn(YearMonth(2014,1));
        assert(p.getIsValid());
        assert(oldId==p.getId());
        assert("Berkshire"==p.getBreed());
        assert(2014==p.getBornOn().getYear());
        assert(1==p.getBornOn().getMonth());

        p.setBornOn(YearMonth(2014,0));
        assert(!p.getIsValid());
    }

    {
        std::string testInput = "Hampshire,2014/12,F";
        std::cout << "\tTry constructing Pig(\"" << testInput << "\") and manipulating it" << std:: endl;
        Pig p(testInput);
        assert(p.getIsValid());
        assert(1<=p.getId());
        assert("Hampshire"<=p.getBreed());
        assert(2014==p.getBornOn().getYear());
        assert(12==p.getBornOn().getMonth());
        assert(25<=p.getAgeInMonths());

        int oldId = p.getId();
        p.setBreed("Berkshire");
        assert(p.getIsValid());
        assert(oldId==p.getId());
        assert("Berkshire"==p.getBreed());
        assert(2014==p.getBornOn().getYear());
        assert(12==p.getBornOn().getMonth());

        p.setBornOn(YearMonth(2014,1));
        assert(p.getIsValid());
        assert(oldId==p.getId());
        assert("Berkshire"==p.getBreed());
        assert(2014==p.getBornOn().getYear());
        assert(1==p.getBornOn().getMonth());

        p.setBornOn(YearMonth(2014,0));
        assert(!p.getIsValid());
    }
}


void PigTester::testInvalidObjects()
{
    std::cout << "Execute: testInvalidObjects" << std::endl;

    {
        std::string testInput = "Hampshire,2014/0";
        std::cout << "\tTry constructing an invalid Pig(\"Hampshire,2014/0\")" << std:: endl;
        Pig p(testInput);
        assert(!p.getIsValid());
    }

    {
        std::string testInput = "Hampshire,2014/13";
        std::cout << "\tTry constructing an invalid Pig(\"Hampshire,2014/0\")" << std:: endl;
        Pig p(testInput);
        assert(!p.getIsValid());
    }

    {
        std::string testInput = "Hampshire";
        std::cout << "\tTry constructing an invalid Pig(\"Hampshire,2014/0\")" << std:: endl;
        Pig p(testInput);
        assert(!p.getIsValid());
    }

    {
        std::string testInput = "";
        std::cout << "\tTry constructing an invalid Pig(\"Hampshire,2014/0\")" << std:: endl;
        Pig p(testInput);
        assert(!p.getIsValid());
    }

}