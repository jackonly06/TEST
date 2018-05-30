/*************************************************************************
    > File Name: 10_03_04.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 30 May, 2018 11:43:32 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> v = {1, 2, 3, 4};
    cout << "ex 10_03: " << accumulate(v.cbegin(),
            v.cend(), 0) << endl;

    vector<double> vd = {1.1, 0.5, 3.3};
    cout << "ex 10_04: " << accumulate(vd.cbegin(), vd.
            cend(), 0) << endl;

    return 0;
}

