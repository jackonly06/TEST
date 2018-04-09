/*************************************************************************
    > File Name: 7_04_05.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 9日 14:54:10
 ************************************************************************/

#ifndef _DJX_7_04_05_H_
#define _DJX_7_04_05_H_

#include <string>

class Person{
    std::string name;
    std::string address;

public:
    const std::string& getName() const { return name; }
    const std::string& getAddress() const { return address; }
};

#endif //_DJX_7_04_05_H_

