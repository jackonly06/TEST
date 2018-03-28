/*************************************************************************
    > File Name: 4_21.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月28日  8:52:22
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5};

    for( auto &i : ivec ){
        i = (i % 2) ? (i * 2) : i;
    }

    for( auto i : ivec ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

