/*************************************************************************
    > File Name: 40.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2022年01月11日 星期二 21时30分14秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <memory>

using namespace std;

class Dog
{

};

void demo2()
{
    std::unique_ptr<double> pd(new double);
    *pd = 28.5;

    cout << *pd << endl;
}

void demo1()
{
    double d;
    d = 25.5;

    double *pd = new double;
    *pd = 25.5;

    Dog *pDog = new Dog();

    cout << d << endl;
    cout << *pd << endl;

    delete pd;
    delete pDog;

    return;
}

int main(int argc, char **argv)
{
    demo1();
    demo2();
    return 0;
}

