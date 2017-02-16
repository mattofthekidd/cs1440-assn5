#include <iostream>

#include "Widget.h"

bool sortByName(Widget a, Widget b)
{
    return a.getName() < b.getName();
}

bool sortByValue(Widget a, Widget b)
{
    return a.getValue() < b.getValue();
}

int main() {

    Widget widgets[12] = {
            Widget("G", 1),
            Widget("A", 3),
            Widget("D", 2),
            Widget("F", 43),
            Widget("B", 8),
            Widget("K", 7),
            Widget("X", 63),
            Widget("N", 24),
            Widget("R", 35),
            Widget("P", 61),
            Widget("S", 54),
            Widget("M", 5)
    };

    std::cout << "Widgets sorted by name" << std::endl;
    std::sort(widgets, widgets+8, sortByName);
    for (int i=0; i<12; i++)
    {
        std::cout << widgets[i].getName() << "," << widgets[i].getValue() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Widgets sorted by name" << std::endl;
    std::sort(widgets, widgets+8, sortByValue);
    for (int i=0; i<12; i++)
    {
        std::cout << widgets[i].getName() << "," << std::fixed << widgets[i].getValue() << std::endl;
    }

    return 0;
}