//
// Created by Stephen Clyde on 2/15/17.
//
#include <iostream>
#include "Widget.h"

Widget::Widget(std::string name, int value) : m_name(name), m_value(value)
{
    std::cout << "Constructing widget " << m_name
              << " with value " << m_value
              << " at memory location " << this
              << std::endl;
}

Widget::Widget(const Widget& orig) : m_name(orig.m_name), m_value(orig.m_value)
{
    std::cout << "Copying widget " << m_name
              << " with value " << m_value
              << " at memory location " << this
              << std::endl;
}

Widget::~Widget()
{
    std::cout << "Destroying widget " << m_name
              << " with value " << m_value
              << " at memory location " << this
              << std::endl;
}

void Widget::increaseValue(int delta)
{
    m_value += delta;
}


void Widget::print(std::ostream& out)
{
    out << getName() << "," << getValue() << std::endl;
}

bool Widget::compareByName(const Widget& a, const Widget& b)
{
    return a.getName() < b.getName();
}

bool Widget::compareByValue(const Widget& a, const Widget& b)
{
    return a.getValue() < b.getValue();
}

bool Widget::compareByNamePtr(const Widget* a, const Widget* b)
{
    return compareByName(*a, *b);
}

bool Widget::compareByValuePtr(const Widget* a, const Widget* b)
{
    return compareByValue(*a, *b);
}