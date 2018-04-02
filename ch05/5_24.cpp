/*************************************************************************
    > File Name: 5_24.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月31日  9:45:41
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stdexcept>

using namespace std;

int main(int argc, char** argv)
{
    int a, b;

    cin >> a >> b;

    if( b == 0 ){
        throw runtime_error("divisor is 0");
    }

    cout << static_cast<double>(a) / b << endl;

    return 0;
}

