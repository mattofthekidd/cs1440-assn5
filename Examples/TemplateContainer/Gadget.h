//
// Created by Stephen Clyde on 3/20/17.
//

#ifndef TEMPLATECONTAINER_GADGET_H
#define TEMPLATECONTAINER_GADGET_H


class Gadget {
private:
    int     m_id;
    double  m_height;
    double  m_width;

public:
    Gadget(int id, double height, double width);
    int getId() const { return m_id; }
    double getHeight() const { return m_height; }
    double getWidth() const { return m_width; }
};


#endif //TEMPLATECONTAINER_GADGET_H
