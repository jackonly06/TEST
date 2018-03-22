/*************************************************************************
    > File Name: 3_23.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月21日 11:44:07
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10, 1);

    for( auto it = ivec.begin(); it != ivec.end(); ++it ){
        *it *= 2;
    }
    for( auto value : ivec ){
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

