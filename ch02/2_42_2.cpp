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
    Sales_data book1, book2;
    double price1, price2;

    cin >> book1.bookNo >> book1.units_sold >> price1;
    cin >> book2.bookNo >> book2.units_sold >> price2;
    book1.CalcRevenue(price1);
    book2.CalcRevenue(price2);

    if( book1.bookNo == book2.bookNo ){
        book1.AddData(book2);
        book1.Print();

        return 0;
    }else{
        cerr << "Data must refer to same ISBN" << endl;
        return -1;
    }
}

