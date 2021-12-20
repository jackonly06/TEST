/*************************************************************************
    > File Name: 36_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月20日 星期一 22时02分10秒
 ************************************************************************/
/*函数模板*/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <sstream>

using namespace std;

template<typename T>
int compare(const T &v1, const T &v2)
{
    if(v1 < v2){
        return -1;
    }
    if(v1 > v2){
        return 1;
    }
    return 0;
}

template <class T>
T absVal(T val)
{
    return val > 0 ? val : -val;
}

template <typename T1, typename T2>
T1 &print(T1 &s, T2 val)
{
    s << val;
    return s;
}

template <class T>
const T& bigger(const T &v1, const T &v2)
{
    return v1 > v2 ? v1 : v2;
}

int main(int argc, char **argv)
{
    double dval = -0.88;
    float fval = -12.3;
    string oristr = "this is a test.";
    string desstr;
    ostringstream oss(desstr);
    ofstream outFile("result.dat");

    print(cout, -3) << endl;
    print(cout, dval) << endl;
    print(cout, fval) << endl;
    print(cout, oristr) << endl;

    print(outFile, -3) << endl;
    print(outFile, dval) << endl;
    print(outFile, fval) << endl;
    print(outFile, oristr) << endl;
    outFile.close();

    print(oss, -3) << endl;
    print(oss, dval) << endl;
    print(oss, fval) << endl;
    print(oss, oristr) << endl;
    cout << oss.str() << endl;


    cout << absVal(dval) << endl;
    cout << absVal(fval) << endl;


    double d1 = 1.23;
    double d2 = 9.56;
    cout << compare(d1,d2) << endl;

    string s1("hi");
    string s2("world");
    cout << compare(s1,s2) << endl;

    double a = 1.23;
    double b = 5.89;
    cout << bigger(a, b) << endl;
    cout << bigger(s1, s2) << endl;

    return 0;
}

