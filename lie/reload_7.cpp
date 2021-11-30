/*************************************************************************
    > File Name: reload_7.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月29日 星期一 22时26分37秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <iterator>
#include "string.h"
#include "pointer.h"

using namespace std;

int main(int argc, char **argv)
{
    String s("Hello String");
    s.display();

    String *ps = &s;
    ps->display();

    try
    {
        Pointer p1("C++");
        p1->display();

        String s = *p1;
        s.display();

        Pointer p2;
        p2->display();
    }
    catch(String const &error)
    {
        error.display();
    }

    return 0;
}

