/*************************************************************************
    > File Name: dynamic_binding.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月19日 星期五 21时13分44秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Item_base
{
public:
    int x;
    Item_base(const string &book = "",
            double sales_price = 0.0):isbn(book),price(sales_price){}
    string book() const
    {
        return isbn;
    }

   virtual double net_price(size_t n) const
    {
        return n * price;
    }


private:
    string isbn;
protected:
    double price;
};

class Bulk_item: public Item_base
{
public:
    Bulk_item(const string &book="",
        double sales_price=0.0, size_t qty=0,
        double disc_rate=0.0):
        Item_base(book, sales_price),
        min_qty(qty),discount(disc_rate){}

    double net_price(size_t cnt) const
    {
        if(cnt >= min_qty)
        {
            return cnt * (1-discount) * price;
        }
        else
        {
            return cnt * price;
        }
    }

private:
    size_t min_qty;
    double discount;

};

void print_total(ostream &os, Item_base *item, size_t n)
{
    os << "ISBN" << item->book() << "\tnumber sold: " << n << "\ttotal price: " << item->net_price(n) << endl;
}

int main(int argc, char **argv)
{
    Item_base *a = new Item_base("0-1-7", 11.0);
    Bulk_item *b = new Bulk_item("0-1-8", 22.0, 2, 0.05);

    print_total(cout, a, 2);
    print_total(cout, b, 3);

    Item_base *books[5];
    books[0] = new Item_base("0-1-1", 10.0);
    books[1] = new Bulk_item("0-1-2", 20.0, 6, 0.05);
    books[2] = new Item_base("0-1-3", 30.0);
    books[3] = new Bulk_item("0-1-4", 40.0, 4, 0.15);
    books[4] = new Bulk_item("0-1-5", 50.0, 2, 0.18);

    int num[5];
    num[0] = 2;
    num[1] = 10;
    num[2] = 1;
    num[3] = 5;
    num[4] = 3;

    for(int i = 0; i < 5; i++)
    {
        print_total(cout, books[i], num[i]);
    }

    return 0;
}

