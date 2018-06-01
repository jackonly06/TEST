/*************************************************************************
    > File Name: 10_06.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri,  1 Jun, 2018 10:15:35 PM
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    fill_n(vec.begin(), vec.size(), 0);

    for( auto i : vec ){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

