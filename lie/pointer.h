/*************************************************************************
    > File Name: pointer.h
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月29日 星期一 22时08分50秒
 ************************************************************************/

#ifndef _DJX_POINTER_H_
#define _DJX_POINTER_H_

class String;

class Pointer
{
public:
    Pointer();
    Pointer(String const &n);
    ~Pointer();

    String &operator*();
    String *operator->() const;


private:
    String *ptr;
    static String errorMessage;
};



#endif //_DJX_POINTER_H_

