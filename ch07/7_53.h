/*************************************************************************
    > File Name: 7_53.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sun, 22 Apr, 2018 11:38:40 PM
 ************************************************************************/

#ifndef _DJX_7_53_H_
#define _DJX_7_53_H_

class Debug{
public:
    constexpr Debug(bool b = true) : rt(b), io(b), other(b) {}
    constexpr Debug(bool r, bool i, bool o) : rt(r), io(i), other(0) {}
    constexpr bool any() { return rt || io || other; }

    void set_rt(bool b) { rt = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }

private:
    bool rt;
    bool io;
    bool other;
}

#endif //_DJX_7_53_H_
