//
// Created by Stephen Clyde on 2/16/17.
//

#include "UserInterface.h"

#include <iostream>
#include <iomanip>
#include <fstream>

#include "Farm.h"
#include "Menu.h"

void UserInterface::run()
{
    std::cout << "Welcome to the Farm Operations" << std::endl << std::endl;

    Menu menu("Main");
    menu.addOption("C", "Create a new farm");
    menu.addOption("D", "Delete the current farm");

    bool keepGoing = true;
    while (keepGoing)
    {
        std::string command = menu.show();
        if (command=="C")
        {
            cleanupCurrentFarm();
            m_currentFarm = new Farm;
            farmMenu();
        }
        else if (command=="D")
        {
            cleanupCurrentFarm();
        }
        else if (command=="X")
        {
            keepGoing = false;
        }
    }

    cleanupCurrentFarm();
}

void UserInterface::cleanupCurrentFarm()
{
    if (m_currentFarm)
        delete m_currentFarm;
    m_currentFarm = nullptr;
}

void UserInterface::farmMenu()
{
    if (m_currentFarm== nullptr)
        return;

    Menu menu("Farm");
    menu.addOption("1", "Create a chicken");
    menu.addOption("2", "Create a cow");
    menu.addOption("3", "Create a pig");
    menu.addOption("4", "Create a sheep");
    menu.addOption("5", "Create a pet");
    menu.addOption("L", "Load a file into current farm");
    menu.addOption("S", "Save current farm to a file");
    menu.addOption("D", "Display current farm");

    bool keepGoing = true;
    while (keepGoing)
    {
        std::string command = menu.show();
        if (command=="1")
        {
            std::string input = getStringInput("Enter Breed, BornOn (Year/Month), IsMolting:");
            m_currentFarm->createAndAddNewAnimal("Chicken", input);

        }
        else if (command=="2")
        {
            std::string input = getStringInput("Enter Breed, BornOn (Year/Month), IsMilking:");
            m_currentFarm->createAndAddNewAnimal("Cow", input);
        }
        else if (command=="3")
        {
            std::string input = getStringInput("Enter Breed, BornOn (Year/Month):");
            m_currentFarm->createAndAddNewAnimal("Pig", input);
        }
        else if (command=="4")
        {
            std::string input = getStringInput("Enter Breed, BornOn (Year/Month), LastSheering (Year/Month):");
            m_currentFarm->createAndAddNewAnimal("Sheep", input);
        }
        else if (command=="5")
        {
            std::string input = getStringInput("Enter pet name:");
            m_currentFarm->createAndAddNewAnimal("Pet", input);
        }
        else if (command=="L")
        {
            loadFarm();
        }
        else if (command=="S")
        {
            saveFarm();
        }
        else if (command=="D")
        {
            m_currentFarm->print(std::cout);
        }
        else if (command=="X")
        {
            keepGoing = false;
        }
    }
}


void UserInterface::loadFarm()
{
    if (m_currentFarm!=nullptr)
    {
        std::string fileName = getStringInput("Enter input file name:");
        std::ifstream inputStream(fileName);
        if (inputStream.is_open())
        {
            m_currentFarm->load(inputStream);
            inputStream.close();
        }
    }
}

void UserInterface::saveFarm()
{
    if (m_currentFarm!=nullptr)
    {
        std::string fileName = getStringInput("Enter output file name:");
        if (fileName!="")
        {
            std::ofstream outputStream(fileName);
            m_currentFarm->save(outputStream);
            std::cout << "Done!" << std::endl;
            outputStream.close();
        }
    }
}

std::string UserInterface::getStringInput(std::string prompt)
{
    std::string userInput;

    std::cout << std::endl;
    std::cout << prompt
              << "(<enter> to go back): " << std::endl;
    std::getline(std::cin, userInput);

    return userInput;
}
