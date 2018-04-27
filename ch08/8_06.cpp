/*************************************************************************
    > File Name: 8_06.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 27 Apr, 2018 11:09:34 PM
 ************************************************************************/

#include <iostream>
#include <fstream>
#include "../ch07/7_26.h"

using namespace std;

int main(int argc, char** argv)
{
    ifstream input(argv[1]);
    Sales_data total;

    if( read(input, total)){
        Sales_data trans;
        while( read(input, trans)){
            if( total.isbn() == trans.isbn() ){
                total.combine(trans);
            }else{
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }else{
        cerr << "No data?!" << endl;
    }

    return 0;
}

