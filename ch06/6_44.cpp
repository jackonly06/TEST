/*************************************************************************
    > File Name: 6_44.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 6日, 周五 23:07:50
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

inline bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

int main(int argc, char** argv)
{
    cout << isShorter("test", "try") << endl;

    return 0;
}

