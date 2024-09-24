#pragma once
#include<iostream>

template<class T>
struct Node
{
	T data;
	Node<T>* next;
};

template<class T>
class LinkList
{
public:
	LinkList();
	LinkList(T a[], int n);
	~LinkList();
	int Length();
	T Get(int i);
	int Locate(T x);
	void Insert(int i, T x);
	T Delete(int i);
	int Empty();
	void PrintList();
private:
	Node<T>* first;
};