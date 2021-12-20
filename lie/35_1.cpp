/*************************************************************************
    > File Name: :35_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月20日 星期一 21时07分06秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "Queue.h"

using namespace std;

int main(int argc, char **argv)
{
    cout << "测试链式对列: " << endl;
    Queue<int> myQ;

    myQ.enqueue(10);
    myQ.enqueue(20);
    myQ.enqueue(30);

    cout << myQ.getFront() << endl;
    myQ.dequeue();
    cout << myQ.getFront() << endl;
    cout << myQ.dequeue() << endl;
    cout << myQ.dequeue() << endl;

    for(int j = 0; j < 8; j++)
    {
        for(int i = 0; i < 8; i++)
        {
            myQ.enqueue(i); 
        }

        while(!myQ.isEmpty())
        {
            cout << myQ.dequeue() << endl; 
        }
    }



    return 0;
}

