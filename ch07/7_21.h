/*************************************************************************
    > File Name: 7_21.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 12 Apr, 2018 09:31:19 PM
 ************************************************************************/

#ifndef _DJX_7_21_H_
#define _DJX_7_21_H_

#include <iostream>
#include <string>

class Sales_data{
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
    friend std::Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

public:
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {}
    Sales_data(const std::string& s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(n * p) {}
    Sales_data(std::istream& is) { read(is, *this); }

    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif //_DJX_7_21_H_
