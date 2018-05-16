/*************************************************************************
    > File Name: 9_33.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 16 May, 2018 11:31:25 PM
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = v.begin();

    while( begin != v.end() ){
        ++begin;
        begin = v.insert(begin, 42);
        ++begin;
    }

    for( auto i : v ){
        cout << i << " ";
    }

    return 0;
}

