/*************************************************************************
    > File Name: 28_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月08日 星期三 22时03分48秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Base
{
public:
    Base()
    {
        b1 = b2 = 0;
    }
    Base(int i, int j);
    ~Base();
    void Print()
    {
        cout << b1 << "," << b2 << ",";
    }
private:
    int b1, b2;
};

Base::Base(int i, int j)
{
    b1 = i;
    b2 = j;
    cout << "Base的构造函数被调用." << b1 << "," << b2 << endl;
}

Base::~Base()
{
    cout << "Base的析构函数被调用." << b1 << "," << b2 << endl;
}


class Derived: public Base
{
public:
    Derived()
    {
       d = 0;
    }
    Derived(int i, int j, int k);
    ~Derived();
    void Print();
private:
    int d;
};

Derived::Derived(int i, int j, int k): Base(i,j), d(k)
{
    cout << "Derived的构造函数被调用." << d << endl;
}

Derived::~Derived()
{
    cout << "Derived的析构函数被调用." << d << endl;
}

void Derived::Print()
{
    Base::Print();
    cout << d << endl;
}

int main(int argc, char **argv)
{
    Derived objD1(1, 2, 3), objD2(-4, -5, -6);
    objD1.Print();
    objD2.Print();

    return 0;
}

