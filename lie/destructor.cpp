/*************************************************************************
    > File Name: destructor.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年11月12日 星期五 22时06分26秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class NoName
{
public:
    NoName():pstring(new string), i(0), d(0)
    {
        //打开文件
        //连接数据库
        //动态分配内存
        cout << "构造函数被调用." << endl;
    }
    ~NoName();

private:
    string *pstring;
    int i;
    double d;
};

NoName::~NoName()
{   //关闭文件
    //关闭数据库连接
    //回收动态分配的内存
    cout << "析构函数被调用.\n" << endl;
    delete pstring;
}

int main(int argc, char **argv)
{
    NoName a;
    NoName *p = new NoName;

    cout << "Hello\n" << endl;

    delete p;
    return 0;
}

