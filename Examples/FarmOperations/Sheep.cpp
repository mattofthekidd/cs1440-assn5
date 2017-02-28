//
// Created by Stephen Clyde on 2/27/17.
//

#include "Sheep.h"

Sheep::Sheep(const std::string& breed) : FarmAnimal(breed)
{

}

void Sheep::print(std::ostream& out)
{
    out << "Sheep: ";

    FarmAnimal::print(out);

    out << ", lastSheering=";

    if (m_lastSheering>getBornOn())
        m_lastSheering.print(out);

    out << std::endl;
}