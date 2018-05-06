/*************************************************************************
    > File Name: 9_16.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun,  6 May, 2018 11:19:26 PM
 ************************************************************************/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    list<int> list{1, 2, 3, 4};
    vector<int> vet1{1, 2, 3, 4};
    vector<int> vet2{1, 2, 3};

    cout << boolalpha << (vector<int>(list.begin(), list.end()) == vec1) << endl;
    cout << boolalpha << (vector<int>(list.begin(), list.end()) == vec2) << endl;

    return 0;
}

