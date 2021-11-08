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

class Screen
{
public:
    typedef string::size_type index;

    Screen(int ht = 0, int wd = 0):contents(ht * wd,' '),cursor(0),height(ht),width(wd){}

    int area() const
    {
        return height * width;
    }
private:
    string contents;
    index cursor;
    int height, width;
};

int main(int argc, char **argv)
{
    Screen a;

    cout << "OK" << endl;
    return 0;
}

