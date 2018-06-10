/*************************************************************************
    > File Name: 10_20.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 10 Jun, 2018 11:00:52 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> words{"cppprimer", "jie", "cpptest", "greater", "rewrite", "programmer"};
    cout << count_if(words.cbegin(), words.cend(), [](const string &word){
                return word.size() > 6;
            }) << endl;
    return 0;
}

