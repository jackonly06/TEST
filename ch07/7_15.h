/*************************************************************************
    > File Name: 7_15.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Thu, 12 Apr, 2018 09:11:45 PM
 ************************************************************************/

#ifndef _DJX_7_15_H_
#define _DJX_7_15_H_

#include <string>
#include <iostream>

struct Person;
std::istream& read(std::istream&, Person&);

struct Person{
    Person() = default;
    Person(const std::string sname, const std::string saddr) :
        name(sname), address(saddr) {}
    Person(std::istream& is) { read(is, *this); }

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

    std::string name;
    std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif //_DJX_7_15_H_
