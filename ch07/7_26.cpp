/*************************************************************************
    > File Name: 7_26.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 15 Apr, 2018 10:38:41 PM
 ************************************************************************/

#include "7_26.h"

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

int main(int argc, char** argv)
{
    return 0;
}

