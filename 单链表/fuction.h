#pragma once
#include"LinkList.h"

template<class T>
LinkList<T>::LinkList()
{
	this->first = new Node<T>;
	first->next = nullptr;
}
template<class T>
int LinkList<T>::Empty()
{
	if (first->next == nullptr)
	{
		return 1;
	}
	else return 0;
}
template<class T>
void LinkList<T>::PrintList()
{
	Node<T>* p = first->next;
	while (p != nullptr)
	{
		cout << p->data << endl;
		p = p->next + ;
	}
	cout << endl;
}
template<class T>
int LinkList<T>::Length()
{
	Node<T>* p = first->next;
	int count = 0;
	while (p != nullptr)
	{
		p = p->next;
		count++;
	}
}
template<class T>
T LinkList<T>::Get(int i)
{
	Node<T>* p = first->next;
	int num = 1;
	while (p != nullptr && num<i)
	{
		p = p->next;
		num++;
	}
	if (p == nullptr)throw"≤È’“Œª÷√¥ÌŒÛ";
	else return p->data;
}
template<class T>
int LinkList<T>::Locate(T x)
{
	Node<T>* p = first->next;
	int num = 1;
	while (p != nullptr)
	{
		if (p->data = x)
		{
			return num;
			break;
		}
		p = p->next;
		num++;
	}
	return 0;
}
template<class T>
void LinkList<T>::Insert(int i, T x)
{
	Node<T>* p = first, * s = nullptr;
	int count = 0;
	while (p != nullptr && count < i - 1 )
	{
		p = p->next;
		count++;
	}
	if (p == nullptr)throw"≤Â»ÎŒª÷√¥ÌŒÛ";
	else
	{
		s = new Node<T>;
		s->data = x;
		s->next = p->next;
		p->next = s;
	}
}



//Õ∑≤Â∑®
//template<class T>
//LinkList<T>::LinkList(T a[], int n)
//{
//	first = new Node<T>;
//	first->next = nullptr;
//	for (int i = 0; i < n; i++)
//	{
//		Node<T>* s = nullptr;
//		s = new Node<T>;
//		s->data = a[i];
//		s->next = first->next;
//		first->next = s;
//	}
//}

//Œ≤≤Â∑®
template<class T>
LinkList<T>::LinkList(T a[], int n)
{
	first = new Node<T>;
	Node<T>* r = first, * s = nullptr;
	for (int i = 0; i < n; i++)
	{
		s = new Node<T>;
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = nullptr;
}
template<class T>
T LinkList<T>::Delete(int i)
{
	T x;
	Node<T>* p = first, * q = nullptr;
	int count = 0;
	while (p != nullptr && count < i - 1)
	{
		p = p->next;
		count++;
	}
	if (p == nullptr || p->next == nullptr)throw"…æ≥˝Œª÷√¥ÌŒÛ";
	else
	{
		q = p->next; x = q->data;
		p->next = q->next;
		delete q;
		return x;
	}
}
template<class T>
LinkList<T>::~LinkList()
{
	Node<T>* p = first;
	while (first != nullptr)
	{
		first = first->next;
		delete p;
		p = first;
	}

}

