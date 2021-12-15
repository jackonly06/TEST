/*************************************************************************
    > File Name: 33_1.cpp
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月15日 星期三 20时53分01秒
 ************************************************************************/
/* 模板与范型编程 */

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include <set>
#include <iomanip>

using namespace std;

template<class T>
class Queue
{
    struct Node
    {
        T a;
        Node *next;
    };
public:
    Queue();
    void push(T b);
    void pop();
    int getlength();
    virtual void print();

private:
    Node *head;
    Node *rear;
};

template<class T>
void Queue<T>::push(T b)
{
    Node *p1 = new Node;
    p1->a = b;
    p1->next = NULL;
    rear->next = p1;
    rear = p1;
    head->a++;
    cout << setw(2) << b << setw(2) << "进入队列" << endl;
}

template<class T>
void Queue<T>::pop()
{
    Node *p;
    p = head->next;
    cout << "  " << setw(2) << p->a << setw(2) << "出队" << endl;
    head->next = p->next;
    delete p;
    head->a--;
}

template<class T>
int Queue<T>::getlength()
{
    return head->a;
}

template<class T>
void Queue<T>::print()
{
    Node *p;
    p = head->next;
    cout << "队列中的元素是:" << endl;
    while(p)
    {
        cout << p->a << "->";
        p = p->next;
    }
    cout << "NULL" << endl;
}

template<class T>
Queue<T>::Queue()
{
    rear = head = new Node();
}


int main(int argc, char **argv)
{
    Queue<int> q;
    Queue<double> q2;
    Queue<string> q3;
    q.push(10);
    q.push(20);
    q.push(30);
    q.print();


    vector<int> v1;
    vector<double> v2;
    vector<string> v3;
    v1.push_back(10);
    v1.push_back(20);
    v2.push_back(1.2);
    v2.push_back(9.8);
    v3.push_back("hello");
    v3.push_back("bill");

    list<int> a;
    list<string> b;
    a.push_back(100);
    a.push_back(200);
    b.push_back("dog");
    b.push_back("cat");

    return 0;
}

