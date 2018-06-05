/*************************************************************************
    > File Name: 10_12.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue,  5 Jun, 2018 10:39:31 PM
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "../ch07/7_26.h"

using namespace std;

bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2)
{
    return sd1.isbn() < sd2.isbn();
}

int main(int argc, char** argv)
{
    Sales_data d1("Cppch07"), d2("JavaCh04"), d3("Pythonch08"), d4("Powerch0000"), d5("who");

    vector<Sales_data> v{d1, d2, d3, d4, d5};

    sort(v.begin(), v.end(), compareIsbn);

    for( const auto &element : v ){
        cout << element.isbn() << " ";
    }
    cout << endl;

    return 0;
}

