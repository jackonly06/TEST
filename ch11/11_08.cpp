/*************************************************************************
    > File Name: 11_08.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun,  8 Jul, 2018 11:17:02 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    vector<string> exclude = {"aa", "bb", "cc"};
    for( string word; cin >> word;){
        if( find(exclude.begin(), exclude.end(), word) != exclude.end() ){
            cout << "excluded!" << endl;
        }else{
            exclude.push_back(word);
        }
    }

    for( auto const &s : exclude ){
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

