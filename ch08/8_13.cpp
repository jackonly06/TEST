/*************************************************************************
    > File Name: 8_13.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu,  3 May, 2018 09:37:03 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

bool valid(const string &str)
{
    return isdigit(str[0]);
}

string format(const string &str)
{
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int main(int argc, char** argv)
{
    ifstream ifs("./phonenumbers.txt");
    if( !ifs ){
        cerr << "no phone numbers?" << endl;
        return -1;
    }

    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while( getline(ifs, line) ){
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while( record >> word ){
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for( const auto &entry : people ){
        ostringstream formatted, badNums;
        for( const auto &nums : entry.phones ){
            if( !valid(nums) ){
                badNums << " " << nums;
            }else{
                formatted << " " << format(nums);
            }
        }
        if( badNums.str().empty() ){
            cout << entry.name << " " << formatted.str() << endl;
        }else{
            cerr << "input error: " << entry.name << "invail number(s)" << badNums.str() << endl;
        }
    }

    return 0;
}

