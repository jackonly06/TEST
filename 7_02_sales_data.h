/*************************************************************************
    > File Name: 7_02_sales_data.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 8日 19:02:20
 ************************************************************************/

#ifndef _DJX_7_02_SALES_DATA_H_
#define _DJX_7_02_SALES_DATA_H_

#include <string>

string Sales_data{
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

#endif //_DJX_7_02_SALES_DATA_H_
