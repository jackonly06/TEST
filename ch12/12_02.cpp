/*************************************************************************
    > File Name: 12_02.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Wed, 11 Jul, 2018 03:42:35 PM
 ************************************************************************/

#include <iostream>
#include "12_02.h"

using namespace std;

int main(int argc, char** argv)
{
    const StrBlob csb{"hello", "world", "pezy"};
    StrBlob sb{"hello", "world", "Mooophy"};

    cout << csb.front() << " " << csb.back() << endl;
    sb.back() = "pezy";
    cout << sb.front() << " " << sb.back() << endl;

    return 0;
}

