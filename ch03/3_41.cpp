/*************************************************************************
    > File Name: 3_41.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月26日, 周一 22:49:20
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int  int_arr[] = {0, 1, 2, 3, 4, 5, 6};
    vector<int> ivec(begin(int_arr), end(int_arr));

    for( auto i : ivec ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

