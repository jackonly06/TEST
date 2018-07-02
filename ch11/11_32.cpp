/*************************************************************************
    > File Name: 11_32.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon,  2 Jul, 2018 11:42:44 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
    multimap<string, string> authors{
        {"alan", "DMA"}, {"pezy", "LeetCode"}, {"alan", "CLRS"},
        {"wang", "FTP"}, {"pezy", "CP5"}, {"wang", "CPP-Concurrency"},
        {"pezy", "CP5"}};
    string author = "pezy";
    string work = "CPS";

    for(auto found = authors.find(author); found != authors.end()
        && found->first == author;){
        if(found->second == work){
            found = authors.erase(found);
        }else{
            ++found;
        }
    }

    for(const auto &author : authors){
        cout << author.first << " " << author.second << endl;
    }

    return 0;
}

