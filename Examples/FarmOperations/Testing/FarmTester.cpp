//
// Created by Stephen Clyde on 3/2/17.
//

#include "FarmTester.h"
#include "../Farm.h"
#include "../FarmAnimal.h"
#include "../Pet.h"

#include <iostream>
#include <cassert>
#include <fstream>

void FarmTester::testCreateAndAdd()
{
    std::cout << "Execute: testCreateAndAdd" << std::endl;

    {
        std::cout << "\tTry constructing an empty farm" << std:: endl;
        Farm farm;
        assert(0==farm.getCount());
        assert(nullptr==farm.getAnimal(-1));
        assert(nullptr==farm.getAnimal(0));
        assert(nullptr==farm.getAnimal(1));
        assert(nullptr==farm.getAnimal(10));
    }

    {
        std::cout << "\tTry constructing a farm and populating it with some animals" << std:: endl;
        Farm farm;

        // Good animals
        farm.createAndAddNewAnimal("Chicken","Plymouth Rock,2013/6,T");
        farm.createAndAddNewAnimal("Chicken","Leghorn,2015/5,F");
        farm.createAndAddNewAnimal("Cow","Angus,2011/3,F");
        farm.createAndAddNewAnimal("Cow","Jersey,2010/3,T");
        farm.createAndAddNewAnimal("Pig","Hampshire,2012/5");
        farm.createAndAddNewAnimal("Sheep","Merino,2014/2,2016/9");
        farm.createAndAddNewAnimal("Sheep","Suffolk,2015/4,2016/7");
        farm.createAndAddNewAnimal("Sheep","Texel,2013/10,2016/9");
        farm.createAndAddNewAnimal("Pet","Rover");

        // Bad animals
        farm.createAndAddNewAnimal("Chicken","Rover");
        farm.createAndAddNewAnimal("Cow","Rover");

        assert(9==farm.getCount());
        assert("Plymouth Rock"==((FarmAnimal*) farm.getAnimal(0))->getBreed());
        assert("Leghorn"==((FarmAnimal*) farm.getAnimal(1))->getBreed());
        assert("Angus"==((FarmAnimal*) farm.getAnimal(2))->getBreed());
        assert("Jersey"==((FarmAnimal*) farm.getAnimal(3))->getBreed());
        assert("Hampshire"==((FarmAnimal*) farm.getAnimal(4))->getBreed());
        assert("Merino"==((FarmAnimal*) farm.getAnimal(5))->getBreed());
        assert("Suffolk"==((FarmAnimal*) farm.getAnimal(6))->getBreed());
        assert("Texel"==((FarmAnimal*) farm.getAnimal(7))->getBreed());
        assert("Rover"==((Pet*) farm.getAnimal(8))->getName());

        assert(nullptr==farm.getAnimal(-1));
        assert(nullptr==farm.getAnimal(10));
    }
}

void FarmTester::testLoadAndSave()
{
    std::cout << "Execute: testLoadAndSave" << std::endl;

    Farm farm;

    // Good animals
    farm.createAndAddNewAnimal("Chicken","Plymouth Rock,2013/6,T");
    farm.createAndAddNewAnimal("Chicken","Leghorn,2015/5,F");
    farm.createAndAddNewAnimal("Cow","Angus,2011/3,F");
    farm.createAndAddNewAnimal("Cow","Jersey,2010/3,T");
    farm.createAndAddNewAnimal("Pig","Hampshire,2012/5");
    farm.createAndAddNewAnimal("Sheep","Merino,2014/2,2016/9");
    farm.createAndAddNewAnimal("Sheep","Suffolk,2015/4,2016/7");
    farm.createAndAddNewAnimal("Sheep","Texel,2013/10,2016/9");

    std::cout << "\tTry saving a farm with " << farm.getCount() << " animals" << std:: endl << std::endl;
    farm.print(std::cout);
    std::cout << std::endl;
    std::ofstream outputStream("testFarm.txt");
    farm.save(outputStream);
    outputStream.close();

    std::cout << "\tTry loading a farm with " << farm.getCount() << " animals" << std:: endl << std::endl;
    std::ifstream inputStream("testFarm.txt");

    Farm newFarm;
    newFarm.load(inputStream);
    newFarm.print(std::cout);
    std::cout << std::endl;

    assert(farm.getCount() == newFarm.getCount());
    for (int i=0; i<farm.getCount(); i++)
    {
        assert(farm.getAnimal(i)->getIsValid());
        assert(newFarm.getAnimal(i)->getIsValid());
        FarmAnimal* oldAnimal = (FarmAnimal*) farm.getAnimal(i);
        FarmAnimal* newAnimal = (FarmAnimal*) newFarm.getAnimal(i);
        assert(oldAnimal->getBreed() == newAnimal->getBreed());
        assert(oldAnimal->getBornOn() == newAnimal->getBornOn());
    }

    inputStream.close();

}
