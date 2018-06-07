/*************************************************************************
    > File Name: 10_16.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu,  7 Jun, 2018 09:29:28 PM
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

void biggies(vector<string> &vs, size_t sz)
{
    elimdups(vs);

    stable_sort(vs.begin(), vs.end(), [](string const &lhs, 
                string const &rhs){
                return lhs.size() < rhs.size();
            });

    auto wc = find_if(vs.begin(), vs.end(), [sz](string
                const &s){
                return s.size() >= sz;
            });

    for_each(wc, vs.end(), [](const string &s){
                cout << s << " ";
            });
}

int main(int argc, char** argv)
{
    vector<string> v{"1234", "1234", "1234", "hi~", "alan",
                     "alan", "cp"};
    cout << "ch10_16: ";
    biggies(v, 3);
    cout << endl;

    return 0;
}

