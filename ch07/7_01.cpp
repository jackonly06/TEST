/*************************************************************************
    > File Name: 7_01.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 8日 18:20:04
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "../ch02/Sales_data.h"

using namespace std;

int main(int argc, char** argv)
{
    Sales_data total;

    if( cin >> total.bookNo >> total.units_sold >> total.revenue ){
        Sales_data trans;
        while( cin >> trans.bookNo >> trans.units_sold >> trans.revenue ){
            if(total.bookNo == trans.bookNo){
                total.AddData(trans);
            }else{
                total.Print();
                total = trans;
            }
        }
        total.Print();
    }else{
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}

