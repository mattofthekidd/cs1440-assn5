//
// Created by Stephen Clyde on 3/4/17.
//

#ifndef GEO_REGIONS_REGION_H
#define GEO_REGIONS_REGION_H

#include <string>
#include <vector>

class Region {
public:
    typedef enum RegionType { UnknownRegionType, WorldType, NationType, StateType, CountyType, CityType } x;
//--------------
    static std::shared_ptr<Region> create(std::istream &in);
    static std::shared_ptr<Region> create(const std::string& data);
    static std::shared_ptr<Region> create(RegionType regionType, const std::string& data);
    static std::string regionLabel(RegionType regionType);
//--------------
    ~Region();
    unsigned int getId() const { return m_id; }
    RegionType  getType() const { return m_regionType; }
    std::string getRegionLabel() const;
    const std::string& getName() const { return m_name; }
    void setName(const std::string& name) { m_name = name; }
    unsigned int getPopulation() const { return m_population; }
    void setPopulation(unsigned int population) { m_population = population; }
    double getArea() const { return m_area; }
    void setArea(double area) { m_area = area; }
    bool getIsValid() const { return m_isValid; }

    // TODO: Add methods to manage sub-regions
    void addSubRegion(std::shared_ptr<Region>);
    bool subRegionExists(int pos);
    int getSubRegionCount();
    // TODO: Add method to compute total population, as m_population + the total population for all sub-regions
    unsigned int computeTotalPopulation();

    void list(std::ostream& out);
    void display(std::ostream& out, unsigned int displayLevel, bool showChild);
    void save(std::ostream& out);

    std::shared_ptr<Region> & findRegionById(int id);

protected:
    unsigned int    m_id = 0;
    RegionType      m_regionType = UnknownRegionType;
    std::string     m_name;
    unsigned int    m_population = 0;
    double          m_area = 0;
    bool            m_isValid = false;

    // TODO: Add data members to manage sub-regions
    unsigned int m_totalPop = 0;
    std::vector<std::shared_ptr<Region>> m_subRegion;

//--------------
    Region();
    Region(RegionType type, const std::string data[]);
//--------------
    virtual void validate();
    void loadChildren(std::istream& in);
    static unsigned int getNextId();

    // TODO: add whatever other helper methods you might need

private:
    static unsigned int m_nextId;


};


#endif //GEO_REGIONS_REGION_H
