/*************************************************************************
    > File Name: 5_17.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月30日 16:50:46
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> vec1{0, 1, 1, 2};
    vector<int> vec2{0, 1, 1, 2, 9, 11};
    auto size = vec1.size() < vec2.size() ? vec1.size() : vec2.size();

    for( decltype(vec1.size()) i = 0; i != size; ++i ){
        if( vec1[i] != vec2[i] ){
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "ture" << endl;
    return 0;
}

