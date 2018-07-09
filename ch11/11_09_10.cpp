/*************************************************************************
    > File Name: 11_09_10.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Mon,  9 Jul, 2018 09:14:36 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include <algorithm>

int main(int argc, char** argv)
{
    std::map<std::string, std::list<std::size_t>> m;

    std::map<std::vector<int>::iterator, int> mv;
    std::map<std::list<int>::iterator, int> m1;

    std::vector<int> vi;
    mv.insert(std::pair<std::vector<int>::iterator, int>(vi.begin(),0));

    std::list<int> li;
    m1.insert(std::pair<std::list<int>::iterator, int>(li.begin(), 0));

    return 0;
}

