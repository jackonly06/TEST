/*************************************************************************
    > File Name: 10_02.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, 29 May, 2018 11:18:26 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    list<string> l = {"aa", "aaa", "aa", "cccc"};
    cout << "ex 10.02: " << count(l.cbegin(), l.cend(), "aa")
         << endl;

    return 0;
}

