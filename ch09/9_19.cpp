/*************************************************************************
    > File Name: 9_19.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon,  7 May, 2018 11:22:21 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    list<string> input;

    for( string str;cin >> str; input.push_back(str) ){
        ;
    }
    for( auto iter = input.cbegin(); iter != input.cend(); ++iter ){
        cout << *iter << endl;
    }

    return 0;
}

