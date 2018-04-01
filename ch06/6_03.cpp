/*************************************************************************
    > File Name: 6_03.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 1日, 周日 20:27:12
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int fact( int val )
{
    if( val == 0 || val == 1 ){
        return 1;
    }else{
        return val * fact(val - 1);
    }
}

int main(int argc, char** argv)
{
    int j = fact(5);

    cout << "5! is " << j << endl;

    return 0;
}

