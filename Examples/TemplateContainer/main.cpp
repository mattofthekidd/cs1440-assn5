#include <iostream>
#include "Container.h"
#include "Widget.h"
#include "Gadget.h"

int main()
{
    Container<Widget> myWidgets;
    Container<Gadget> myGadgets;

    myWidgets.add(new Widget(1, 235.35));
    myWidgets.add(new Widget(2, 6436.35));

    myGadgets.add(new Gadget(1, 3.43, 23.5));
    myGadgets.add(new Gadget(2, 5.3, 2.5));
    myGadgets.add(new Gadget(3, 6.33, 1.5));

    std::cout << "Widgets" << std::endl;
    std::cout << "=======" << std::endl;

    for (unsigned int i=0; i<myWidgets.getCount(); i++)
    {
        std::cout << "Widget: " << myWidgets.get(i)->getId()
                  << "," << myWidgets.get(i)->getValue()
                  << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Gadgets" << std::endl;
    std::cout << "=======" << std::endl;
    for (unsigned int i=0; i<myGadgets.getCount(); i++)
    {
        std::cout << "Gadget: " << myGadgets.get(i)->getId()
                  << "," << myGadgets.get(i)->getHeight()
                  << "," << myGadgets.get(i)->getWidth()
                  << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Remove a gadget" << std::endl;
    myGadgets.remove(1);

    std::cout << std::endl;
    std::cout << "Gadgets" << std::endl;
    std::cout << "=======" << std::endl;
    for (unsigned int i=0; i<myGadgets.getCount(); i++)
    {
        std::cout << "Gadget: " << myGadgets.get(i)->getId()
                  << "," << myGadgets.get(i)->getHeight()
                  << "," << myGadgets.get(i)->getWidth()
                  << std::endl;
    }

    return 0;
}