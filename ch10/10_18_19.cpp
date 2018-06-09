/*************************************************************************
    > File Name: 10_18_19.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat,  9 Jun, 2018 10:46:32 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void elimdups(vector<string> &vs)
{
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies_partition(vector<string> &vs, size_t sz)
{
    elimdups(vs);

    auto pivot = partition(vs.begin(), vs.end(), [sz](const string &s){
            return s.size() >= sz;
            });

    for( auto it = vs.cbegin(); it != pivot; ++it){
        cout << *it << " ";
    }
}

void biggies_stable_partition(vector<string> &vs, size_t sz)
{
    elimdups(vs);

    auto pivot = stable_partition(vs.begin(), vs.end(),
            [sz](const string &s){
                return s.size() >= sz;
            });
    for( auto it = vs.cbegin(); it != pivot; ++it){
        cout << *it << " ";
    }
}

int main(int argc, char** argv)
{
    vector<string> v{"the", "quick", "red", "fox", "jumps",
                    "over", "the", "slow", "red", "turtle"
                    };
    cout << "ex10_18: ";
    vector<string> v1(v);
    biggies_partition(v1, 4);
    cout << endl;

    cout << "ex10_19: ";
    vector<string> v2(v);
    biggies_stable_partition(v2, 4);
    cout << endl;

    return 0;
}

