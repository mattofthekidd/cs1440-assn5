//
// Created by Stephen Clyde on 3/20/17.
//

#ifndef TEMPLATE_CONTAINER_CONTAINER_H
#define TEMPLATE_CONTAINER_CONTAINER_H


template <typename X>
class Container
{
private:
    X**             m_elements=nullptr;
    unsigned int    m_allocated=0;
    unsigned int    m_count=0;

public:
    ~Container();
    void add(X* element);
    unsigned int getCount() const { return m_count; }
    X* get(unsigned int index) const;
    void remove(unsigned int index);

private:
    void grow();
};

const int DEFAULT_CONTAINER_SIZE = 10;

template <typename X>
Container<X>::~Container()
{
    if (m_allocated!=0)
    {
        for (int i = 0; i < m_count; i++) {
            delete m_elements[i];
        }
        delete [] m_elements;
    }
}

template <typename X>
void Container<X>::add(X* element)
{
    if (element!= nullptr)
    {
        if (m_allocated == 0) {
            m_elements = new X*[DEFAULT_CONTAINER_SIZE];
            m_allocated = DEFAULT_CONTAINER_SIZE;
        }

        if (m_count == m_allocated)
            grow();

        m_elements[m_count++] = element;
    }
}

template <typename X>
X* Container<X>::get(unsigned int index) const
{
    X* result = nullptr;
    if (m_count>0 && index < m_count)
    {
        result = m_elements[index];
    }
    return result;
}

template <typename X>
void Container<X>::remove(unsigned int index)
{
    if (index < m_count)
    {
        delete m_elements[index];
        for (int i=index; i<m_count-1; i++)
        {
            m_elements[index] = m_elements[index+1];
        }
        m_count--;
    }
}

template <typename X>
void Container<X>::grow()
{
    m_allocated *= 2;
    X** newElements = new X*[m_allocated];

    for (int i=0; i<m_allocated; i++)
    {
        newElements[i] = m_elements[i];
    }
    delete [] m_elements;

    m_elements = newElements;
}

#endif //TEMPLATE_CONTAINER_CONTAINER_H
