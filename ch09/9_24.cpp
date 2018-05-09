/*************************************************************************
    > File Name: 9_24.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed,  9 May, 2018 11:02:13 PM
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> v;

    cout << v.at(0);
    cout << v[0];
    cout << v.front();
    cout << *v.begin();

    return 0;
}

