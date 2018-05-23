/*************************************************************************
    > File Name: 9_46.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 23 May, 2018 09:35:55 PM
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

string pre_suffix(const string &name, const string &pre, const string &su)
{
    string ret(name);
    ret.insert(0, pre);
    ret.insert(ret.size(), su);

    return ret;
}

int main(int argc, char** argv)
{
    string name("test");

    cout << pre_suffix(name, "Mr.", ",Jr.");

    return 0;
}

