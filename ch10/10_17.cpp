/*************************************************************************
    > File Name: 10_17.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri,  8 Jun, 2018 11:43:53 PM
 ************************************************************************/

#include <vector>
#include <algorithm>
#include "7_26.h"

using namespace std;

int main(int argc, char** argv)
{
    Sales_data d1("CppPrimer"), d2("JavaCore"), d3("PythonCookBook"), d4("CppCore"), d5("AwesomeCPP");

    vector<Sales_data> v{d1, d2, d3, d4, d5};

    sort(v.begin(), v.end(), [](const Sales_data &sd1, const Sales_data &sd2){
                return sd1.isbn() < sd2.isbn();
            });

    for(const auto &element : v){
        cout << element.isbn() << " ";
    }
    cout << endl;

    return 0;
}

