/*************************************************************************
    > File Name: reload_4.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月27日 星期六 09时19分29秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Date
{
private:
    int month, day, year;

public:
    Date(int m = 0, int d = 0, int y=0):month(m),day(d),year(y){}

    int operator==(Date &dt) const;
    int operator!=(Date &dt) const;
    int operator<(Date &dt) const;

};

int Date::operator==(Date &dt) const
{
    return (this->month == dt.month) && (this->day == dt.day) && (this->year == dt.year);
}

int Date::operator!=(Date &dt) const
{

    return  !(*this == dt);
}

int Date::operator<(Date &dt) const
{
    if (this->year == dt.year)
    {
        if(this->month == dt.month)
        {
            return this->day < dt.day;
        }
        return this->month < dt.month;
    }
    return this->year < dt.year;
}


int main(int argc, char **argv)
{
    Date d1(2,14,2005);
    Date d2(6,19,2005);
    Date d3(2,14,2005);

    if(d1 < d2)
    {
        cout << "d1 小于 d2" << endl;
    }

    if(d1 == d3)
    {
        cout << "d1 等于 d3" << endl;
    }

   if(d2 != d3)
    {
        cout << "d2 不等于 d3" << endl;
    }

    return 0;
}

