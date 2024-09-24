#pragma once
#include<iostream>


const int Maxsize = 100;
template<class T>
class SeqList
{
public:
	SeqList();
	SeqList(T a[] , int n);
	~SeqList();
	int Length();
	T get(int i);
	int Locate(T x);
	void Insert(int i, T x);
	T Delete(int i);
	bool Empty();
	void PrintList();
private:
	T data[Maxsize];
	int length;

};

