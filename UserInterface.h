//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef GEO_REGIONS_USER_INTERFACE_H
#define GEO_REGIONS_USER_INTERFACE_H

#include "Region.h"
#include <string>

class Menu;
class Region;

class UserInterface {
protected:
    std::shared_ptr<Region>   m_currentRegion = nullptr;
    Menu*     m_menu = nullptr;
    Region::RegionType  m_subRegionType;

public:
    UserInterface(std::shared_ptr<Region> contextRegion);
    ~UserInterface();
    void run();

protected:
    virtual Region::RegionType getSubRegionType();
    virtual void setupMenu();
    virtual void cleanup();
    virtual void add();
    virtual void list();
    virtual void edit();
    virtual void editName(std::shared_ptr<Region> region);
    virtual void editPopulation(std::shared_ptr<Region> region);
    virtual void editArea(std::shared_ptr<Region> region);
    virtual void remove();
    virtual void print();
    virtual void changeToSubRegion();
};


#endif //GEO_REGIONS_USER_INTERFACE_H
