/*************************************************************************
    > File Name: 10_7.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat,  2 Jun, 2018 10:56:00 PM
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template <typename Sequence> void print(Sequence const &seq)
{
    for( const auto &i : seq ){
        cout << i << " ";
    }
    cout << endl;
}

int main(int argc, char** argv)
{
    vector<int> vec;
    list<int> lst;
    int i;

    while( cin >> i ){
        lst.push_back(i);
    }
    vec.resize(lst.size());

    copy(lst.cbegin(), lst.cend(), vec.begin());


    vector<int> v;
    v.reserve(10);
    fill_n(v.begin(), 10, 0);

    print(v);
    print(vec);

    return 0;
}

