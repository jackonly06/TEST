/*************************************************************************
    > File Name: reload_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月17日 星期三 21时20分45秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;


class Sales_item
{
friend ostream &operator<<(ostream &out, const Sales_item &s);
friend istream &operator>>(istream &in, Sales_item &s);

public:
    Sales_item(string &book, unsigned units, double price):
        isbn(book), units_sold(units), revenue(price * units){}
    Sales_item():units_sold(0),revenue(0.0){}

private:
    string isbn;
    unsigned units_sold;
    double revenue;
};

ostream &operator<<(ostream &out, const Sales_item &s)
{
    out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue;
    return out;
}

istream &operator>>(istream &in, Sales_item &s)
{
    double price;
    in >> s.isbn >> s.units_sold >> price;
    if(in)
    {
        s.revenue = s.units_sold * price;
    }
    else
    {
        s = Sales_item();
    }

    return in;

}

int main(int argc, char **argv)
{
    string a = {"0-201-123-x"};
    Sales_item item(a, 2, 23.00);
    cout << item << endl;

    cin >> item;
    cout << item << endl;

    return 0;
}

