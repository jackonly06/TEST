/*************************************************************************
    > File Name: 9_31.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 13 May, 2018 11:11:39 PM
 ************************************************************************/

#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
    list<int> vi = {0, 1, 2, 3, 4, 5, 6};
    auto iter = vi.begin();
    while( iter != vi.end() ){
        if( *iter % 2 ){
            iter = vi.insert(iter, *iter);
            advance(iter, 2);
        }else{
            iter = vi.erase(iter);
        }
    }

    for( auto i : vi ){
        cout << i << " ";
    }

    return 0;
}

