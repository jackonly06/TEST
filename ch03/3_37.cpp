/*************************************************************************
    > File Name: 3_37.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月23日  8:46:18
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char s[] = "world";
    const char *cp = ca;

    while( *cp ){
        cout << *cp << endl;
        ++cp;
    }
    return 0;
}

