/*************************************************************************
    > File Name: 5_06.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月28日 17:51:33
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade{0};

    while( cin >> grade ){
        string lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
        lettergrade += (grade == 100 || grade < 60 ) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3 ? "-" : "");
        cout << lettergrade << endl;
    }
    return 0;
}

