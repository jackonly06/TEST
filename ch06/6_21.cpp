/*************************************************************************
    > File Name: 6_21.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 4日, 周三 22:43:12
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int LargerOne(const int i, const int* ip)
{
    return (i > *ip) ? i : *ip;
}

int main(int argc, char** argv)
{
    int c = 6;

    cout << LargerOne(7, &c) << endl;

    return 0;
}

