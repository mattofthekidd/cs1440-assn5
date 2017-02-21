//
// Created by Stephen Clyde on 2/15/17.
//
#include <ostream>
#include "Widget.h"

Widget::Widget(std::string name, int value) : m_name(name), m_value(value)
{
}

void Widget::print(std::ostream& out)
{
    out << getName() << "," << getValue() << std::endl;
}

bool Widget::compareByName(Widget a, Widget b)
{
    return a.getName() < b.getName();
}

bool Widget::compareByValue(Widget a, Widget b)
{
    return a.getValue() < b.getValue();
}
