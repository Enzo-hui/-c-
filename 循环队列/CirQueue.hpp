#pragma once
#include<iostream>

const int QueueSize = 100;
template<class T>
class CirQueue
{
public:
	CirQueue();
	~CirQueue();
	void EnQueue(T x);
	T DeQueue();
	T GetHead();
	int Empty();
private:
	T data[QueueSize];
	int front, rear;

};

template<class T>
CirQueue<T>::CirQueue()
{
	front = rear = QueueSize;
}
template<class T>
CirQueue<T>::~CirQueue()
{

}
template<class T>
void CirQueue<T>::EnQueue(T x)
{
	if ((rear + 1) % QueueSize == front)throw"队列已满";
	rear = (rear + 1) % QueueSize;
	data[rear] = x;
}
template<class T>
T CirQueue<T>::DeQueue()
{
	if (rear == front)throw"队列为空";
	front = (front + 1) % QueueSize;
	return data[front];
}
template<class T>
T CirQueue<T>::GetHead()
{
	if (Empty())throw"队列为空";
	return data[(front + 1) % QueueSize];
}
template<class T>
int CirQueue<T>::Empty()
{
	if (rear == front)
	{
		return 1;
	}
	else return 0;
}