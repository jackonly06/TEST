/*************************************************************************
    > File Name: 9_49.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 25 May, 2018 10:11:50 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    ifstream ifs("../ch09/test.txt");
    if( !ifs ){
        return -1;
    }

    string longest_word;
    for( string word; ifs >> word; ){
        if( word.find_first_not_of("acemnorsuvwxz") == string
            ::npos && word.size() > longest_word.size() ){
            longest_word = word;
        }
    }

    cout << longest_word << endl;

    return 0;
}

