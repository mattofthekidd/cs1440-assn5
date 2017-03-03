//
// Created by Stephen Clyde on 2/25/17.
//

#include "YearMonth.h"
#include <ctime>

YearMonth::YearMonth()
{
    time_t currentTime = time(0);   // get time now
    struct tm * now = localtime( & currentTime );
    m_year = now->tm_year + 1900;
    m_month = now->tm_mon + 1;

    validate();
}

YearMonth::YearMonth(int year, int month) : m_year(year), m_month(month)
{
    validate();
}

YearMonth::YearMonth(const YearMonth& yearMonth) : m_year(yearMonth.m_year), m_month(yearMonth.m_month)
{
    validate();
}

int YearMonth::getDifference(const YearMonth& otherYearMonth) const
{
    return (m_year*12 + m_month) - (otherYearMonth.m_year*12 + otherYearMonth.m_month);
}

int YearMonth::compare(const YearMonth& other) const
{
    int result = 0;
    if (getYear() < other.getYear())
        result = -1;
    else if (getYear() > other.getYear())
        result = 1;
    else if (getMonth() < other.getMonth())
        result = -1;
    else if (getMonth() > other.getMonth())
        result = 1;

    return result;
}

bool YearMonth::operator==(const YearMonth &other) const
{
    return compare(other)==0;
}

bool YearMonth::operator!=(const YearMonth &other) const
{
    return compare(other)!=0;
}

bool YearMonth::operator<=(const YearMonth &other) const
{
    return compare(other)<=0;
}

bool YearMonth::operator<(const YearMonth &other) const
{
    return compare(other)<0;
}

bool YearMonth::operator>=(const YearMonth &other) const
{
    return compare(other)>=0;
}

bool YearMonth::operator>(const YearMonth &other) const
{
    return compare(other)>0;
}

void YearMonth::validate()
{
    m_isValid = (m_year>=0 && m_month>=1 && m_month<=12);
}


void YearMonth::print(std::ostream& out) const
{
    out << m_year << "/" << m_month;
}