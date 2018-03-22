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
    int small = 0;
    int big   = 0;

    cout << " Please input two integers: ";
    cin >> small >> big;

    if( small > big ){
        int temp = 0;
        temp = small;
        small = big;
        big = temp;
    }

    while( small <= big ){
        cout << small << " ";
        ++small;
    }

    cout << endl;

    return 0;
}

