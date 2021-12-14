/*************************************************************************
    > File Name: 31_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月14日 星期二 20时57分57秒
 ************************************************************************/
/* 静态成员与继承 */

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class A
{
public:
    static size_t object_count()
    {
        return 100;
    }
protected:
    static const  size_t obj_count = 99;
};

class B: public A
{
public:
    void f(const B &b, B *b2)
    {
        cout << A::obj_count << endl;
        cout << B::obj_count << endl;
        cout << b.obj_count << endl;
        cout << b2->obj_count << endl;
        cout << obj_count << endl;

        cout << A::object_count() << endl;
        cout << B::object_count() << endl;
        cout << b.object_count() << endl;
        cout << b2->object_count() << endl;
        cout << object_count() << endl;
    }

};

class C: public B
{

};



int main(int argc, char **argv)
{
    B b;
    b.f(b, &b);

    return 0;
}

