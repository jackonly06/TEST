/*************************************************************************
    > File Name: 2_1.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年01月31日  8:47:29
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct Sale_data{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sale_data book;
    double price;
    cin >> book.bookNo >> book.units_sold >> price;
    book.revenue = book.units_sold * price;
    cout << book.bookNo << " " << book.units_sold << " " << book.revenue
         << " " << price;
    return 0;
}

