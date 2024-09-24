#include"CirQueue.hpp"
#include<iostream>

using namespace std;





int main()
{
	CirQueue<int>Q{};
	Q.EnQueue(5);
	cout << Q.GetHead() << endl;
}