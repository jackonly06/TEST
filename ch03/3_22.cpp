/*************************************************************************
    > File Name: 3_22.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月21日 10:38:44
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> text;
    for( string line; getline(cin, line); ){
        text.push_back(line);
    }

    for( auto it = text.begin(); it != text.end() && !it->empty(); ++it ){
        for( auto &c : *it ){
            c = toupper(c);
        }
        cout << *it << endl;
    }
    return 0;
}

