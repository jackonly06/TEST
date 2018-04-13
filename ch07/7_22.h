/*************************************************************************
    > File Name: 7_22.h
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 13 Apr, 2018 11:34:22 PM
 ************************************************************************/

#ifndef _DJX_7_22_H_
#define _DJX_7_22_H_

#include <string>
#include <iostream>

struct Person{
    friend std::istream& read(std::istream& is, Person& person);
    friend std::ostream& print(std::ostream& os, const Person& person);

public:
    Person() = default;
    Person(const std::string sname, const std::string saddr):
        name(sname), address(saddr) {}
    Person(std::istream& is) { read(is, *this); }

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

private:
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

#endif //_DJX_7_22_H_

