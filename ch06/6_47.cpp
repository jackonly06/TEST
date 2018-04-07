/*************************************************************************
    > File Name: 6_47.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 7日, 周六 23:09:13
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int>& vec)
{
#ifndef NDEBUG
    cout << "vector size: " << vec.size() << endl;
#endif
    if( !vec.empty() ){
        auto tmp = vec.back();
        vec.pop_back();
        printVec(vec);
        cout << tmp << " ";
    }
}

int main(int argc, char** argv)
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    printVec(vec);
    cout << endl;

    return 0;
}

