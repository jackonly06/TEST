/*************************************************************************
    > File Name: 6_42.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 6日, 周五 22:28:09
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
    return (ctr > 1 ? word + ending : word);
}

int main(int argc, char** argv)
{
    cout << "singual: " << make_plural(1, "success", "es")
         << " " << make_plural(1, "failure") << endl;
    cout << "plural: " << make_plural(2, "success", "es")
         << " " << make_plural(2, "failure") << endl;

    return 0;
}

