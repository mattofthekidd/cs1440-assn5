//
// Created by Stephen Clyde on 2/22/17.
//

#ifndef WIDGETSORT_WIDGETSET_H
#define WIDGETSORT_WIDGETSET_H

#include <string>
#include <ostream>

class Widget;

class WidgetSet {
private:
    Widget** m_widgets;
    int      m_size;
    int      m_count = 0;

public:
    WidgetSet(int size);
    ~WidgetSet();

    void add(const std::string& name, int value);

    void sortByName();
    void sortByValue();

    void print(const std::string& header, std::ostream &out);
};


#endif //WIDGETSORT_WIDGETSET_H
