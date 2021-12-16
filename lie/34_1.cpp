/*************************************************************************
    > File Name: 34_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月15日 星期三 21时58分32秒
 ************************************************************************/
/* 顺序队列 */

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "seq_queue.h"

using namespace std;

int main(int argc, char **argv)
{
    cout << "test sequence queue" << endl;

    Queue<char> q(5);
    q.Push('A');
    q.Push('B');
    q.Push('C');
    cout << q.Front() << ", " << q.Rear() << endl;
    q.Push('D');
    q.Push('E');
    cout << q.Front() << ", " << q.Rear() << endl;
//    q.Pop();
//    cout << q.Front() << ", " << q.Rear() << endl;
    q.Push('F');
    cout << q.Front() << ", " << q.Rear() << endl;
    q.Push('G');
    cout << q.Front() << ", " << q.Rear() << endl;

    return 0;
}

