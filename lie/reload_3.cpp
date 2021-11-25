/*************************************************************************
    > File Name: reload_3.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月25日 星期四 21时29分23秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Person
{

};


class Sales_item
{
public:
    Sales_item(const string &book, unsigned units, double amount):
        isbn(book), units_sold(units), revenue(amount){}
    Sales_item():units_sold(0), revenue(0.0){}

    friend bool operator==(const Sales_item &, const Sales_item &);
    friend ostream &operator<<(ostream &, const Sales_item &);

public:
    double avg_price() const;
    bool same_isbn(const Sales_item &rhs) const
    { return isbn == rhs.isbn; }

private:
    string isbn;
    unsigned units_sold;
    double revenue;

};

inline bool operator==(const Sales_item &lhs, const Sales_item &rhs)
{
    return lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue &&
           lhs.same_isbn(rhs);
}

inline ostream &operator<<(ostream &out, const Sales_item &s)
{
    out << s.isbn << "\t" << s.units_sold << "\t" << s.revenue << "\t" << s.avg_price();

    return out;
}

inline bool operator!=(const Sales_item &lhs, const Sales_item &rhs)
{
    return !(lhs == rhs);
}


int main(int argc, char **argv)
{
    Sales_item a("0-1-1", 10, 120.00);
    Sales_item b("0-1-1", 10, 120.00);
    Sales_item c("0-1-2", 10, 120.00);

    if(a == b)
    {
        cout << "a.b一样" << endl;
    }

    if(a != c)
    {
        cout << "a.c不一样" << endl;
    }

    return 0;
}

