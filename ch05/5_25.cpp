/*************************************************************************
    > File Name: 5_25.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 1日, 周日 19:56:56
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stdexcept>

using namespace std;

int main(int argc, char** argv)
{
    int a, b;

    cout << "Input two integers:";
    while( cin >> a >> b ){
        try{
            if( b == 0 ){
                throw runtime_error("divisor is 0");
            }
            cout << static_cast<double>(a) / b << endl;
            cout << "Input two integers:";
        }
        catch( runtime_error err ){
            cout << err.what();
            cout << "\nTry Again? Enter y or n:" << endl;
            char c;
            cin >> c;
            if( !cin || c == 'n' ){
                break;
            }
        }
    }
    return 0;
}

