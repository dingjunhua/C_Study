#include <iostream>
#include "queue.h"
#include "Stack.h"


//using namespace std;//命名空间展开
int main()
{
	djh::ST st;
	djh::StackInit(&st);
	djh::Queue qe;
	djh::QueueInit(&qe);
	std::cout << "hello world" << std::endl;
	return 0;
}