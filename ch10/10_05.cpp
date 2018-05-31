/*************************************************************************
    > File Name: 10_05.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 31 May, 2018 11:14:23 PM
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    char c1[10] = "eipi10";
    char c2[10] = "rerpi5";

    vector<char*> roster1{c1};
    list<char*> roster2{c2};
    cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());

    return 0;
}

