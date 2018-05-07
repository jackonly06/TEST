/*************************************************************************
    > File Name: 9_18.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon,  7 May, 2018 11:07:40 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(int argc, char** argv)
{
    deque<string> input;
    for( string str; cin >> str; input.push_back(str) ){
        ;
    }
    for( auto iter = input.cbegin(); iter != input.cend(); ++iter ){
        cout << *iter << endl;
    }

    return 0;
}

