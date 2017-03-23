//
// Created by Stephen Clyde on 3/4/17.
//

#include "Region.h"
#include "Utils.h"
#include "World.h"
#include "Nation.h"
#include "State.h"
#include "County.h"
#include "City.h"

#include <iomanip>
#include <iostream>

const std::string regionDelimiter = "^^^";
const int TAB_SIZE = 4;
unsigned int Region::m_nextId = 0;

std::shared_ptr<Region> Region::create(std::istream &in) {
    std::shared_ptr<Region> region = nullptr;
    std::string line;
    std::getline(in, line);
    if (line != "") {
        region = create(line);
        if (region != nullptr)
            region->loadChildren(in);
    }
    return region;
}

std::shared_ptr<Region> Region::create(const std::string &data) {
//    Region *region = nullptr;
    std::shared_ptr<Region> region = nullptr;
    std::string regionData;
    unsigned long commaPos = (int) data.find(",");
    if (commaPos != std::string::npos) {
        std::string regionTypeStr = data.substr(0, commaPos);
        regionData = data.substr(commaPos + 1);

        bool isValid;
        RegionType regionType = (RegionType) convertStringToInt(regionTypeStr, &isValid);

        if (isValid) {
            region = create(regionType, regionData);
        }
    }
    return region;
}

std::shared_ptr<Region> Region::create(RegionType regionType, const std::string &data) {
//    Region *region = nullptr;
            std::shared_ptr<Region> region(nullptr);
    std::string fields[3];
    if (split(data, ',', fields, 3)) {

        // Create the region based on type
        switch (regionType) {
            case WorldType:
                region = std::shared_ptr<Region> (new World());
                break;
            case NationType:
                region = std::unique_ptr<Region> (new Nation(fields));
//                return region1;
                break;
            case StateType:
                region = std::unique_ptr<Region> (new State(fields));
//                return region2;
                break;
            case CountyType:
                region = std::unique_ptr<Region> (new County(fields));
//                return region3;
                break;
            case CityType:
                region = std::unique_ptr<Region> (new City(fields));
//                return region4;
                break;
//            case UnknownRegionType:
//                break;
            default:
                break;
        }

        // If the region isn't valid, get rid of it
        if (region != nullptr && !region->getIsValid()) {
//            delete region;
            region = nullptr;
        }
    }

    return region;
}

std::string Region::regionLabel(RegionType regionType) {
    std::string label = "Unknown";
    switch (regionType) {
        case Region::WorldType:
            label = "World";
            break;
        case Region::NationType:
            label = "Nation";
            break;
        case Region::StateType:
            label = "State";
            break;
        case Region::CountyType:
            label = "County";
            break;
        case Region::CityType:
            label = "City";
            break;
        default:
            break;
    }
    return label;
}

Region::~Region() {
    // TODO: cleanup any dynamically allocated objects

//    if(m_subRegion != nullptr) {
//        m_subRegion = nullptr;
//    }
}

std::string Region::getRegionLabel() const {
    return regionLabel(getType());
}


unsigned int Region::computeTotalPopulation() {

    for(auto i = 0; i < m_subRegion.size(); i++) {
        if (subRegionExists(i)) {
            m_totalPop += m_subRegion[i]->computeTotalPopulation();
        }
    }
    return m_totalPop + m_population;
}

void Region::list(std::ostream &out) {
    out << std::endl;
    out << getName() << ":" << std::endl;

    for(auto i = 0; i < m_subRegion.size(); i++) {
        out << m_subRegion[i]->getId() << ", " << m_subRegion[i]->getName() << std::endl;
    }
}

void Region::display(std::ostream &out, unsigned int displayLevel, bool showChild) {
    if (displayLevel > 0) {
        out << std::setw(displayLevel * TAB_SIZE) << " ";
    }

    unsigned totalPopulation = computeTotalPopulation();
    double area = getArea();
    double density = (double) totalPopulation / area;

    out << std::setw(6) << getId() << "  "
        << getName() << ", population="
        << totalPopulation
        << ", area=" << area
        << ", density=" << density << std::endl;

    if (showChild) {

        for(auto i = 0; i < m_subRegion.size(); i++) {
            if(subRegionExists(i)) {
                m_subRegion.at(i)->display(out, displayLevel+1, true);
            }
        }
    }
}

void Region::save(std::ostream &out) {
    out << getType()
        << "," << getName()
        << "," << getPopulation()
        << "," << getArea()
        << std::endl;

    for(auto i = 0; i < m_subRegion.size(); i++) {
        if(subRegionExists(i)) {
            m_subRegion.at(i)->save(out);
        }
    }
    out << regionDelimiter << std::endl;
}

Region::Region() {}

Region::Region(RegionType type, const std::string data[]) :
        m_id(getNextId()), m_regionType(type), m_isValid(true) {
    m_name = data[0];
    m_population = convertStringToUnsignedInt(data[1], &m_isValid);
    if (m_isValid)
        m_area = convertStringToDouble(data[2], &m_isValid);
}

void Region::validate() {
    m_isValid = (m_area != UnknownRegionType && m_name != "" && m_area >= 0);
}

void Region::loadChildren(std::istream &in) {
    std::string line;
    bool done = false;
    while (!in.eof() && !done) {
        std::getline(in, line);
        if (line == regionDelimiter) {
            done = true;
        } else {
            std::shared_ptr<Region> child = create(line);
            if (child != nullptr) {
                m_subRegion.push_back(child);
                child->loadChildren(in);
            }
        }
    }
}

unsigned int Region::getNextId() {
    if (m_nextId == UINT32_MAX)
        m_nextId = 1;

    return m_nextId++;
}

void Region::addSubRegion(std::shared_ptr<Region> child) {
    m_subRegion.push_back(child);
}

int Region::getSubRegionCount() {
    auto p = 0;
    for(auto i = 0; i < m_subRegion.size(); i++) {
        p++;
        if(subRegionExists(i)) {
            p += m_subRegion[i]->getSubRegionCount();
        }
    }
    return p;
}

bool Region::subRegionExists(int pos) {
    return m_subRegion.at(pos) != nullptr && m_subRegion.at(pos)->getIsValid();
}

std::shared_ptr<Region> & Region::findRegionById(int id) {
    for(auto i = 0; i < m_subRegion.size(); i++) {
        if(m_subRegion[i]->getId() == id) {
           return m_subRegion.at(i);
        }
        else if(subRegionExists(i)) {
            m_subRegion[i]->findRegionById(id);
        }
    }
}


