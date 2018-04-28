/*************************************************************************
    > File Name: 8_07.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat, 28 Apr, 2018 11:29:29 PM
 ************************************************************************/

#include <fstream>
#include "../ch07/7_26.h"

using namespace std;

int main(int argc, char** argv)
{
    ifstream input(argv[1]);
    ofstream output(argv[2]);

    Sales_data total;

    if( read(input, total) ){
        Sales_data trans;
        while( read(input, trans) ){
            if( total.isbn() == trans.isbn() ){
                total.combine(trans);
            }else{
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    }else{
        cerr << "No data?!" << endl;
    }

    return 0;
}

