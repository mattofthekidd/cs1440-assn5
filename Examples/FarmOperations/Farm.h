//
// Created by Stephen Clyde on 3/1/17.
//

#ifndef FARM_OPERATIONS_FARM_H
#define FARM_OPERATIONS_FARM_H

#include <ostream>
#include <istream>

class Animal;

class Farm {

private:
    Animal**    m_animals=nullptr;
    int         m_allocated=0;
    int         m_count=0;

public:
    ~Farm();
    void createAndAddNewAnimal(const std::string &type, const std::string &data);
    void addAnimal(Animal* animal);
    int getCount() const { return m_count; }
    Animal* getAnimal(int index) const;

    void print(std::ostream& out);
    void save(std::ostream& out);
    void load(std::istream& in);

private:
    void grow();

};


#endif //FARM_OPERATIONS_FARM_H
