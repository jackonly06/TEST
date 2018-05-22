/*************************************************************************
    > File Name: 9_45.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, 22 May, 2018 10:55:00 PM
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

string pre_suffix(const string &name, const string &pre, const string &su);

int main(int argc, char** argv)
{
    string name("alan");
    cout << pre_suffix(name, "Mr.", ",Jr.") << endl;

    return 0;
}

inline string pre_suffix(const string &name, const string &pre, const string &su)
{
    auto ret = name;
    ret.insert(ret.begin(), pre.begin(), pre.end());
    ret.append(su);

    return ret;
}

