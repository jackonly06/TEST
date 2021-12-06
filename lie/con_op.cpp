/*************************************************************************
    > File Name: con_op.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月06日 星期一 22时03分16秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Dog
{
public:
    Dog(string n, int a, double w):name(n), age(a), weight(w) {}

    operator int() const
    {
        return age;
    }

    operator double() const
    {
        return weight;
    }

private:
    int age;
    double weight;
    string name;
};

int main(int argc, char **argv)
{
    double a;
    int b;

    a = 10;
    b = a;

    Dog d("Bill", 6, 15.0);
    Dog f("Bill", 6, 15.0);

    b = d;
    a = f;

    cout << b << endl;
    cout << a << endl;

    return 0;
}

