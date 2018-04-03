/*************************************************************************
    > File Name: 6_17.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 3日, 周二 22:02:19
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

bool hasUppercase(const string &str)
{
    for( auto c : str ){
        if( isupper(c) ){
            return true;
        }
    }
    return false;
}

const string &makeLowercase(string &str){
    for( auto &c : str ){
        if( isupper(c) ){
            c = tolower(c);
        }
    }
    return str;
}

int main(int argc, char** argv)
{
    string str("Hello World!");

    cout << boolalpha << hasUppercase(str) << endl;
    cout << makeLowercase(str) << endl;

    return 0;
}

