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
    Sales_item item1, item2;
    cin >> item1 >> item2;
    if( item1.isbn() == item2.isbn() ){
        cout << item1 + item2 << endl;
        return 0;
    }else{
        cerr <<  "Data must refer to same ISBN." << endl;
        return -1;
    }
}

