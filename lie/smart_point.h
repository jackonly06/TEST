/*************************************************************************
    > File Name: smart_point.h
    > Author: ---
    > Mail: ---
    > Created Time: Thu Jan 20 22:06:58 2022
 ************************************************************************/

#ifndef _DJX_SMART_POINT_H_
#define _DJX_SMART_POINT_H_

template<typename T>
class smart_pointer
{
private:
    T* m_pRawPointer;
public:
    smart_pointer(T* pData): m_pRawPointer(pData){}
};











#endif //_DJX_SMART_POINT_H_
