/*************************************************************************
    > File Name: 11_12_13.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 25 Jun, 2018 11:37:02 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main(int argc, char** argv)
{
    vector<pair<string, int>> vec;
    string str;
    int i;

    while(cin >> str >> i){
        vec.push_back(pair<string, int>(str, i));
    }

    for( const auto &p : vec ){
        cout << p.first << ":" << p.second << endl;
    }

    return 0;
}

