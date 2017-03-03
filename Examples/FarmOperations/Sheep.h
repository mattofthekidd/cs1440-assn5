//
// Created by Stephen Clyde on 2/27/17.
//

#ifndef FARM_OPERATIONS_SHEEP_H
#define FARM_OPERATIONS_SHEEP_H

#include "FarmAnimal.h"
#include "YearMonth.h"
#include <ostream>

class Sheep : public FarmAnimal
{
private:
    YearMonth m_lastSheering;

public:
    Sheep(const std::string& input);

    const YearMonth& getLastSheering() const { return m_lastSheering; }
    void setLastSheering(const YearMonth& sheering);

    void print(std::ostream& out);
    void save(std::ostream& out);

private:
    void validate();
};


#endif //FARM_OPERATIONS_SHEEP_H
