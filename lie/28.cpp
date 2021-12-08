/*************************************************************************
    > File Name: 28.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月08日 星期三 21时22分41秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Base1
{
public:
    Base1(int i)
    {
        b1 = i;
        cout << "Base1的构造函数被调用." << endl;
    }

    void Print()
    {
        cout << b1 << endl;
    }

private:
    int b1;
};

class Base2
{
public:
    Base2(int i)
    {
        b2 = i;
        cout << "Base2的构造函数被调用." << endl;
    }


    void Print()
    {
        cout << b2 << endl;
    }

private:
    int b2;
};

class Base3
{
public:
    Base3()
    {
        b3 = 0;
        cout << "Base3的构造函数被调用." << endl;
    }

    void Print()
    {
        cout << b3 << endl;
    }

private:
    int b3;

};

class Member
{
public:
    Member(int i)
    {
        m = i;
        cout << "Member的构造函数被调用." << endl;
    }

    int GetM() const
    {
        return m;
    }

private:
    int m;
};

class Derived: public Base2, public Base1, public Base3
{
public:
    Derived(int i, int j, int k, int l);
    void Print();

private:
    int d;
    Member mem;
};

Derived::Derived(int i, int j, int k, int l):Base1(i), Base2(j), mem(k)
{
    d = l;
    cout << "Derived的构造函数被调用." << endl;
}

void Derived::Print()
{
    Base1::Print();
    Base2::Print();
    Base3::Print();
    cout << mem.GetM() << endl;
    cout << d << endl;
}

int main(int argc, char **argv)
{
    Derived obj(1,2,3,4);
    obj.Print();
    return 0;
}

