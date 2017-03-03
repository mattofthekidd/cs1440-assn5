//
// Created by Stephen Clyde on 3/1/17.
//

#ifndef FARM_OPERATIONS_ANIMAL_H
#define FARM_OPERATIONS_ANIMAL_H

#include <ostream>

class Animal
{
private:
    unsigned int        m_id;
    bool                m_isValid = false;
    static unsigned int m_nextId;

protected:
    Animal();
    void setIsValid(bool valid) { m_isValid = valid; }

public:
    unsigned int getId() const { return m_id; }
    bool getIsValid() const { return m_isValid; }
    virtual void print(std::ostream& out);
    virtual void save(std::ostream& out);

private:
    static unsigned int nextId();
};


#endif //FARM_OPERATIONS_ANIMAL_H
