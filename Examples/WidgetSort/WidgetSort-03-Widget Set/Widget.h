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
    Widget(std::string name, int value);            // Constructor
    Widget(const Widget& orig);                     // Copy Constructor
    ~Widget();                                      // Destructor
    void increaseValue(int delta);

    void print(std::ostream& out);

    static bool compareByName(const Widget& a, const Widget& b);
    static bool compareByValue(const Widget& a, const Widget& b);
    static bool compareByNamePtr(const Widget* a, const Widget* b);
    static bool compareByValuePtr(const Widget* a, const Widget* b);

private:
    const std::string& getName() const { return m_name; }
    int getValue() const { return m_value; }
};


#endif //WIDGETSORT_WIDGET_H
