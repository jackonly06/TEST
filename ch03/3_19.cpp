/*************************************************************************
    > File Name: 3_19.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月16日 19:26:51
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec1(10, 42);
    vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> ivec3;

    for( int i = 0; i < 10; ++i ){
        ivec3.push_back(42);
    }
    cout << "The first approach is better!" << endl;

    return 0;
}

