/*************************************************************************
    > File Name: 11_24_25_26.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat, 30 Jun, 2018 08:54:30 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    map<int, int> m;
    m[0] = 1;

    for( const auto &e : m ){
        cout << e.first << " " << e.second << "\n";
    }

    vector<int> v;
    v[0] = 1;
    for( const auto &e : v ){
        cout << e << "\n";
    }

    std::map<int, string> map = {{1, "ss"}, {2, "sz"}};
    std::map<int, string>::key_type type_to_subscript = 1;
    std::map<int, string>::mapped_type type_to_return = map[type_to_subscript];

    return 0;
}

