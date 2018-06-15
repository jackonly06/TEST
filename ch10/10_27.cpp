/*************************************************************************
    > File Name: 10_27.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 15 Jun, 2018 03:38:24 PM
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec{3, 5, 1, 5, 1, 7, 3, 7, 9};
    list<int> lst;

    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));

    for( auto i : lst ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

