/*************************************************************************
    > File Name: 30_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月14日 星期二 20时32分28秒
 ************************************************************************/
/* 友元与继承 */
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Base
{
    friend class Frnd;
    friend class D2;
protected:
    int i;
};

class D1: public Base
{
    friend class Frnd;
    friend class D2;
private:
    int j;
};

class Frnd
{
    public:
        int mem(Base b) { return b.i; }
        int mem(D1 d) { return d.j; }
};

class D2: public Frnd
{
public:
    int mem(Base b) { return b.i; }
    int mem(D1 d) { return d.j; }
};

int main(int argc, char **argv)
{
    Base a;
    D1 b;
    Frnd c;
    D2 d;


    return 0;
}

