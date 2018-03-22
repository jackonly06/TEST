/*************************************************************************
    > File Name: 3_8.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年02月 1日 15:55:49
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("a simple string");
    decltype(str.size()) i = 0;
    while( i < str.size() ){
        str[i] = 'X';
        ++i;
    }
    cout << str << endl;

    for ( i = 0; i < str.size(); ++i){
        str[i] = 'Y';
    }
    cout << str << endl;

    return 0;
}
