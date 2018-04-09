/*************************************************************************
    > File Name: 7_03.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 9日 13:36:58
 ************************************************************************/

#include <iostream>
#include "7_02_sales_data.h"

using namespace std;

int main(int argc, char** argv)
{
    Sales_data total;
    if( cin >> total.bookNo >> total.units_sold >> total.revenue ){
        Sales_data trans;
        while( cin >> trans.bookNo >> trans.units_sold >> trans.revenue ){
            if( total.isbn() == trans.isbn() ){
                total.combine(trans);
            }else{
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }else{
        cerr << "No data?!" << endl;
        return (-1);
    }

    return 0;
}

