//
// Created by Stephen Clyde on 2/25/17.
//

#include "Chicken.h"

#include <string>

Chicken::Chicken(const std::string &breed) : FarmAnimal(breed)
{
}

void Chicken::print(std::ostream& out)
{
    out << "Chicken: ";

    FarmAnimal::print(out);

    if (getIsMolting())
        out << ", Is Molting";

    out << std::endl;
}

