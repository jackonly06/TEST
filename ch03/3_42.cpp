/*************************************************************************
    > File Name: 3_42.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月26日, 周一 23:01:54
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6};
    int int_arr[7];

    for( int *i = begin(int_arr); i != end(int_arr); ++i){
        *i = ivec[i - begin(int_arr)];
    }

    for( auto i : int_arr ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

