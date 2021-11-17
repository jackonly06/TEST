/*************************************************************************
    > File Name: value-ptr.h
    > Authorlii: ---
    > Mail: ---
    > Created Time: 2021年11月15日 星期一 20时54分31秒
 ************************************************************************/

#ifndef _DJX_VALUE-PTR_H_
#define _DJX_VALUE-PTR_H_

class CHasPtr
{
public:
    CHasPtr(const int &p, int i):ptr(new int(p)), val(i) {}

    CHasPtr(const CHasPtr &orig)
        :ptr(new int(*orig.ptr)),val(orig.val){}
    CHasPtr& operator = (const CHasPtr&);

    ~CHasPtr() { delete ptr; }

    
    

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


CHasPtr& CHasPtr::operator = (const CHasPtr &rhs)
{
    *ptr = *rhs.ptr;
    val = rhs.val;

    return *this;
}


#endif //_DJX_VALUE-PTR_H_
