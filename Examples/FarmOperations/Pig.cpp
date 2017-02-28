//
// Created by Stephen Clyde on 2/27/17.
//

#include "Pig.h"

Pig::Pig(const std::string& breed) : FarmAnimal(breed) {}

void Pig::print(std::ostream& out)
{
    out << "Pig: ";

    FarmAnimal::print(out);

    out << std::endl;
}