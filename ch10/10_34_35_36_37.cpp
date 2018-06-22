/*************************************************************************
    > File Name: 10_34_35_36_37.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 22 Jun, 2018 02:53:31 PM
 ************************************************************************/

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> v = {4, 5, 7, 9, 6, 3, 1, 0, 2, 3};

    for( auto iter = v.crbegin(); iter != v.crend(); ++iter ){
        cout << *iter << " ";
    }
    cout << endl;

    for( auto iter = v.cend(); iter != v.cbegin(); ){
        cout << *--iter << " ";
    }
    cout << endl;

    list<int> l = {3, 7, 0, 3, 4, 0, 5};
    auto found = find(l.crbegin(), l.crend(), 0);
    cout << *found << " in front of " << *found.base() << endl;

    list<int> ret_l(7 - 3 + 1);
    reverse_copy(v.cbegin() + 3, v.cbegin() + 8, ret_l.begin());
    for( auto i : ret_l ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

