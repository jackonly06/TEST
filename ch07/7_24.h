/*************************************************************************
    > File Name: 7_24.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat, 14 Apr, 2018 11:24:17 PM
 ************************************************************************/

#ifndef _DJX_7_24_H_
#define _DJX_7_24_H_

#include <string>

class Screen{
public:
    using pos = std::string::size_type;

    Screen() = defaul; //1
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}; //2
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {};//3

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r * width + c]; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif //_DJX_7_24_H_
