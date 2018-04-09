/*************************************************************************
    > File Name: 7_07.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 9日 15:46:26
 ************************************************************************/

#include "7_06.h"

using namespace std;

int main(int argc, char** argv)
{
    Sales_data total;

    if( read(cin, total) ){
        Sales_data trans;
        while( read(cin, trans)){
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
        return -1;
    }

    return 0;
}

