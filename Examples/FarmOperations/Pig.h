//
// Created by Stephen Clyde on 2/27/17.
//

#ifndef FARM_OPERATIONS_PIG_H
#define FARM_OPERATIONS_PIG_H

#include "FarmAnimal.h"
#include <ostream>

class Pig : public FarmAnimal {

public:
    Pig(const std::string& input);

    void print(std::ostream& out);
    void save(std::ostream& out);
};


#endif //FARM_OPERATIONS_PIG_H
