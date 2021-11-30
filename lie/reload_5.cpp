/*************************************************************************
    > File Name: reload_5.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月27日 星期六 09时45分07秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>

using namespace std;

class String
{
public:
    String(char const *chars = "");

    String &operator=(String const &);
    String &operator=(char const *);//字符串赋值
    String &operator=(char);//字符赋值

    void print();

private:
    char *ptrChars;
};

void String::print()
{
    cout << ptrChars << endl;
}

String::String(char const *chars)
{
    chars = chars ? chars : "";
    ptrChars = new char[strlen(chars)+1];
    strcpy(ptrChars, chars);
}

String &String::operator=(String const &str)
{
    if(strlen(ptrChars) != strlen(str.ptrChars))
    {
        char *ptrHold = new char[strlen(str.ptrChars)+1];
        delete[] ptrChars;
        ptrChars = ptrHold;
    }
    strcpy(ptrChars, str.ptrChars);

    return *this;
}

int main(int argc, char **argv)
{
    String s("hello");
    String s2("Dog");

    s.print();

    s = s2; // 赋值操作

    s.print();

    return 0;
}

