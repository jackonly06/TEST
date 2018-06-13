/*************************************************************************
    > File Name: 10_24.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 13 Jun, 2018 11:16:23 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

inline bool check_size(const string &s, string::size_type sz)
{
    return s.size() < sz;
}

inline vector<int>::const_iterator find_first_bigger(const vector<int> &v, const string &s)
{
    return find_if(v.cbegin(), v.cend(), bind(check_size, s, std::placeholders::_1));
}

int main(int argc, char** argv)
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    string s("test");
    cout << *find_first_bigger(v, s) << endl;

    return 0;
}

