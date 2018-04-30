/*************************************************************************
    > File Name: 8_9.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 30 Apr, 2018 11:06:59 PM
 ************************************************************************/

#include <iostream>
#include <sstream>

using namespace std;

istream &func(istream &is)
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
    istringstream iss("hello");
    func(iss);
    return 0;
}

