/*************************************************************************
    > File Name: 1_09.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, Jul 20, 2018 11:50:06 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char **argv)
{
    int sum = 0, val = 50;

    while( val <= 100 ){
        sum += val;
        ++val;
    }

    cout << "the sum is: " << sum << endl;

    return 0;
}


