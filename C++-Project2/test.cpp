#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

struct SLNode
{
public:

	friend void Print(SLNode& x);
	SLNode()
		:_a(nullptr)
	{
		_count++;
	}
	static void Print()
	{
		cout << _count << endl;
	}
private:
	int* _a;
	static int _count;
};
int SLNode::_count = 0;

void Print(SLNode& x)
{
	cout << x._count << endl;
}
int main()
{
	SLNode s1;
	SLNode s2;
	SLNode::Print();
	Print(s2);
	return 0;
}