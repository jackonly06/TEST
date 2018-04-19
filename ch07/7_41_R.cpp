/*************************************************************************
    > File Name: 7_41_R.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 19 Apr, 2018 08:32:28 PM
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Sales_data{
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);
public:
    Sales_data(const string &book, unsigned num, double sellp, double salep) : bookNo(book), units_sold(num), sellingprice(sellp),saleprice(salep)
    {
        if(sellingprice){
            discount = saleprice / sellingprice;
        }
        cout << "The constructor can receive bookNo, units_sold, sellingprice, saleprice." << endl;
    }

    Sales_data() : Sales_data(" ", 0, 0, 0)
    {
        cout << "The constructor needs no information." << endl;
    }

    Sales_data(const string &book) : Sales_data(book, 0, 0, 0)
    {
        cout << "The constructor receives bookNo." << endl;
    }

    Sales_data(istream &is) : Sales_data()
    {
        read(is, *this);
        cout << "The cosntructor receives the information that user inputs." << endl;
    }

private:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0;
    double saleprice = 0;
    double discount = 0.0;
};

istream &read(istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

int main(int argc, char** argv)
{
    Sales_data first("12-1-1", 12, 33, 22);
    Sales_data second;
    Sales_data third("12-1-2");
    Sales_data last(cin);

    return 0;
}

