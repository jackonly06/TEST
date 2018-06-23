/*************************************************************************
    > File Name: 10_42.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat, 23 Jun, 2018 11:23:20 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <list>

using namespace std;

void elimDups(list<string> &words)
{
    words.sort();
    words.unique();
}

int main(int argc, char** argv)
{
    list<string> l = {"aa", "aa", "aaa", "aasss", "aa"};
    elimDups(l);

    for( const auto &e : l ){
        cout << e << " ";
    }
    cout << endl;

    return 0;
}

