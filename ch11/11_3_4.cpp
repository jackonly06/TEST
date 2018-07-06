/*************************************************************************
    > File Name: 11_3_4.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri,  6 Jul, 2018 11:12:35 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

void word_count_pro(map<string, int> &m)
{
    string word;
    while( cin >> word ){
        for( auto &ch : word ){
            ch = tolower(ch);
        }
        word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
        ++m[word];
    }

    for( const auto &e : m ){
        cout << e.first << " : " << e.second << "\n";
    }
}

void ex11_3()
{
    map<string, size_t> word_count;
    string word;
    while( cin >> word ){
        ++word_count[word];
    }

    for( const auto &elem : word_count ){
        cout << elem.first << " : " << elem.second << "\n";
    }
}

int main(int argc, char** argv)
{
    map<string, int> m;

    word_count_pro(m);

    return 0;
}

