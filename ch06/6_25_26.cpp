/*************************************************************************
    > File Name: 6_25_26.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 4日, 周三 23:03:21
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    string str;

    for( int i = 1; i != argc; ++i ){
        str += argv[i];
        str += " ";
    }
    cout << str << endl;

    return 0;
}

