#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int is_num(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	//int num;
	//printf("请输入数字：");
	//scanf("%d", &num);
	//print(num);
	//char arr[] = "hello world";
	//int ret = my_strlen(arr);
	//printf("%d", ret);
	//int i = 0;
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9 || i / 10 == 9)
	//	{
	//		count++;
	//		
	//	}
	//}
	//printf("%d", count);
	//9*9乘法口诀
	//int i = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	int j = 0;
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%-2d ", i, j, i * j);
	//	}
	//	printf("\n");
	//}
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int ret = 0;
		ret = is_num(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}

}