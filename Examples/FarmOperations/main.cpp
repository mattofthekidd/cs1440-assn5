#include <iostream>
#include "FarmAnimal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"
#include "Sheep.h"

const int SIZE = 12;

int main() {

    // Temporary -- the following code will be eventually be replaced be user interface and a Farm class
    // Create an array of FarmAnimals and print the array

    FarmAnimal** myAnimals = new FarmAnimal*[SIZE];
    myAnimals[0] = new Chicken("Plymouth Rock");
    myAnimals[1] = new Chicken("Longhorn");
    myAnimals[2] = new Chicken("Longhorn");

    Chicken* chicken = new Chicken("Plymouth Rock");
    chicken->setIsMolting(true);
    myAnimals[3] = chicken;

    myAnimals[4] = new Cow("Brown");
    myAnimals[5] = new Cow("Spotted");

    Cow* cow6 = new Cow("White");
    cow6->setIsMilking(true);
    YearMonth bd6(2013, 4);
    cow6->setBornOn(bd6);
    myAnimals[6] = cow6;

    myAnimals[7] = new Cow("Brown");

    myAnimals[8] = new Pig("Grey");
    myAnimals[9] = new Pig("Pink");

    Sheep* sheep10 = new Sheep("White");
    YearMonth db10(2015, 2);
    sheep10->setBornOn(db10);
    YearMonth sheering10(2016, 8);
    sheep10->setLastSheering(sheering10);
    myAnimals[10] = sheep10;

    Sheep* sheep11 = new Sheep("Black");
    YearMonth db11(2016, 2);
    sheep11->setBornOn(db10);
    YearMonth sheering11(2016, 8);
    sheep11->setLastSheering(sheering11);
    myAnimals[11] = sheep11;

    // Print all of the farm animals
    for (int i=0; i<SIZE; i++)
    {
        myAnimals[i]->print(std::cout);
    }

    // Remove dynamically memory
    for (int i=0; i<SIZE; i++)
    {
        delete myAnimals[i];
        myAnimals[i] = nullptr;
    }
    return 0;
}