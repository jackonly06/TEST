/*************************************************************************
    > File Name: 28_2.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月08日 星期三 22时25分12秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
public:
    Mammal();
    ~Mammal();

    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
    int GetWeight() const { return itsWeight; }
    void SetWeight(int weight){ itsWeight = weight; }

    void Speak() const { cout << "Mammal 的声音!\n"; }
    void Sleep() const { cout << "shhh. I'm sleeping.\n"; }

protected:
    int itsAge;
    int itsWeight;
};

class Dog: public Mammal
{
public:
    Dog();
    ~Dog();

    BREED GetBreed() const { return itsBreed; }
    void SetBreed(BREED breed) { itsBreed = breed; }

    void WagTail() const { cout << "Tail wagging...\n"; }
    void BegForFood() const { cout << "Begging for food...\n"; }

private:
    BREED itsBreed;
};

Mammal::Mammal(): itsAge(3), itsWeight(5)
{
    cout << "Mammal的构造函数..." << endl;
}

Mammal::~Mammal()
{
    cout << "Mammal的析构函数..." << endl;
}

Dog::Dog(): itsBreed(GOLDEN)
{
    cout << "Dog的构造函数被调用..." << endl;
}


Dog::~Dog()
{
    cout << "Dog的析构函数被调用..." << endl;
}


int main(int argc, char **argv)
{
    Dog Fido;
    Fido.Speak();
    Fido.WagTail();

    cout << "Fido is " << Fido.GetAge() << "years old" << endl;

    return 0;
}

