/*************************************************************************
    > File Name: 11_23.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 29 Jun, 2018 11:10:29 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
    multimap<string, string> families;

    for(string lastName, childName; cin >> childName >> lastName; families.emplace(lastName, childName)){
        ;
    }
    for( const auto &s : families ){
        cout << s.second << " " << s.first << endl;
    }

    return 0;
}

