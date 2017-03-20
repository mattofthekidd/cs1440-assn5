//
// Created by Stephen Clyde on 3/20/17.
//

#ifndef TEMPLATE_CONTAINER_WIDGET_H
#define TEMPLATE_CONTAINER_WIDGET_H


class Widget
{
private:
    int     m_id;
    double  m_value;

public:
    Widget(int id, double value);
    int getId() const { return m_id; }
    double getValue() const { return m_value; }
};


#endif //TEMPLATE_CONTAINER_WIDGET_H
