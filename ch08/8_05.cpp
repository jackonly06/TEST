/*************************************************************************
    > File Name: 8_05.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 26 Apr, 2018 11:02:44 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void ReadFileToVec(const string &fileName, vector<string> &vec)
{
    ifstream ifs(fileName);
    if( ifs ){
        string buf;
        while( ifs >> buf ){
            vec.push_back(buf);
        }
    }
}

int main(int argc, char** argv)
{
    vector<string> vec;
    ReadFileToVec("../data/book.txt", vec);
    for( const auto &str : vec ){
        cout << str << endl;
    }
    return 0;
}

