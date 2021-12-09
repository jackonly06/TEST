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

void print_total_1(ostream &os, const Item_base item, size_t n)
{
    os << "ISBN: " << item.book() << "\tnumber sold: " << n << "\ttotal price:" << item.net_price(n) << endl;
}

void print_total_2(ostream &os, const Item_base *item, size_t n)
{
    os << "ISBN: " << item->book() << "\tnumber sold: " << n << "\ttotal price:" << item->net_price(n) << endl;
}

void print_total_3(ostream &os, const Item_base &item, size_t n)
{
    os << "ISBN: " << item.book() << "\tnumber sold: " << n << "\ttotal price:" << item.net_price(n) << endl;
}

int main(int argc, char **argv)
{
    Item_base item("0-1-2", 9.9);
    Bulk_item item2("0-1-2", 9.9, 10, 0.12);

    print_total_1(cout, item, 10);
    print_total_1(cout, item2, 10); //这是对象转换，对象转换有问题！

    print_total_2(cout, &item, 10);
    print_total_2(cout, &item2, 10); //这是指针转换，正确！实现多态

    print_total_3(cout, item, 10);
    print_total_3(cout, item2, 10); //这是引用转换，正确！实现多态

    item = item2; //自动转换，正确
//    item2 = item; //不能自动转换，错误

    Bulk_item *p = static_cast<Bulk_item *>(&item); //实在要用，需强制转换，一般都不用
    cout << p->net_price(10) << endl;

    return 0;
}

