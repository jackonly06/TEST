/*************************************************************************
    > File Name: 7_11.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月10日 11:27:01
 ************************************************************************/

#include "7_11.h"

using namespace std;

int main(int argc, char** argv)
{
    Sales_data item1;
    print(cout, item1) << endl;

    Sales_data item2("0-201-123-X");
    print(cout, item2) << endl;

    Sales_data item3("0-201-123-X", 3, 20.00 );
    print(cout, item3) << endl;

    Sales_data item4(cin);
    print(cout, item4) << endl;

    return 0;
}

