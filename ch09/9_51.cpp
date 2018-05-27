/*************************************************************************
    > File Name: 9_51.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 27 May, 2018 11:02:29 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class my_Date{
public:
    my_Date(const string &s);
    unsigned year;
    unsigned month;
    unsigned day;
};

int main(int argc, char** argv)
{
    my_Date d("91/24/2048");

    cout << d.day << " " << d.month << " " << d.year << " ";

    return 0;
}

my_Date::my_Date(const string &s)
{
    unsigned format = 0;

    /* 1/1/1980 */
    if( s.find_first_of("/") != string::npos ){
        format = 0x10;
    }

    if( s.find_first_of(",") >= 4 && s.find_first_of(",") 
        != string::npos ){
        format = 0x01;
    }

    switch( format ){
        case 0x10:
            day = stoi(s.substr(0, s.find_first_of("/")));
            month = stoi(s.substr(s.find_first_of("/") + 1,
                         s.find_last_of("/") - s.find_first_of("/")
                         - 1));
            year = stoi(s.substr(s.find_last_of("/") + 1, 4));
            break;

        case 0x01:
            day = stoi(s.substr(s.find_first_of("1234567890"),
                       s.find_first_of(",") - 
                       s.find_first_of("1234567890")));

            if( s.find("Jan") < s.size() ){
                month = 1;
            }
            if( s.find("Feb") < s.size() ){
                month = 2;
            }
            if( s.find("Mar") < s.size() ){
                month = 3;
            }
            if( s.find("Apr") < s.size() ){
                month = 4;
            }
            if( s.find("May") < s.size() ){
                month = 5;
            }
            if( s.find("Jun") < s.size() ){
                month = 6;
            }
            if( s.find("Jul") < s.size() ){
                month = 7;
            }
            if( s.find("Aug") < s.size() ){
                month = 8;
            }
            if( s.find("Sep") < s.size() ){
                month = 9;
            }
            if( s.find("Oct") < s.size() ){
                month = 10;
            }
            if( s.find("Nov") < s.size() ){
                month = 11;
            }
            if( s.find("Dec") < s.size() ){
                month = 12;
            }

            year = stoi(s.substr(s.find_last_of(" ") + 1, 4));

            break;
    }
}

