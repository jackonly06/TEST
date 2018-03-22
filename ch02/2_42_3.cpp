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
    Sales_data total;
    double totalPrice;

    if( cin >> total.bookNo >> total.units_sold >> totalPrice ){
        Sales_data trans;
        double    transPrice;

        total.CalcRevenue(totalPrice);
        while( cin >> trans.bookNo >> trans.units_sold >> transPrice ){
            trans.CalcRevenue(transPrice);

            if( total.bookNo == trans.bookNo ){
                total.AddData(trans);
            }else{
                total.Print();
                total.SetData(trans);
            }
        }
        total.Print();
        return 0;
    }else{
        cerr << "Date must refer to same ISBN" << endl;
        return -1;
    }
}

