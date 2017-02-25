//
// Created by Stephen Clyde on 2/22/17.
//

#include "WidgetSet.h"
#include "Widget.h"

WidgetSet::WidgetSet(int size) : m_size(size)
{
    m_widgets = new Widget*[m_size];
}

WidgetSet::~WidgetSet()
{
    for (int i=0; i<m_count; i++)
    {
        delete m_widgets[i];
    }
    delete [] m_widgets;
}

void WidgetSet::add(const std::string& name, int value)
{
    if (m_count < m_size)
    {
        m_widgets[m_count++] = new Widget(name, value);
    }
}

void WidgetSet::sortByName()
{
    std::sort(m_widgets, m_widgets + m_count, Widget::compareByNamePtr);
}

void WidgetSet::sortByValue()
{
    std::sort(m_widgets, m_widgets + m_count, Widget::compareByValuePtr);

}


void WidgetSet::print(const std::string& header, std::ostream &out)
{
    out << "Widgets sorted by " << header << std::endl;
    for (int i=0; i<m_count; i++)
    {
        m_widgets[i]->print(out);
    }
    out << std::endl;
}