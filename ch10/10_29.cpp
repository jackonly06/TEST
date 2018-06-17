/*************************************************************************
    > File Name: 10_29.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 17 Jun, 2018 03:20:57 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    ifstream ifs("./book.txt");
    istream_iterator<string> in(ifs), eof;
    vector<string> vec;
    copy(in, eof, back_inserter(vec));

    copy(vec.cbegin(), vec.cend(), ostream_iterator<string>(cout, "\n"));

    return 0;
}

