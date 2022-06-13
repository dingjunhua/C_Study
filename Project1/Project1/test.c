#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<assert.h>
#include<Windows.h>

#pragma warning(disable:4996)

#define SETBIT(x,n) (x|=(1<<(n-1)))
#define CLEBIT(x,n) (x&=(~(1<<(n-1))))
#define SUM(x) (x)+(x)
#define INIT_VAL(a,b) a=0;b=0

//void ShowBit(int x)
//{
//	int num = sizeof(x) * 8 - 1;
//	while (num>=0)
//	{
//		if (x & (1<<num))
//		{
//			printf("1 ");
//
//		}
//		else
//		{
//			printf("0 ");
//		}
//		num--;
//
//	}
//	printf("\n");
//
//}
//void ArrDeal(int* arr, int num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
//void Welcome()
//{
//	printf("#######################\n");
//	printf("#######################\n");
//	printf("#######################\n");
//}
//void GetGift()
//{
//	printf("ÍÀÁú±¦µºµã»÷¾ÍËÍ£¡");
//}
//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node_t;
//Node_t* AllocNode(int x)
//{
//	Node_t* node = (Node_t*)malloc(sizeof(Node_t));
//	if (NULL == node)
//	{
//		perror("malloc");
//		exit(1);
//	}
//	node->data = x;
//	node->next = NULL;
//	return node;
//}
//void InserNode(Node_t* head, int x)
//{
//	assert(head);
//	Node_t* node = AllocNode(x);
//	node->next = head->next;
//	head->next = node;
//}
//void Showlist(Node_t* head)
//{
//	assert(head);
//	Node_t* p = head;
//	while (p)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//void DeleteNode(Node_t* head)
//{
//	assert(head);
//	Node_t* p = head->next;
//	head->next = p->next;
//	free(p);
//	p = NULL;
//
//}
//int FindMax(int num,...)
//{
//	va_list arg;
//	va_start(arg, num);
//	int max = va_arg(arg, int);
//	for (int i = 0; i < num - 1; i++)
//	{
//		int curr = va_arg(arg, int);
//		if (max < curr)
//		{
//			max = curr;
//		}
//	}
//	va_end(arg);
//	return max;
//}


int my_strlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return 1 + my_strlen(str + 1);
}





main()
{
	int len = my_strlen("abcdef123");
	printf("mystrlen = %d\n", len);
}





