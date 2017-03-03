//
// Created by Stephen Clyde on 3/1/17.
//

#include "Farm.h"
#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"
#include "Sheep.h"
#include "Pet.h"

const int DEFAULT_SIZE = 10;

Farm::~Farm()
{
    if (m_allocated!=0)
    {
        for (int i = 0; i < m_count; i++) {
            delete m_animals[i];
        }
        delete [] m_animals;
    }
}

void Farm::createAndAddNewAnimal(const std::string &type, const std::string &data)
{
    Animal* newAnimal = nullptr;

    if (type=="Chicken")
    {
        newAnimal = new Chicken(data);
    } else if (type=="Cow")
    {
        newAnimal = new Cow(data);
    } else if (type=="Pig")
    {
        newAnimal = new Pig(data);
    } else if (type=="Pet")
    {
        newAnimal = new Pet(data);
    } else if (type=="Sheep")
    {
        newAnimal = new Sheep(data);
    }

    if (newAnimal!=nullptr)
    {
        if (newAnimal->getIsValid())
        {
            addAnimal(newAnimal);
        }
        else
        {
            delete newAnimal;
        }
    }
}

void Farm::addAnimal(Animal* animal)
{
    if (animal!= nullptr)
    {
        if (m_allocated == 0) {
            m_animals = new Animal *[DEFAULT_SIZE];
            m_allocated = DEFAULT_SIZE;
        }

        if (m_count == m_allocated)
            grow();

        m_animals[m_count++] = animal;
    }
}

Animal* Farm::getAnimal(int index) const
{
    Animal* result = nullptr;
    if (m_count>0 && index>=0 && index < m_count)
    {
        result = m_animals[index];
    }
    return result;
}


void Farm::print(std::ostream& out)
{
    for (int i=0; i<m_count; i++)
    {
        if (m_animals[i]!= nullptr && m_animals[i]->getIsValid())
            m_animals[i]->print(out);
    }

}

void Farm::save(std::ostream& out)
{
    for (int i=0; i<m_count; i++)
    {
        if (m_animals[i]!= nullptr && m_animals[i]->getIsValid())
            m_animals[i]->save(out);
    }

}

void Farm::load(std::istream& in)
{
    while (!in.eof())
    {
        std::string line;
        std::getline(in, line);
        if (line=="")
            continue;

        size_t colonPos = line.find(':');
        if (colonPos==std::string::npos || colonPos==0)
            continue;

        std::string animalType = line.substr(0, colonPos);
        std::string inputData = line.substr(colonPos + 1);
        createAndAddNewAnimal(animalType, inputData);
    }
}

void Farm::grow()
{
    m_allocated *= 2;
    Animal** newAnimals = new Animal*[m_allocated];

    for (int i=0; i<m_allocated; i++)
    {
        newAnimals[i] = m_animals[i];
    }

    delete [] m_animals;

    m_animals = newAnimals;
}
