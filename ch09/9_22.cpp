/*************************************************************************
    > File Name: 9_22.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue,  8 May, 2018 10:37:45 PM
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void InsertDoubleValue(vector<int> &iv, int some_val)
{
    auto cursor = iv.size() / 2;
    auto iter = iv.begin(), mid = iv.begin() + cursor;

    while( iter != mid ){
        if( *iter == some_val ){
            iter = iv.insert(iter, 2 * some_val);
            ++iter;
            ++cursor;
            mid = iv.begin() + cursor;
        }
        ++iter;
    }
}

void Print(const vector<int> &iv)
{
    for( auto i : iv ){
        cout << i << " ";
    }
    cout << endl;
}

int main(int argc, char** argv)
{
    vector<int> iv = {1, 2, 3, 5, 3, 2, 1};
    InsertDoubleValue(iv, 1);
    Print(iv);

    return 0;
}

