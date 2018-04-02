/*************************************************************************
    > File Name: 6_10.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 2日, 周一 23:35:20
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stdexcept>

using namespace std;

int swap( int *lhs, int *rhs )
{
    int temp;

    temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}

int main(int argc, char** argv)
{
    for( int lft, rht; cout << "Please Enter:\n", cin >> lft >> rht; ){
        swap(&lft, &rht);
        cout << lft << " " << rht << endl;
    }

    return 0;
}

