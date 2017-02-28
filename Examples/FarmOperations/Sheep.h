//
// Created by Stephen Clyde on 2/27/17.
//

#ifndef FARMOPERATIONS_SHEEP_H
#define FARMOPERATIONS_SHEEP_H

#include "FarmAnimal.h"
#include "YearMonth.h"
#include <ostream>

class Sheep : public FarmAnimal
{
private:
    YearMonth m_lastSheering;

public:
    Sheep(const std::string& breed);

    const YearMonth& getLastSheering() const { return m_lastSheering; }
    void setLastSheering(const YearMonth& sheering) { m_lastSheering = sheering; }

    void print(std::ostream& out);
};


#endif //FARMOPERATIONS_SHEEP_H
