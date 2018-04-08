/*************************************************************************
    > File Name: 6_54_55_56.cpp
    > Author: N.Jie
    > Mail: jackonly06@hotmail.com
    > Created Time: 2018年04月 8日 17:12:15
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;
inline int f(const int, const int);
typedef decltype(f) fp;

inline int NumAdd(const int n1, const int n2)
{
    return n1 + n2;
}

inline int NumSub(const int n1, const int n2)
{
    return n1 - n2;
}

inline int NumMul(const int n1, const int n2)
{
    return n1 * n2;
}

inline int NumDiv(const int n1, const int n2)
{
    return n1 / n2;
}

vector<fp*> v{NumAdd, NumSub, NumMul, NumDiv};

int main(int argc, char** argv)
{
    for( auto it = v.cbegin(); it != v.cend(); ++it ){
        cout << (*it) (2, 2) << endl;
    }

    return 0;
}

