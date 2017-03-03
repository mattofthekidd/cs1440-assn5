//
// Created by Stephen Clyde on 3/2/17.
//

#include "SheepTester.h"
#include "../YearMonth.h"
#include "../FarmAnimal.h"
#include "../Sheep.h"

#include <iostream>
#include <cassert>

void SheepTester::testValidObjects()
{
    std::cout << "Execute: testValidObjects" << std::endl;

    {
        std::string testInput = "Suffolk,2015/3,2016/10";
        std::cout << "\tTry constructing Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(s.getIsValid());
        assert(1<=s.getId());
        assert("Suffolk"<=s.getBreed());
        assert(2015==s.getBornOn().getYear());
        assert(3==s.getBornOn().getMonth());
        assert(23<=s.getAgeInMonths());
        assert(2016==s.getLastSheering().getYear());
        assert(10==s.getLastSheering().getMonth());

        int oldId = s.getId();
        s.setBreed("Merino");
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2015==s.getBornOn().getYear());
        assert(3==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(10==s.getLastSheering().getMonth());

        s.setBornOn(YearMonth(2014,1));
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(10==s.getLastSheering().getMonth());

        s.setLastSheering(YearMonth(2016,11));
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(11==s.getLastSheering().getMonth());

        s.setBornOn(YearMonth(2014,0));
        assert(!s.getIsValid());

        s.setBornOn(YearMonth(2016,11));
        assert(s.getIsValid());

        s.setLastSheering(YearMonth(2016,0));
        assert(!s.getIsValid());
    }

    {
        std::string testInput = "Spotted Texel,2012/1,2016/10";
        std::cout << "\tTry constructing Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(s.getIsValid());
        assert(1<=s.getId());
        assert("Spotted Texel"<=s.getBreed());
        assert(2012==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(36<=s.getAgeInMonths());
        assert(2016==s.getLastSheering().getYear());
        assert(10==s.getLastSheering().getMonth());

        int oldId = s.getId();
        s.setBreed("Merino");
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2012==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(10==s.getLastSheering().getMonth());

        s.setBornOn(YearMonth(2014,1));
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(10==s.getLastSheering().getMonth());

        s.setLastSheering(YearMonth(2016,11));
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(11==s.getLastSheering().getMonth());

        s.setBornOn(YearMonth(2014,0));
        assert(!s.getIsValid());

        s.setBornOn(YearMonth(2016,11));
        assert(s.getIsValid());

        s.setLastSheering(YearMonth(2016,0));
        assert(!s.getIsValid());
    }

    {
        std::string testInput = "Suffolk,2014/12,2016/8";
        std::cout << "\tTry constructing Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(s.getIsValid());
        assert(1<=s.getId());
        assert("Suffolk"<=s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(12==s.getBornOn().getMonth());
        assert(25<=s.getAgeInMonths());
        assert(2016==s.getLastSheering().getYear());
        assert(8==s.getLastSheering().getMonth());


        int oldId = s.getId();
        s.setBreed("Merino");
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(12==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(8==s.getLastSheering().getMonth());

        s.setBornOn(YearMonth(2014,1));
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(8==s.getLastSheering().getMonth());

        s.setLastSheering(YearMonth(2016,11));
        assert(s.getIsValid());
        assert(oldId==s.getId());
        assert("Merino"==s.getBreed());
        assert(2014==s.getBornOn().getYear());
        assert(1==s.getBornOn().getMonth());
        assert(2016==s.getLastSheering().getYear());
        assert(11==s.getLastSheering().getMonth());

        s.setBornOn(YearMonth(2014,0));
        assert(!s.getIsValid());

        s.setBornOn(YearMonth(2016,11));
        assert(s.getIsValid());

        s.setLastSheering(YearMonth(2016,0));
        assert(!s.getIsValid());
    }
}


void SheepTester::testInvalidObjects()
{
    std::cout << "Execute: testInvalidObjects" << std::endl;

    {
        std::string testInput = "Merino,2014/12,2016/13";
        std::cout << "\tTry constructing an invalid Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(!s.getIsValid());
    }

    {
        std::string testInput = "Merino,2014/12,2010/10";
        std::cout << "\tTry constructing an invalid Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(!s.getIsValid());
    }

    {
        std::string testInput = "Merino,2012/13,2015/10";
        std::cout << "\tTry constructing an invalid Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(!s.getIsValid());
    }

    {
        std::string testInput = "Merino,2012/12";
        std::cout << "\tTry constructing an invalid Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(!s.getIsValid());
    }

    {
        std::string testInput = "Merino";
        std::cout << "\tTry constructing an invalid Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(!s.getIsValid());
    }

    {
        std::string testInput = "";
        std::cout << "\tTry constructing an invalid Sheep(\"" << testInput << "\") and manipulating it" << std:: endl;
        Sheep s(testInput);
        assert(!s.getIsValid());
    }

}