/*************************************************************************
    > File Name: 9_13.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri,  4 May, 2018 10:55:50 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    list<int> ilst(5,4);
    vector<int> ivc(5,5);

    vector<double> dvc(ilst.begin(), ilst.end());
    for( auto i : ilst ){
        cout << i;
    }
    cout << endl;

    for( auto t : dvc ){
        cout << t;
    }
    cout << endl;

    vector<double> dvc2(ivc.begin(), ivc.end());
    for( auto i : ivc ){
        cout << i;
    }
    cout << endl;
    for( auto t : dvc2 ){
        cout << t;
    }
    cout << endl;

    return 0;
}

