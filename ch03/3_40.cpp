/*************************************************************************
    > File Name: 3_40.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年03月25日, 周日 22:09:35
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
    char cstr1[] = "One";
    char cstr2[] = "Two";
    char cstr3[18];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    cout << cstr3 << endl;

    return 0;
}

