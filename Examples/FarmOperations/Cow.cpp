//
// Created by Stephen Clyde on 2/27/17.
//

#include "Cow.h"

Cow::Cow(const std::string& breed) : FarmAnimal(breed)
{

}

void Cow::print(std::ostream& out)
{
    out << "Cow: ";

    FarmAnimal::print(out);

    if (getIsMilking())
        out << ", Is Milking";

    out << std::endl;
}