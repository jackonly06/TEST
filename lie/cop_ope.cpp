/*************************************************************************
    > File Name: cop_ope.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月12日 星期五 20时32分02秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

//当类里面有一个数据成员是指针时，需要复制构造函数和赋值操作符
//复制构造函数与赋值操作符通常是一起使用,要么不写，要么一起写,如果都不写，C++自己写

using namespace std;

class Sales_item
{
public:
    //构造函数
    Sales_item():units_sold(0),revenue(0.0)
    {
        cout << "默认构造函数被调用!" << endl;
    }
    Sales_item(const string &book):isbn(book),units_sold(0),revenue(0.0)
    {
        cout << "构造函数Sale_item(const string &book)被调用!" << endl;
    }

    //复制构造函数
    Sales_item(const Sales_item &orig)
        :isbn(orig.isbn),units_sold(orig.units_sold),revenue(orig.revenue)
    {
        cout << "复制构造函数被调用!" << endl;
    }
    //赋值操作符
    Sales_item &operator = (const Sales_item &rhs)
    {
        cout << "赋值操作符被调用!" << endl;
        isbn = rhs.isbn;
        units_sold = rhs.units_sold;
        revenue = rhs.revenue;
        return *this;
    }

private:
    string isbn;
    unsigned units_sold;
    double revenue;
};

Sales_item foo(Sales_item item)
{
    Sales_item temp;
    temp = item;
    return temp;
}

class NoName
{
public:
    NoName():pstring(new string),i(0),d(0){}

    NoName(const NoName &other)
        :pstring(new string(*(other.pstring))),i(other.i),d(other.d)
    {
        cout << "NoName Copy Constructor" << endl;
    }

    NoName &operator = (const NoName &rhs)
    {
        cout << "NoName 赋值操作符" << endl;
        pstring = new string;
        *pstring = *(rhs.pstring);

        i = rhs.i;
        d = rhs.d;

        return *this;
    }
private:
    string *pstring;
    int i;
    double d;
};

int main(int argc, char **argv)
{
    NoName x,y;
    NoName z(y);
    x = y;

    Sales_item a;
    Sales_item b("1-2-3-n");

    Sales_item c(b);
    a = b;
    Sales_item item = string("1-2-3-435");

    cout << endl << "试一下foo: " << endl;
    Sales_item ret;
    ret = foo(item);

    cout << endl << "试一下vetor: " << endl;
    vector<Sales_item> svec(5);

    cout << endl << "试一下数组 " << endl;
    Sales_item primer_eds[] = {
        string("0-201-16487-6"),
        string("0-201-16487-7"),
        string("0-201-16487-8"),
        Sales_item()
    };

    return 0;
}

