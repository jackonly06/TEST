/*************************************************************************
    > File Name: 7_09.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月10日  8:45:52
 ************************************************************************/

#ifndef _DJX_7_09_H_
#define _DJX_7_09_H_

#include <string>
#include <iostream>

struct Person{
    const std::string& getName() const { return name; }
    const std::string& getAddress() const { return address; }

    std::string name;
    std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
    is >> person.name >> person.address;
    if( !is ){i
        person = Person();
    }
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif //_DJX_7_09_H_
