/*************************************************************************
    > File Name: 10_01.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, 29 May, 2018 11:13:38 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> v = {1, 2, 3, 6, 5, 3, 7, 6, 10};

    cout << "ex 10.01: " << count(v.cbegin(), v.cend(), 6)
         << endl;

    return 0;
}

