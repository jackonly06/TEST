/*************************************************************************
    > File Name: 10_11.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon,  4 Jun, 2018 11:13:44 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>

using namespace std;

template <typename Sequence> inline ostream& println(Sequence const &seq)
{
    for( auto const &elem : seq ){
        cout << elem << " ";
    }
    cout << endl;

    return cout;
}

inline bool is_shorter(string const & lhs, string const &rhs)
{
    return lhs.size() < rhs.size();
}

void elimdups(vector<string> &vs)
{
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

int main(int argc, char** argv)
{
    vector<string> v{"1234", "1234", "1234", "Hi", "jason", "nnnnn"};
    elimdups(v);
    stable_sort(v.begin(), v.end(), is_shorter);
    cout << "10.11 :\n";
    println(v);

    return 0;
}

