//
// Created by Stephen Clyde on 3/1/17.
//

#ifndef FARM_OPERATIONS_PET_H
#define FARM_OPERATIONS_PET_H

#include "Animal.h"
#include <string>

class Pet : public Animal
{
private:
    std::string m_name;

public:
    Pet(const std::string& input);

    const std::string& getName() const { return m_name; }
    void setName(const std::string& name) { m_name = name; }

    void print(std::ostream& out);
    void save(std::ostream& out);
};


#endif //FARMOPERATIONS_PET_H
