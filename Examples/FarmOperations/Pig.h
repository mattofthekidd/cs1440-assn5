//
// Created by Stephen Clyde on 2/27/17.
//

#ifndef FARMOPERATIONS_PIG_H
#define FARMOPERATIONS_PIG_H

#include "FarmAnimal.h"
#include <ostream>

class Pig : public FarmAnimal {

public:
    Pig(const std::string& breed);

    void print(std::ostream& out);
};


#endif //FARMOPERATIONS_PIG_H
