/*************************************************************************
    > File Name: 9_15.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat,  5 May, 2018 11:24:41 AM
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec1{5, 6, 9, 89};
    vector<int> vec2{5, 6, 9, 89};
    vector<int> vec3{5, 6, 9};

    cout << boolalpha << ( vec1 == vec2 ) << endl;
    cout << boolalpha << ( vec1 == vec3 ) << endl;

    return 0;
}

