/*************************************************************************
    > File Name: 8_11.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed,  2 May, 2018 08:44:56 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(int argc, char** argv)
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while( getline(cin, line) ){
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while( record >> word ){
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for( auto &p : people ){
        cout << p.name << " ";
        for( auto &s : p.phones ){
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}

