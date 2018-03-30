/*************************************************************************
    > File Name: 5_20.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月30日 17:39:28
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    string read, temp;

    while( cin >> read ){
        if( read == temp ){
            break;
        }else{
            temp = read;
        }
    }

    if( cin.eof() ){
        cout << "no word was repeated." << endl;
    }else{
        cout << read << " occurs twice in succession." << endl;
    }

    return 0;
}

