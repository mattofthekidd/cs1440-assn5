//
// Created by Stephen Clyde on 2/25/17.
//

#ifndef FARM_OPERATIONS_YEAR_MONTH_H
#define FARM_OPERATIONS_YEAR_MONTH_H

#include <ostream>

class YearMonth {
private:
    int m_year;
    int m_month;
    bool m_isValid;

public:
    YearMonth();                        // Current year / month
    YearMonth(int year, int month);
    YearMonth(const YearMonth& yearMonth);

    int getYear() const { return m_year; }
    int getMonth() const { return m_month; }
    bool getIsValid() const { return m_isValid; }
    int getDifference(const YearMonth& otherYearMonth) const;

    int compare(const YearMonth& other) const;
    bool operator==(const YearMonth &other) const;
    bool operator!=(const YearMonth &other) const;
    bool operator<=(const YearMonth &other) const;
    bool operator<(const YearMonth &other) const;
    bool operator>=(const YearMonth &other) const;
    bool operator>(const YearMonth &other) const;

    void print(std::ostream& out) const;

private:
    void validate();
};


#endif //FARM_OPERATIONS_YEAR_MONTH_H
