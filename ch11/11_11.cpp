/*************************************************************************
    > File Name: 11_11.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 24 Jun, 2018 10:46:32 PM
 ************************************************************************/

#include "7_26.h"
#include <set>

using namespace std;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main(int argc, char** argv)
{
    using compareType = bool(*) (const Sales_data& lhs, const Sales_data & rhs);
    multiset<Sales_data, compareType> bookstore(compareIsbn);

    return 0;
}

