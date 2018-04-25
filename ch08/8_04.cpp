/*************************************************************************
    > File Name: 8_04.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 25 Apr, 2018 11:23:26 PM
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
        while( getline(ifs,buf) ){
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

