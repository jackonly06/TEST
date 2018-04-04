/*************************************************************************
    > File Name: 6_22.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 4日, 周三 22:48:33
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

void swp(int*& lft, int*& rht)
{
    auto tmp = lft;
    lft = rht;
    rht = tmp;
}

int main(int argc, char** argv)
{
    int i = 42;
    int j = 99;
    auto lft = &i;
    auto rht = &j;

    swp(lft, rht);
    cout << *lft << " " << *rht << endl;

    return 0;
}

