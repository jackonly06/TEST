/*************************************************************************
    > File Name: 8_10.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue,  1 May, 2018 11:16:48 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    ifstream ifs("../data/book.txt");
    if( !ifs ){
        cerr << "No data?" << endl;
        return -1;
    }

    vector<string> vecLine;
    string line;
    while( getline(ifs, line) ){
        vecLine.push_back(line);
    }

    for( auto &s : vecLine ){
        istringstream iss(s);
        string word;
        while( iss >> word ){
            cout << word << endl;
        }
    }

    return 0;
}

