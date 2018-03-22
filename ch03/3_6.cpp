/*************************************************************************
    > File Name: 3_6.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年02月 1日 15:42:35
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str( "a simple string" );
    for( auto &c : str ){
        c = 'X';
    }
    cout << str << endl;

    return 0;
}

