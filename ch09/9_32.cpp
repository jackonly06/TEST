/*************************************************************************
    > File Name: 9_32.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Tue, 15 May, 2018 11:46:05 PM
 ************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while( iter != vi.end() ){
        if( *iter % 2 ){
            iter = vi.insert(iter, *iter);
            iter += 2;
        }else{
            iter = vi.erase(iter);
        }
    }

    for( auto i : vi ){
        cout << i << " ";
    }

    return 0;
}

