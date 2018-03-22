/*************************************************************************
    > File Name: 1_9.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年01月30日 14:00:10
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int val = 50;

    while( val <= 100 ){
        sum += val;
        ++val;
    }

    cout << "This sum is "<< sum << endl;

    return 0;
}

