//
// Created by Stephen Clyde on 2/25/17.
//

#include "FarmAnimal.h"

FarmAnimal::FarmAnimal() { }

void FarmAnimal::setBornOn(const YearMonth& bornOn)
{
    m_bornOn = bornOn;
    setIsValid(m_bornOn.getIsValid());
}

int FarmAnimal::getAgeInMonths() const
{
    YearMonth currentYearMonth;
    return currentYearMonth.getDifference(m_bornOn);
}

void FarmAnimal::print(std::ostream& out)
{
    Animal::print(out);

    out << ", breed=" << getBreed()
        << ", bornOn=";

    m_bornOn.print(out);
}

void FarmAnimal::save(std::ostream& out)
{
    Animal::save(out);

    out << getBreed() << ",";

    m_bornOn.print(out);

    out << ",";
}
