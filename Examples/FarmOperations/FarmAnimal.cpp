//
// Created by Stephen Clyde on 2/25/17.
//

#include "FarmAnimal.h"

#include <limits>

unsigned int FarmAnimal::m_nextId = 1;

FarmAnimal::FarmAnimal() : m_id(nextId())
{
}

FarmAnimal::FarmAnimal(const std::string& breed):
        m_id(nextId()), m_breed(breed)
{
}

int FarmAnimal::getAgeInMonths() const
{
    YearMonth currentYearMonth;
    return currentYearMonth.getDifference(m_bornOn);
}

void FarmAnimal::print(std::ostream& out)
{
    out << "#" << getId()
        << ", breed=" << getBreed()
        << ", bornOn=";

    m_bornOn.print(out);
}

unsigned int FarmAnimal::nextId()
{
    if (m_nextId==UINT32_MAX)
        m_nextId=1;

    return m_nextId++;
}
