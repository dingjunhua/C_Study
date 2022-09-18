#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
using namespace std;

int main()
{
	Stack<int> st1;
	st1.Push(1);
	st1.Push(2);
	st1.Push(3);
	st1.Push(4);
	st1.Push(5);

	while (!st1.Empty())
	{
		cout << st1.top() << " ";
		st1.Pop();
	}
	cout << endl;




}

