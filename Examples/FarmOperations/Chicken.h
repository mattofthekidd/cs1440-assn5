//
// Created by Stephen Clyde on 2/25/17.
//

#ifndef FARM_OPERATIONS_CHICKEN_H
#define FARM_OPERATIONS_CHICKEN_H

#include "FarmAnimal.h"

#include <string>

class Chicken : public FarmAnimal
{
private:
    bool    m_isMolting = false;

public:
    Chicken(const std::string& input);

    bool getIsMolting() const { return m_isMolting; }
    void setIsMolting(bool isMolting) { m_isMolting = isMolting; }

    void print(std::ostream& out);
    void save(std::ostream& out);
};


#endif //FARM_OPERATIONS_CHICKEN_H
