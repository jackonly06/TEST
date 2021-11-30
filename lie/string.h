/*************************************************************************
    > File Name: string.h
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月29日 星期一 21时52分50秒
 ************************************************************************/

#ifndef _DJX_STRING_H_
#define _DJX_STRING_H_

class String
{
public:
    String(char const *chars ="");
    String(String const &str);
    ~String();

    void display() const;

private:
    char *ptrChars;
};


#endif //_DJX_STRING_H_
