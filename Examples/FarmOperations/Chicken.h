//
// Created by Stephen Clyde on 2/25/17.
//

#ifndef FARMOPERATIONS_CHICKEN_H
#define FARMOPERATIONS_CHICKEN_H

#include "FarmAnimal.h"

#include <string>

class Chicken : public FarmAnimal
{
private:
    bool    m_isMolting = false;

public:
    Chicken(const std::string& breed);

    bool getIsMolting() const { return m_isMolting; }
    void setIsMolting(bool isMolting) { m_isMolting = isMolting; }

    void print(std::ostream& out);
};


#endif //FARMOPERATIONS_CHICKEN_H
