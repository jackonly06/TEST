/*************************************************************************
    > File Name: 11_38.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu,  5 Jul, 2018 11:43:42 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
#include <fstream>
#include <sstream>

using namespace std;

void wordCounting()
{
    unordered_map<string, size_t> word_count;
    for( string word; cin >> word; ++word_count[word] ){
        ;
    }
    for( const auto &w : word_count ){
        cout << w.first << " occurs " << w.second << (w.second > 1 ? "time" : "time") << endl;
    }
}

void wordTransformation()
{
    ifstream ifs_map("./test.txt"), 
             ifs_content("./test_transform.txt");
    if( !ifs_map || !ifs_content ){
        cerr << "can't find the documents." << endl;
        return;
    }

    unordered_map<string, string> trans_map;
    for( string key, value; ifs_map >> key &&
        getline(ifs_map, value);){
        if( value.size() > 1){
            trans_map[key] = value.substr(1).substr(0, value.find_last_not_of(' '));
        }
    }

    for( string text, word; getline(ifs_content, text); cout << endl){
       for( istringstream iss(text); iss >> word;){
            auto map_it = trans_map.find(word);
            cout << (map_it == trans_map.cend() ? word : map_it->second) << " ";
       }
    }
}

int main(int argc, char** argv)
{
    wordTransformation();
    return 0;
}

