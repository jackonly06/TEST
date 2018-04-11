/*************************************************************************
    > File Name: 7_13.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月11日, 周三 23:18:41
 ************************************************************************/

#include "7_12.h"

int main(int argc, char** argv)
{
    Sales_data total(std::cin);
    if( !total.isbn().empty() ){
        std::istream& is = std::cin;
        while( is ){
            Sales_data trans(is);
            if( total.isbn() == trans.isbn() ){
                total.combine(trans);
            }else{
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
    }else{
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}

