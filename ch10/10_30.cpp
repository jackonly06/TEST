/*************************************************************************
    > File Name: 10_30.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 18 Jun, 2018 02:48:44 PM
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    istream_iterator<int> in_iter(cin), eof;
    vector<int> vec;

    while( in_iter != eof ){
        vec.push_back(*in_iter++);
    }

    sort(vec.begin(), vec.end());
    copy(vec.cbegin(), vec.cend(), ostream_iterator<int> (cout, " "));

    return 0;
}

