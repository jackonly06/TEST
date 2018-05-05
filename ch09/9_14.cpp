/*************************************************************************
    > File Name: 9_14.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat,  5 May, 2018 11:16:44 AM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    list<const char*> l{"test", "program", "try"};
    vector<string> v;
    v.assign(l.cbegin(), l.cend());

    for( const auto & ch : v ){
        cout << ch << endl;
    }

    return 0;
}

