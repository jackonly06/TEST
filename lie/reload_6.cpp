/*************************************************************************
    > File Name: reload_6.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月27日 星期六 10时12分39秒
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

    char &operator[](size_t index)  throw(String);
    char operator[](size_t index) const throw(String);

    void print();

private:
    char *ptrChars;
    static String errorMessage;
};

void String::print()
{
    cout << ptrChars << endl;
}

String String::errorMessage("Subscript out of range");

char &String::operator[](size_t index) throw(String)
{
    if(index >= strlen(ptrChars))
    {
        throw errorMessage;
    }
    cout << "non-const" << endl;
    return ptrChars[index];
}


char String::operator[](size_t index) const throw(String)
{
    if(index >= strlen(ptrChars))
    {
        throw errorMessage;
    }
    cout << "const" << endl;
    return ptrChars[index];
}

String::String(char const *chars)
{
    chars = chars ? chars : "";
    ptrChars = new char[strlen(chars)+1];
    strcpy(ptrChars, chars);
}


int main(int argc, char **argv)
{
    String s("Hello");
    s.print();

    cout << s[0] << endl;

    s[0] = 'A';
    s.print();

    String const s2("dog");
    cout << s2[2] << endl;

    return 0;
}

