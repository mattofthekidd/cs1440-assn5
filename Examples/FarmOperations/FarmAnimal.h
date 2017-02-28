//
// Created by Stephen Clyde on 2/25/17.
//

#ifndef FARM_OPERATIONS_FARM_ANIMAL_H
#define FARM_OPERATIONS_FARM_ANIMAL_H

#include <ostream>
#include <string>
#include "YearMonth.h"

class FarmAnimal {
private:
    unsigned int        m_id;
    std::string         m_breed = 0;
    YearMonth           m_bornOn;

    static unsigned int m_nextId;

protected:
    FarmAnimal();
    FarmAnimal(const std::string& breed);

public:
    unsigned int getId() const { return m_id; }
    const std::string& getBreed() const { return m_breed; }
    void setBreed(const std::string& breed) { m_breed = breed; }
    const YearMonth& getBornOn() const { return m_bornOn; }
    void setBornOn(const YearMonth& bornOn) { m_bornOn = bornOn; }

    int getAgeInMonths() const;

    virtual void print(std::ostream& out);

private:
    static unsigned int nextId();
};


#endif //FARM_OPERATIONS_FARM_ANIMAL_H
