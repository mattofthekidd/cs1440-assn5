//
// Created by Stephen Clyde on 3/1/17.
//

#include "Animal.h"
#include <iomanip>

unsigned int Animal::m_nextId = 1;

Animal::Animal() : m_id(nextId()) { }

void Animal::print(std::ostream& out)
{
    out << "#" << std::setfill('0') << std::setw(10) << getId() << std::setfill(' ');
}

void Animal::save(std::ostream& out)
{
    // Do nothing for now
}

unsigned int Animal::nextId()
{
    if (m_nextId==UINT32_MAX)
        m_nextId=1;

    return m_nextId++;
}

