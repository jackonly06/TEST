/*************************************************************************
    > File Name: base_class.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月19日 星期五 21时13分44秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Animal
{

};

class Dog:public Animal
{

};

class Cat:public Animal
{

};

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

    void test()
    {
        cout << x << endl;
        cout << price << endl;
//        cout << isbn << endl;  //不可使用
    }

    void test2(const Bulk_item &d, const Item_base &b)
    {
        cout << d.x << endl;
        cout << d.price << endl;
        cout << b.x << endl;
//        cout << b.price << endl; //不可使用
    }

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

int main(int argc, char **argv)
{
    Animal a;
    Dog d;
    Cat c;

    Item_base item("0-1-2", 9.9);
    cout << item.x << endl;
    cout << item.book() << "," << item.net_price(10) << endl;
//    cout << item.isbn << endl; // 私有的，不可使用
//    cout << item.price << endl; // 受保护的，用于继承，不可使用

    Bulk_item item2("0-1-2", 9.9, 10, 0.12);
    cout << item2.book() << "," << item2.net_price(10) << endl;
    cout << item2.x << endl;
//    cout << item2.price << endl;  //不可使用
//    cout << item2.isbn << endl; //不可使用
//    cout << item2.min_qty << endl; //不可使用
    item2.test();
    item2.test2(item2, item);

    return 0;
}

