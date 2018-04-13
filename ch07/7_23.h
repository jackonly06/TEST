/*************************************************************************
    > File Name: 7_23.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 13 Apr, 2018 11:51:21 PM
 ************************************************************************/

#ifndef _DJX_7_23_H_
#define _DJX_7_23_H_

#include <string>

class Screen {
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht *wd, c) {}

    char get() const { return contents[r * width + c]; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif //_DJX_7_23_H_
