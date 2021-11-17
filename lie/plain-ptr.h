/*************************************************************************
    > File Name: plain-ptr.h
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月15日 星期一 20时54分31秒
 ************************************************************************/

#ifndef _DJX_PLAIN-PTR_H_
#define _DJX_PLAIN-PTR_H_

class AHasPtr
{
public:
    AHasPtr(int *p, int i):ptr(p), val(i) {}

    int *get_ptr() const { return ptr;}
    int get_int() const {return val;}

    void set_ptr(int *p) { ptr = p; }
    void set_int(int i) { val = i; }

    int get_ptr_val() const { return *ptr; }
    void set_ptr_val(int val) const { *ptr = val; }


private:
    int val;
    int *ptr;
};

#endif //_DJX_PLAIN-PTR_H_
