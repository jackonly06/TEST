/*************************************************************************
    > File Name: 6_27.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 5日, 周四 22:55:15
 ************************************************************************/

#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> il)
{
    int sum = 0;

    for( auto i : il ){
        sum += i;
    }
    return sum;
}

int main(int argc, char** argv)
{
    cout << sum({1, 2, 3, 4, 5}) << endl;

    return 0;
}

