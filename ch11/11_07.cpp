/*************************************************************************
    > File Name: 11_07.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat,  7 Jul, 2018 09:55:58 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    map<string, vector<string>> famls;

    string lastName, chldName;

    while( [&]() -> bool {
          cout << "Please enter last name:\n";
          return cin >> lastName && lastName != "@q";
          }()){
        cout << "PLZ Enter children's name:\n";
        while( cin >> chldName && chldName != "@q"){
            famls[lastName].push_back(chldName);
        }
    }

    for( auto e : famls ){
        cout << e.first << ":\n";
        for( auto c : e.second ){
            cout << c << " ";
        }
        cout << "\n";
    }

    return 0;
}

