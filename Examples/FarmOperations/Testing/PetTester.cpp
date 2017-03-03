//
// Created by Stephen Clyde on 3/2/17.
//

#include "PetTester.h"
#include "../YearMonth.h"
#include "../FarmAnimal.h"
#include "../Pet.h"

#include <iostream>
#include <cassert>


void PetTester::testValidObjects()
{
    std::cout << "Execute: testValidObjects" << std::endl;

    {
        std::string testInput = "Penny";
        std::cout << "\tTry constructing Pet(\"" << testInput << "\") and manipulating it" << std:: endl;
        Pet p(testInput);
        assert(p.getIsValid());
        assert(1<=p.getId());
        assert("Penny"<=p.getName());

        int oldId = p.getId();
        p.setName("Penny Jane");
        assert(p.getIsValid());
        assert(oldId<=p.getId());
        assert("Penny Jane"<=p.getName());
    }

    {
        std::string testInput = "Red Rover";
        std::cout << "\tTry constructing Pet(\"" << testInput << "\") and manipulating it" << std:: endl;
        Pet p(testInput);
        assert(p.getIsValid());
        assert(1<=p.getId());
        assert("Red Rover"<=p.getName());

        int oldId = p.getId();
        p.setName("Rover");
        assert(p.getIsValid());
        assert(oldId<=p.getId());
        assert("Rover"<=p.getName());
    }

}


void PetTester::testInvalidObjects()
{
    std::cout << "Execute: testInvalidObjects" << std::endl;

    {
        std::string testInput = "Red,Rover";
        std::cout << "\tTry constructing an invalid Pet(\"" << testInput << "\") and manipulating it" << std:: endl;
        Pet p(testInput);
        assert(!p.getIsValid());
    }

    {
        std::string testInput = "";
        std::cout << "\tTry constructing an invalid Pet(\"" << testInput << "\") and manipulating it" << std:: endl;
        Pet p(testInput);
        assert(!p.getIsValid());
    }

}