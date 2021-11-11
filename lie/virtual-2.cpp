/*************************************************************************
    > File Name: virtual-2.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月11日 星期四 21时42分23秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

/*
抽象类--抽象数据类型
1.任何包含一个或多个纯虚函数的类都是抽象类
2.不要创建这个类的对象，应该继承它
3.务必覆盖从这个类继承的纯虚函数,不然继承的字类还是抽象类

C++接口--就是只包含纯虚函数的抽象基类

*/

enum COLOR{ Red, Green, Blue, Yellow, White, Black, Brown };

class Animal
{
public:
        Animal(int);
        virtual ~Animal(){ cout << "Animal析构函数被调用...\n"; }
        virtual int GetAge() const { return itsAge; }
        virtual void SetAge(int age) { itsAge = age; }
        virtual void Sleep() const = 0;
        virtual void Eat() const = 0;
        virtual void Reproduce() const = 0;
        virtual void Move() const = 0;
        virtual void Speak() const = 0;
private:
        int itsAge;
};

Animal::Animal(int age):itsAge(age)
{
    cout << "Animal构造函数被调用...\n";
}

class Mammal: public Animal
{
public:
    Mammal(int age):Animal(age)
    {
        cout << "Mammal构造函数被调用...\n";
    }
    virtual ~Mammal(){ cout << "Mammal构造函数被调用...\n"; }
    virtual void Reproduce() const
    {
        cout << "Mammal reproduction depicted... \n";
    }
};

class Fish: public Animal
{
public:
    Fish(int age):Animal(age)
    {
        cout << "Fish构造函数被调用...\n";
    }
    virtual ~Fish()
    {
        cout << "Fish析构函数被调用...\n";
    }
    virtual void Sleep() const { cout << "fish snoring...\n"; }
    virtual void Eat() const { cout << "fish feeding...\n"; }
    virtual void Reproduce() const { cout << "fish laying eggs...\n"; }
    virtual void Move() const { cout << "fish swimming...\n"; }
    virtual void Speak() const {}
};

class Horse: public Mammal
{
public:
    Horse(int age, COLOR color):Mammal(age),itsColor(color)
    {
        cout << "Horse构造函数被调用...\n";
    }
    virtual ~Horse()
    {
        cout << "Horse析构函数被调用...\n";
    }
    virtual void Speak() const { cout << "Whinny!...\n"; }
    virtual void Sleep() const { cout << "Horse snoring...\n"; }
    virtual COLOR GetItsColor() const { return itsColor; }
    virtual void Eat() const { cout << "Horse feeding...\n"; }
    virtual void Move() const { cout << "Horse running...\n"; }
protected:
    COLOR itsColor;
};

class Dog: public Mammal
{
public:
    Dog(int age, COLOR color):Mammal(age),itsColor(color)
    {
        cout << "Dog构造函数被调用...\n";
    }
    virtual ~Dog()
    {
        cout << "Dog析构函数被调用...\n";
    }
    virtual void Speak() const { cout << "Whoof!...\n"; }
    virtual void Sleep() const { cout << "Dog snoring...\n"; }
    virtual void Eat() const { cout << "Dog eating...\n"; }
    virtual void Move() const { cout << "Dog running...\n"; }
    virtual void Reproduce() const
    {
        cout << "Dogs reproducing...\n";
    }
protected:
    COLOR itsColor;
};

int main(int argc, char **argv)
{
    Animal *pAnimal = 0;
    int choice;
    bool fQuit = false;

    while(fQuit == false)
    {
        cout << "(1)Dog (2)Horse (3)Fish (0)Quit: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                pAnimal = new Dog(5,Brown);
                break;
            case 2:
                pAnimal = new Horse(4,Black);
                break;
            case 3:
                pAnimal = new Fish(5);
                break;
            default:
                fQuit = true;
                break;
        }
        if(fQuit == false){
            pAnimal->Speak();
            pAnimal->Eat();
            pAnimal->Reproduce();
            pAnimal->Move();
            pAnimal->Sleep();
            delete pAnimal;
            cout << endl;
        }
    }
    return 0;
}

