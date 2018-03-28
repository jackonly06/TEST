/*************************************************************************
    > File Name: 4_22.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月28日  9:03:27
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    unsigned grade;

    while( cin >> grade ){
        cout << ((grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass");

        cout << endl;

        if( grade > 90 ){
            cout << "high pass";
        }
        else if( grade < 60 ){
            cout << "fail";
        }
        else if( grade < 75 ){
            cout << "low pass";
        }
        else{
            cout << "pass";
        }
        cout << endl;
    }
    return 0;
}

