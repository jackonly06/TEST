/*************************************************************************
    > File Name: Sales_data.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年02月 1日 11:47:11
 ************************************************************************/

#ifndef _DJX_SALES_DATA_H_
#define _DJX_SALES_DATA_H_

#include <iostream>
#include <string>

using namespace std;

struct Sales_data{
    std::string bookNo;
    unsigned    units_sold = 0;
    double      revenue = 0.0;

    void CalcRevenue(double price);
    double CalcAveragePrice();
    void SetData(Sales_data data);
    void AddData(Sales_data data);
    void Print();
};

void Sales_data::CalcRevenue(double price)
{
    revenue = units_sold * price;
}

void Sales_data::SetData(Sales_data data)
{
    bookNo = data.bookNo;
    units_sold = data.units_sold;
    revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data)
{
    if( bookNo != data.bookNo ){
        return;
    }
    units_sold += data.units_sold;
    revenue += data.revenue;
}

double Sales_data::CalcAveragePrice()
{
    if( units_sold != 0 ){
        return revenue / units_sold;
    }else{
        return 0.0;
    }
}

void Sales_data::Print()
{
    cout << bookNo << " " << units_sold << " " << revenue << " ";
    double averagePrice = CalcAveragePrice();

    if( averagePrice != 0.0 ){
        cout << averagePrice << endl;
    }else{
        cout << " No Sales " << endl;
    }
}

#endif //_DJX_SALES_DATA_H_
