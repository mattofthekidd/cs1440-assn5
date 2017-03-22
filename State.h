//
// Created by Stephen Clyde on 3/4/17.
//

#include "Region.h"
#include "Nation.h"
#include <string>

#ifndef GEO_REGIONS_STATE_H
#define GEO_REGIONS_STATE_H

// TODO: Finish definition for a State class
class State : public Region {
public:
    State(const std::string data[]);
};

#endif //GEO_REGIONS_STATE_H
