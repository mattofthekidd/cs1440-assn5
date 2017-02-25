#include <iostream>

#include "WidgetSet.h"

const int SIZE = 12;


void dynamicWidgetSort() {

    WidgetSet widgetSet(SIZE);

    widgetSet.add("G", 1);

    widgetSet.add("A", 3);
    widgetSet.add("D", 2);
    widgetSet.add("F", 43);
    widgetSet.add("B", 8);
    widgetSet.add("K", 7);
    widgetSet.add("X", 63);
    widgetSet.add("N", 24);
    widgetSet.add("R", 35);
    widgetSet.add("P", 61);
    widgetSet.add("S", 54);
    widgetSet.add("M", 5);

    widgetSet.sortByName();
    widgetSet.print("Name", std::cout);

    widgetSet.sortByValue();
    widgetSet.print("Value", std::cout);

}


int main()
{

    // singleWidgetWork();
    dynamicWidgetSort();

    return 0;
}


