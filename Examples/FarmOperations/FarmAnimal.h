//
// Created by Stephen Clyde on 2/25/17.
//

#ifndef FARM_OPERATIONS_FARM_ANIMAL_H
#define FARM_OPERATIONS_FARM_ANIMAL_H

#include <ostream>
#include <string>
#include "Animal.h"
#include "YearMonth.h"

class FarmAnimal : public Animal
{
private:
    std::string         m_breed = "";
    YearMonth           m_bornOn;

protected:
    FarmAnimal();

public:
    const std::string& getBreed() const { return m_breed; }
    void setBreed(const std::string& breed) { m_breed = breed; }
    const YearMonth& getBornOn() const { return m_bornOn; }
    void setBornOn(const YearMonth& bornOn);

    int getAgeInMonths() const;

    void print(std::ostream& out);
    void save(std::ostream& out);
};


#endif //FARM_OPERATIONS_FARM_ANIMAL_H
