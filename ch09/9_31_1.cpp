/*************************************************************************
    > File Name: 9_31_1.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon, 14 May, 2018 11:28:12 PM
 ************************************************************************/

#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, char** argv)
{
    forward_list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin(), prev = vi.before_begin();
    while( iter != vi.end() ){
        if( *iter & 2 ){
            iter = vi.insert_after(prev, *iter);
            advance(iter, 2);
            advance(prev, 2);
        }else{
            iter = vi.erase_after(prev);
        }
    }

    for( auto i : vi ){
        cout << i << " ";
    }

    return 0;
}

