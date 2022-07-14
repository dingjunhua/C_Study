#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
//模拟实现atoi
//需考虑以下几种情况
//1.输入的是NULL
//2.输入的是""
//3.输入空格等符号
//4.容量溢出问题

//写一个宏，可以将一个整数的奇数位与偶数位交换
#define SUM(x) (((x&0xaaaaaaaa)>>1)+((x&0x55555555)<<1))
//用宏来实现，offsetof
#define OFFSETOF(struct_name,mem_name) (int)&(((struct_name*)0)->mem_name)
enum state
{
	INVALID,
	VALID
};

int state = INVALID;


int my_atoi(char* s)
{
	int flag = 1;
	long long n = 0;
	if (s == NULL)
	{
		return 0;
	}
	if (s == '\0')
	{
		return 0;
	}
	while (isspace(*s))
	{
		s++;
	}
	if (*s == '+')
	{
		flag = 1;
		s++;
	}
	if (*s == '-')
	{
		flag = -1;
		s++;
	}
	while (isdigit(*s))
	{
		n = n * 10 + flag * ( * s - '0')  ;
		if (n > INT_MAX || n < INT_MIN)
		{
			return 0;
		}
		s++;
	}
	if (*s == '\0')
	{
		state = VALID;
		return (int)n;
		
	}
	else
	{
		return 0;
	}

}
struct A
{
	int a;
	char b;
	int c;
};

//int main()
//{
//	int ret = 0;
//	char* p = "-1233";
//	ret = my_atoi(p);
//	if (state == VALID)
//	{
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("输入值无效！\n");
//	}
//
//
//
//
//
//
//}
//一个数组中只有两个数字是出现一次，其他所有数组都出现了两次
//编写一个函数找出这两个只出现一次的数字
//1 2 3 4 5 6 1 2 3 4 

void Find(int* arr, int sz,int* x,int* y)
{
	int k = 0;
	int z = 0;
	int num1 = 0;
	int num2 = 0;
	//1.分组
	//1 3 1 3 5
	//2 4 2 4 6
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		k ^= arr[i];
	}
	//1^2^3^4^5^6^1^2^3^4 = 5^6 = 3 !=0;
	//3 = 011
	for (i = 0; i<32; i++)
	{
		if (((k >> i) & 1) == 1)
		{
			z = i;
			break;
		}
		
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> z) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	*x = num1;
	*y = num2;

}	




int main()
{
	//int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int x = 0;
	//int y = 0;
	//Find(arr, sz, &x, &y);
	//printf("%d %d \n", x, y);

	printf("%d\n",OFFSETOF(struct A,a));
	printf("%d\n", OFFSETOF(struct A,b));

	return 0;
}