/*************************************************************************
    > File Name: reload_8.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月30日 星期二 22时04分23秒
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
    String(String const &str);
    ~String();

    void display() const;

    String &operator++(); //前加加
    String const operator++(int); //后加加

private:
    char *ptrChars;
};

String &String::operator++()
{
    for(size_t i = 0; i < strlen(ptrChars); ++i)
    {
        ++ptrChars[i];
    }
    return *this;
}

String const String::operator++(int)
{
    String copy(*this);
    ++(*this);
    return copy;
}

void String::display() const
{
    cout << ptrChars << endl;
}

String::String(char const *chars)
{
    chars = chars ? chars : "";
    ptrChars = new char[strlen(chars)+1];
    strcpy(ptrChars, chars);
}

String::String(String const &str)
{
    ptrChars = new char[strlen(str.ptrChars)+1];
    strcpy(ptrChars, str.ptrChars);
}

String::~String()
{
    delete[] ptrChars;
}

int main(int argc, char **argv)
{
    String s("ABC");
    s.display();

    String str1("ABC");
    str1.display();

    String str2(++str1);
    str2.display();

    String str3(str1++);
    str3.display();
    str1.display();

    return 0;
}

