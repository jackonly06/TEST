/*************************************************************************
    > File Name: 10_13.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed,  6 Jun, 2018 11:19:36 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool predicate(const string &s)
{
    return s.size() >= 5;
}

int main(int argc, char** argv)
{
    auto v = vector<string> {"a", "as", "aassss", "aaassssaaa", "aaabfd", "aaaaa"};
    auto pivot = partition(v.begin(), v.end(), predicate);

    for( auto it = v.cbegin(); it != pivot; ++it ){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

