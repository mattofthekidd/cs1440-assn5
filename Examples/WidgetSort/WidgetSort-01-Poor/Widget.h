//
// Created by Stephen Clyde on 2/15/17.
//

#ifndef WIDGETSORT_WIDGET_H
#define WIDGETSORT_WIDGET_H

#include <string>

class Widget {
private:
    std::string m_name;
    int m_value;

public:
    Widget(std::string name, int value);
    const std::string& getName() { return m_name; }
    int getValue() { return m_value; }
};


#endif //WIDGETSORT_WIDGET_H
