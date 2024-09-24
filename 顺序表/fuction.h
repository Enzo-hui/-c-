#pragma once
#include"SeqList.h";

template<class T>
SeqList<T>::SeqList()
{
	length = 0;
}
template<class T>
SeqList<T>::SeqList(T a[], int n)
{
	if (n > Maxsize)throw"参数非法";
	for (int i = 0; i < n; i++)
		data[i] = a[i];
	length = n;
}
template<class T>
SeqList<T>::~SeqList()
{
	
};
template<class T>
int SeqList<T>::Length()
{
	return length;
}
template<class T>
bool Empty()
{
	if length == 0;
	{
		return true;
	}
	else if length > 0;
	{
		return false;
	}
}
template<class T>
T SeqList<T>::get(int i)
{
	if (i<1 || i>length)
	{
		cout << "查找位置非法" << endl;
	}
	else
	{
		return data[i - 1];
	}
}
template<class T>
void SeqList<T> ::PrintList()
{
	for (int i = 0; i < length; i++)
	{
		cout << i+1<<"，"<<data[i] << endl;
	}
}
template<class T>
int SeqList<T>::Locate(T X)
{
	for (int i = 0; i < length; i++)
	{
		if (data[i] == x)
			return i + 1;
		return 0;
	}
}
template<class T>
void SeqList<T>::Insert(int i, T x)
{
	if (length == Maxsize)
	{
		cout << "顺序表已满" << endl;
	}
	else if (i<1 || i>length)
	{
		cout<<"插入位置错误"
	}
	for (int j = length; j >= i; j--)
	{
		data[j]=data[j-1]
	}
	data[i - 1] = x;
	length++;
}
template<class T>
T SeqList<T>::Delete(int i)
{
	T x;
	if (length == 0)throw"表中无数据";
	if (i<1 || i>length)throw"删除位置错误";
	x = data[i - 1];
	for (int j = i; j < length; j++)
	{
		data[j-1]=data[j]
	}
	length--;
	return x;
}


