/*************************************************************************
    > File Name: reload_2.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月21日 星期日 21时04分59秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Dog
{

};

class Cat
{

};
class Sales_item
{
public:
    Sales_item(const string &book, const unsigned units, const double amount)
        :isbn(book),units_sold(units),revenue(amount){}
    Sales_item &operator +=(const Sales_item &);
    Sales_item &operator -=(const Sales_item &);
    friend ostream &operator<<(ostream &, const Sales_item &);


private:
    string isbn;
    unsigned units_sold;
    double revenue;
};

Sales_item operator+(const Sales_item &, const Sales_item &);
Sales_item operator-(const Sales_item &, const Sales_item &);

Sales_item &Sales_item::operator+=(const Sales_item &rhs)
{
    this->units_sold += rhs.units_sold;
    this->revenue += rhs.revenue;
    return *this;
}

Sales_item operator+(const Sales_item &lhs, const Sales_item &rhs)
{
    Sales_item ret(lhs);
    ret += rhs;
    return ret;
}

ostream &operator<<(ostream &out, const Sales_item &s)
{
    out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue;
    return out;
}

Sales_item &Sales_item::operator -= (const Sales_item &rhs)
{
    this->units_sold -= rhs.units_sold;
    this->revenue -= rhs.revenue;
    return *this;
}

Sales_item operator-(const Sales_item &lhs, const Sales_item &rhs)
{
    Sales_item ret(lhs); // 创建的ret对象用于返回
    ret -= rhs; //调用 -= 函数进行运算
    return ret;
}

int main(int argc, char **argv)
{
    Sales_item item1(string("0-1-0"), 10, 120.0);
    Sales_item item2(string("0-1-0"), 20, 200.0);
    Sales_item result = item1 + item2;

    cout << result << endl;

    Sales_item item3(string("0-1-0"), 5, 70.0);
    result += item3;
    cout << result << endl;

    result -= item2;
    cout << result << endl;

    result = item2 - item1;
    cout << result << endl;


    return 0;
}

