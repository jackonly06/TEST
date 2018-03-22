/*************************************************************************
    > File Name: 1_20.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年01月30日 15:56:18
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item total;
    if( cin >> total ){
        Sales_item trans;
        while( cin >> trans ){
            if( total.isbn() == trans.isbn() ){
                total += trans;
            }else{
                cout<< total << endl;
                total = trans;
            }
        }
        cout<< total << endl;
    }else{
        cerr <<  "No Data?!" << endl;
        return -1;
    }
    return 0;
}

