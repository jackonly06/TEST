/*************************************************************************
    > File Name: 7_50.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Sat, 21 Apr, 2018 11:04:17 PM
 ************************************************************************/

#ifndef _DJX_7_50_H_
#define _DJX_7_50_H_

#include <string>
#include <iostream>

struct Person{
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);

public:
    Person() = default;
    Person(const std::string sname, const std::string saddr) :
         name(sname), address(saddr) {}
    explicit Person(std::istream &is) { read(is, *this); }

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
private:
    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif //_DJX_7_50_H_
