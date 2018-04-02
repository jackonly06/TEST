/*************************************************************************
    > File Name: 5_21.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月31日  9:02:26
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    string curr, prev;
    bool no_twice = false;

    while( cin >> curr ){
        if( !isupper(curr[0]) ){
            continue;
        }
        if( prev == curr ){
            cout << curr << " occurs twice in succession." << endl;
            no_twice = true;
            break;
        }else{
            prev = curr;
        }
    }

    if( !no_twice ){
        cout << "no word was repeated." << endl;
    }
    return 0;
}

