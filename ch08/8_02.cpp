/*************************************************************************
    > File Name: 8_02.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, 24 Apr, 2018 11:24:04 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

istream &func(istream& is)
{
    string buf;
    while( is >> buf ){
        cout << buf << endl;
    }
    is.clear();
    return is;
}

int main(int argc, char** argv)
{
    istream &is = func(cin);
    cout << is.rdstate() << endl;
    return 0;
}

