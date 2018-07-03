/*************************************************************************
    > File Name: 11_32.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue,  3 Jul, 2018 03:43:17 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(int argc, char** argv)
{
    multimap<string, string> authors{
        {"alan", "DMA"}, {"pezy", "LeetCode"}, {"alan", "CLRS"},
        {"wang", "FTP"}, {"pezy", "CP5"}, {"wang", "CPP-Concurrency"}
    };
    map<string, multiset<string>> order_authors;

    for( const auto &author : authors ){
        order_authors[author.first].insert(author.second);
    }

    for( const auto &author : order_authors ){
        cout << author.first << ":";
        for( const auto &work : author.second ){
            cout << work << " ";
        }
        cout << endl;
    }
    return 0;
}

