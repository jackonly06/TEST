/*************************************************************************
    > File Name: seq_queue.h
    > Author: ---
    > Mail: ---
    > Created Time: 2021年12月15日 星期三 22时02分25秒
 ************************************************************************/

#ifndef _DJX_SEQ_QUEUE_H_
#define _DJX_SEQ_QUEUE_H_

using namespace std;

template<class T>
class Queue
{
public:
    Queue(int queueCapacity = 10);
    bool IsEmpty() const;
    T& Front() const;
    T& Rear() const;
    void Push(const T& item);
    void Pop();

private:
    T *queue;
    int front;
    int rear;
    int capacity;
};

template<class T>
Queue<T>::Queue(int queueCapacity): capacity(queueCapacity)
{
    if(capacity < 1) throw "Queue capacity must be > 0";
    queue = new T[capacity];
    front = rear = 0;
}

template<class T>
inline bool Queue<T>::IsEmpty() const
{
    return front == rear;
}

template<class T>
void Queue<T>::Push(const T &item)
{
//   if(rear == (capacity - 1))
//   {
//        rear = 0;
//   }else{
//        rear++;
//   }

    if((rear + 1) % capacity == front ) //队列满了
    {
        //加倍
        T* newQueue = new T[2*capacity];

        int start = (front + 1) % capacity;
        if(start < 2) //没有回转，no wrap
        {
            copy(queue+start, queue+start+capacity-1, newQueue);
        }
        else //wrap
        {
            copy(queue+start, queue+capacity, newQueue);
            copy(queue, queue+rear+1, newQueue+capacity-start);
        }

        front = 2 * capacity - 1;
        rear = capacity -2;
        capacity *= 2;
        delete[] queue;
        queue = newQueue;

    }


   rear = (rear + 1) % capacity;
   queue[rear] = item;

}

template<class T>
inline T& Queue<T>::Front() const
{
    if(IsEmpty())
    {
        throw "Queue is empty. No front element";
    }

    return queue[(front + 1) % capacity];
}

template<class T>
inline T& Queue<T>::Rear() const
{
    if(IsEmpty())
    {
        throw "Queue is empty. No rear element";
    }

    return queue[rear];
}

template<class T>
void Queue<T>::Pop()
{
    if(IsEmpty())
    {
        throw "Queue is empty. Cannot delete.";
    }
    front = (front + 1) % capacity;

    queue[front].~T();

}


#endif //_DJX_SEQ_QUEUE_H_
