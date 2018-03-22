/*************************************************************************
    > File Name: 2_1.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年01月31日  8:47:29
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct Sale_data{
    string   bookNo;
    unsigned units_sold = 0;
    double   revenue = 0.0;
};

int main()
{
    Sale_data total;
    double totalPrice;

    if( cin >> total.bookNo >> total.units_sold >> totalPrice ){
        Sale_data trans;
        double    transPrice;

        total.revenue = total.units_sold * totalPrice;
        while( cin >> trans.bookNo >> trans.units_sold >> transPrice ){
            trans.revenue = trans.units_sold * transPrice;

            if( total.bookNo == trans.bookNo ){
                total.units_sold += trans.units_sold;
                total.revenue    += total.revenue;
            }else{
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if( total.units_sold != 0 ){
                    cout << total.revenue / total.units_sold << endl;
                }else{
                    cout << " No sales " << endl;
                }
                total.bookNo     = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue    = trans.revenue;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if( total.units_sold != 0 ){
            cout << total.revenue / total.units_sold << endl;
        }else{
              cout << " No sales " << endl;
        }
        return 0;
    }else{
        cerr << "Date must refer to same ISBN" << endl;
        return -1;
    }
}

