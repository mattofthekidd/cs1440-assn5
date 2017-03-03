//
// Created by Stephen Clyde on 2/27/17.
//

#ifndef FARM_OPERATIONS_COW_H
#define FARM_OPERATIONS_COW_H

#include "FarmAnimal.h"

class Cow : public FarmAnimal {
private:
    bool    m_isMilking = false;

public:
    Cow(const std::string& breed);

    bool getIsMilking() const { return m_isMilking; }
    void setIsMilking(bool isMilking) { m_isMilking = isMilking; }

    void print(std::ostream& out);
    void save(std::ostream& out);
};


#endif //FARM_OPERATIONS_COW_H
