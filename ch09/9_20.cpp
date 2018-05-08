/*************************************************************************
    > File Name: 9_20.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue,  8 May, 2018 10:21:07 PM
 ************************************************************************/

#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    list<int> l{1, 2, 3, 4, 5, 6};
    deque<int> odd, even;

    for( auto i : l){
        (i & 0x01 ? odd : even).push_back(i);
    }

    for( auto i : odd ){
        cout << i << " ";
    }
    cout << endl;

    for( auto i : even ){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

