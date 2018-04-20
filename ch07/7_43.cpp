/*************************************************************************
    > File Name: 7_43.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri, 20 Apr, 2018 11:35:48 PM
 ************************************************************************/

#include <vector>

using namespace std;

class NoDefault{
public:
    NoDefault(int i) {}
};

class C{
public:
    C() : def(0) {}
private:
    NoDefault def;
};

int main(int argc, char** argv)
{
    C c;

    vector<C> vec(10);
    return 0;
}

