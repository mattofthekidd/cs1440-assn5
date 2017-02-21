#include <iostream>

#include "Widget.h"

const int SIZE = 12;

void printArray(Widget widgets[], std::string sortHeader)
{
    std::cout << "Widgets sorted by " << sortHeader << std::endl;
    for (int i=0; i<SIZE; i++)
    {
        widgets[i].print(std::cout);
    }
    std::cout << std::endl;
}

int main() {

    Widget widgets[SIZE] = {
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

    std::sort(widgets, widgets + SIZE, Widget::compareByName);
    printArray(widgets, "name");

    std::sort(widgets, widgets + SIZE, Widget::compareByValue);
    printArray(widgets, "value");

    return 0;
}