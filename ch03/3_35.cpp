/*************************************************************************
    > File Name: 3_35.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月22日  9:59:30
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    int arr[10];
    int *b = begin(arr);
    int *e = end(arr);

    for( int *i = b; i != e; ++i ){
        *i = 0;
    }

    for( auto i : arr ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

