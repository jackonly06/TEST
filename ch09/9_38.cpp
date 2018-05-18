/*************************************************************************
    > File Name: 9_38.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 18 May, 2018 11:53:25 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> v;
    string word;

    while(cin >> word){
        v.push_back(word);
        cout << v.capacity() << "\n";
    }

    return 0;
}

