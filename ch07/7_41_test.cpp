/*************************************************************************
    > File Name: 7_41_test.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 18 Apr, 2018 10:36:49 PM
 ************************************************************************/

#include "7_41.h"

using std::cout;
using std::endl;

int main(int argc, char** argv)
{
    cout << "1. default way: " << endl;
    cout << "----------------" << endl;
    Sales_data s1;

    cout << "\n2. use std::string as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s2("CPP-Primer-5th");

    cout << "\n3. complete parameters: " << endl;
    cout << "----------------" << endl;
    Sales_data s3("CPP-Primer-5th", 3, 25.8);

    cout << "\n4. use istream as parameter: " << endl;
    cout << "----------------" << endl;
    Sales_data s4(std::cin);

    return 0;
}

