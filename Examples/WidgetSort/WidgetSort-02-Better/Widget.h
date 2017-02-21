//
// Created by Stephen Clyde on 2/15/17.
//

#ifndef WIDGETSORT_WIDGET_H
#define WIDGETSORT_WIDGET_H

#include <ostream>
#include <string>

class Widget {
private:
    std::string m_name;
    int m_value;

public:
    Widget(std::string name, int value);

    void print(std::ostream& out);

    static bool compareByName(Widget a, Widget b);
    static bool compareByValue(Widget a, Widget b);

private:
    const std::string& getName() const { return m_name; }
    int getValue() const { return m_value; }
};


#endif //WIDGETSORT_WIDGET_H
