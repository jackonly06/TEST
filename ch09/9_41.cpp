/*************************************************************************
    > File Name: 9_41.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat, 19 May, 2018 11:06:02 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<char> vec{'N', '.', 'J', 'i', 'e'};
    string str(vec.begin(), vec.end());

    cout << str << endl;

    return 0;
}

