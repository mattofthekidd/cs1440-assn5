//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef FARM_OPERATIONS_USER_INTERFACE_H
#define FARM_OPERATIONS_USER_INTERFACE_H

#include <string>

class Farm;

class UserInterface {
private:
    Farm*   m_currentFarm = nullptr;

public:
    void run();

private:
    void farmMenu();
    void cleanupCurrentFarm();
    void loadFarm();
    void saveFarm();

    std::string getStringInput(std::string prompt);
};


#endif //FARM_OPERATIONS_USER_INTERFACE_H
