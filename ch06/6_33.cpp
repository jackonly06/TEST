/*************************************************************************
    > File Name: 6_33.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 5日, 周四 23:08:05
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;
using Iter = vector<int>::iterator;

void print(Iter beg, Iter end)
{
    if( beg != end ){
        cout << *beg << " ";
        print(next(beg), end);
    }
}

int main(int argc, char** argv)
{
    vector<int> vec{1, 2, 3, 4, 5};
    print(vec.begin(), vec.end());

    return 0;
}

