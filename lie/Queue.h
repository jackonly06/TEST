/*************************************************************************
    > File Name: Queue.h
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月20日 星期一 20时57分08秒
 ************************************************************************/

#ifndef _DJX_QUEUE_H_
#define _DJX_QUEUE_H_

template<class Object>
class Queue
{
public:
    Queue();
    ~Queue();

    bool isEmpty() const;
    const Object &getFront() const;
    void enqueue(const Object &x);
    Object dequeue();
    void makeEmpty();

private:
    struct ListNode
    {
        Object element;
        ListNode *next;

        ListNode(const Object &theElement, ListNode *n = 0)
            : element(theElement), next(n) {}
    };

    ListNode *front;
    ListNode *back;
};

template<class Object>
Queue<Object>::Queue()
{
    front = back = 0;
}

template<class Object>
Queue<Object>::~Queue()
{
    makeEmpty();
}

template<class Object>
void Queue<Object>::makeEmpty()
{
    while(!isEmpty())
    {
        dequeue();
    }
}

template<class Object>
bool Queue<Object>::isEmpty() const
{
    return front == 0;
}

template<class Object>
const Object &Queue<Object>::getFront() const
{
    if(isEmpty())
    {
        throw "Queue is empty.";
    }
    return front->element;
}

template<class Object>
void Queue<Object>::enqueue(const Object &x)
{
    if(isEmpty())
    {
        back = front = new ListNode(x);
    }
    else
    {
        back = back->next = new ListNode(x);
    }
}

template<class Object>
Object Queue<Object>::dequeue()
{
    Object frontItem = getFront();

    ListNode *old = front;
    front = front->next;
    delete old;

    return frontItem;
}








#endif //_DJX_QUEUE_H_
