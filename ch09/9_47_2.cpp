/*************************************************************************
    > File Name: 9_47_2.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 25 May, 2018 12:00:20 AM
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    string numbers{"0123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string str{"ab2c3d4E5R7P"};

    cout << "numeric characters:";
    for( string::size_type pos = 0; (pos = str.find_first_not_of(alphabet, pos)) != string::npos; ++pos ){
        cout << str[pos] << " ";
    }
    cout << "\nalphabetic characters: ";
    for( string::size_type pos = 0; (pos = str.find_first_not_of(numbers, pos)) != string::npos; ++pos ){
        cout << str[pos] << " ";
    }
    cout << endl;

    return 0;
}

