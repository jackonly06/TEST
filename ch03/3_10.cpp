/*************************************************************************
    > File Name: 3_9.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年02月 1日 16:11:07
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter a string of characters including punctuation." << endl;
    while( getline(cin , s) ){
        for( auto i : s ){
            if( !ispunct(i) ){
                cout << i << endl;
            }
        }
    }
    return 0;
}

