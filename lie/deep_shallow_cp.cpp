/*************************************************************************
    > File Name: deep_shallow_cp.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月14日 星期日 21时38分20秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>

using namespace std;

class CDemo
{
public:
    CDemo(int pa, char *cstr)
    {
        this->a = pa;
        this->str = new char[1024];
        strcpy(this->str,cstr);
    }
//不写，C++会自动帮写一个复制构造函数
    CDemo(CDemo &obj)
    {
        this->a = obj.a;
//        this->str = obj.str;//浅的复制
        this->str = new char[1024];//深复制
        if(str != 0)
        {
            strcpy(this->str,obj.str);
        }
    }

    ~CDemo()
    {
        delete str;
    }


public:
    int a;
    char *str;
};

int main(int argc, char **argv)
{
    CDemo A(10, (char *)"hello");

    CDemo B = A;// 浅的复制 -> 后来改为深复制
    cout << "A: " << A.a << "," << A.str << endl;
    cout << "B: " << B.a << "," << B.str << endl;

    B.a = 8;
    B.str[0] = 'k';
    cout << "修改后" << endl;
    cout << "A: " << A.a << "," << A.str << endl;
    cout << "B: " << B.a << "," << B.str << endl;
    return 0;
}

