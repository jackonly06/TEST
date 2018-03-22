/*************************************************************************
    > File Name: 2_1.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年01月31日  8:47:29
 ************************************************************************/

#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data book;
    double price;
    cin >> book.bookNo >> book.units_sold >> price;
    book.CalcRevenue(price);
    book.Print();
    return 0;
}

