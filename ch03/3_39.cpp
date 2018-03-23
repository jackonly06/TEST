/*************************************************************************
    > File Name: 3_39.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月23日  9:03:17
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    string s1("jason");
    string s2("judy");

    if( s1 == s2 ){
        cout << "same string." << endl;
    }
    else if( s1 > s2 ){
        cout << "jason > judy" << endl;
    }
    else{
        cout << "jason < judy" << endl;
    }
    cout << "======" << endl;

    const char* cs1 = "jason";
    const char* cs2 = "judy";
    auto result = strcmp(cs1, cs2);
    if( result == 0 ){
        cout << "same string." << endl;
    }
    else if( result > 0 ){
        cout << "jason > judy" << endl;
    }
    else{
        cout << "jason < judy" << endl;
    }

    return 0;
}

