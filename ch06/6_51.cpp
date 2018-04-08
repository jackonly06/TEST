/*************************************************************************
    > File Name: 6_51.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 8日 16:39:25
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

void f()
{
    cout << "f()" << endl;
}

void f(int)
{
    cout << "f(int)" << endl;
}

void f(int, int)
{
    cout << "f(int, int)" << endl;
}

void f(double, double)
{
    cout << "f(double, double)" << endl;
}

int main(int argc, char** argv)
{
    //f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}

