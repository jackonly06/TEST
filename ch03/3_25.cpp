/*************************************************************************
    > File Name: 3_25.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月21日 17:21:04
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;

    while( cin >> grade ){
        if( grade <= 100 ){
            ++(*(scores.begin() + grade / 10));
        }
    }

    for( auto score : scores ){
        cout << score << " ";
    }
    cout << endl;

    return 0;
}

