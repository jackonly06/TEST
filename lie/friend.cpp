/*************************************************************************
    > File Name: friend.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2021年11月06日 星期六 19时46分45秒
 ************************************************************************/

/*
    三种有元：
    1.普通函数（非成员函数）
    2.类
    3.类的成员函数
*/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Screen;

class Dog
{
public:
    int foo(Screen &screen);
    int koo(Screen &screen);
};

class Screen
{
public:
    typedef string::size_type index;

    Screen(int ht = 0, int wd = 0):contents(ht * wd,' '),cursor(0),height(ht),width(wd){}

    friend class Window_Mgr;
    friend int calcArea(Screen &);
//    friend class Dog;
    friend int Dog::foo(Screen &); //类里的成员函数单独设置为友元


    int area() const
    {
        return height * width;
    }

private:
    string contents;
    index cursor;
    int height, width;
};

//这个函数不是类的成员函数
int calcArea(Screen &screen)
{
    return screen.height * screen.width;
}

class Window_Mgr
{
public:
    void relocate(int r, int c, Screen &s)
    {
        s.height += r;
        s.width  += c;
    }
};

int Dog::foo(Screen &screen)
{
    return screen.height * screen.width;
}

int Dog::koo(Screen &screen)
{
    //return screen.height * screen.width; //不是友元不可调用私有成员
    return screen.area();
}


int main(int argc, char **argv)
{
    Screen a(60,100);

    cout << a.area() << endl;

    Window_Mgr wm;

    wm.relocate(20, 100, a);
    cout << calcArea(a) << endl;

    cout << "OK" << endl;

    return 0;
}

