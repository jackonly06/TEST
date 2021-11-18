/*************************************************************************
    > File Name: inheritance.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月18日 星期四 21时34分51秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class A
{
public:
    A()
    {
        a = 19;
        b = 29;
        c = 39;
        a2 = 22;
        a3 = 42;
    }
    int a;
    int a2;
    int a3;
    void test()
    {
        cout << a << endl;
        cout << b << endl;
        cout << "A test 执行" << endl;
    }

    void test1()
    {
        cout << a << endl;
        cout << b << endl;
        cout << "A test1 执行" << endl;
    }


protected:
    int b;
private:
    int c;
};

class B1:public A
{
public:
    void test()
    {
        cout << a << endl;
        cout << b << endl;
        cout << "B1 test 执行" << endl;
        //cout << c << endl; //不可继承
    }

};

class B2:private A
{
public:
    using A::a2; //把a2由私有变为公有
    void test()
    {
        cout << a << endl;
        cout << b << endl;
        //cout << c << endl; //不可继承
    }
};

class B3:protected A
{
public:
    void test()
    {
        cout << a << endl;
        cout << b << endl;
        //cout << c << endl; //不可继承
    }
};


class C:public B1
{
public:
    void test()
    {
        cout << a << endl;
        cout << b << endl;
        cout << "C test 执行" << endl;
        //cout << c << endl;// 不可继承
    }

};


int main(int argc, char **argv)
{
    B1 b1;
    b1.a;
//    b1.b; //受保护
    b1.test();

    B2 b2;
//    cout << b2.a << endl;// 受保护，不可直接用
//    cout << b2.b << endl;// 受保护，不可直接用
    cout << b2.a2 << endl;
//    cout << b2.a3 << endl;// 受保护，不可直接用
    b2.test();

    B3 b3;
    b3.test();

    C c1;
    c1.A::test();
    c1.test1();
    return 0;
}

