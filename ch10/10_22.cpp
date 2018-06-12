/*************************************************************************
    > File Name: 10_22.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, 12 Jun, 2018 11:29:53 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace placeholders;

bool lessThanOrEqualTo(const string &s, string:: size_type sz)
{
    return s.size() <= sz;
}

int main(int argc, char** argv)
{
    vector<string> authors{"Mooophy", "cpptest",
                            "Queequeg90", "shhai",
                            "sunware890"};
    cout << count_if(authors.cbegin(), authors.cend(),
            bind(lessThanOrEqualTo, _1, 6)) << endl;

    return 0;
}

