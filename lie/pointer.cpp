/*************************************************************************
    > File Name: pointer.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月29日 星期一 22时11分47秒
 ************************************************************************/

#include "pointer.h"
#include "string.h"

using namespace std;

Pointer::Pointer():ptr(0) {}

Pointer::Pointer(String const &n)
{
   ptr = new String(n);
}

Pointer::~Pointer()
{
    delete ptr;
}

String Pointer::errorMessage("Uninirialized pointer");

String &Pointer::operator*()
{
    if(!ptr)
    {
        throw errorMessage; 
    }
    return *ptr;
}

String *Pointer::operator->() const
{
    if(!ptr)
    {
        throw errorMessage; 
    }
    return ptr;
}

