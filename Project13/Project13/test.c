#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int Sum5(int a)
{
	int i = 0;
	int sum = 0;
	int j = a;
	for (i = 0; i < 5; i++)
	{
		sum += a;
		a = a * 10 + j;
	}
	return sum;
}
Printarr(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
//int main()
//{
	//int a = 0;
	//int ret = 0;
	//scanf("%d", &a);
	//ret = Sum5(a);//打印a+aa+aaa+aaaa+aaaaa之和
	//printf("%d ",ret);
	//不使用数组下标打印数组各元素
	//int arr[] = { 1,2,3,5,6,7,8 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//Printarr(arr, sz);
	//打印0~100000之间的自幂数
	//int i = 0;
	//for (i = 0; i <= 100000; i++)
	//{
	//	//1.求i的位数n
	//	int n = 1;
	//	int tmp = i;
	//	while (tmp / 10)
	//	{
	//		n++;
	//		tmp = tmp / 10;
	//	}
	//	//2.求i的各位
	//	tmp = i;
	//	int sum = 0;
	//	while (tmp % 10)
	//	{
	//		sum += pow(tmp % 10, n);
	//		tmp = tmp / 10;
	//	}
	//	//3.判断
	//	if (sum == i)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//打印星星
	//int line = 0;
	//scanf("%d", &line);
	////上
	//int i = 0;
	//for (i = 0; i < line; i++)
	//{
	//	//1. 空格
	//	int j = 0;
	//	for (j = 0; j < line-1-i; j++)
	//	{
	//		printf(" ");
	//	}
	//	//2. *
	//	for (j = 0; j < 2 * i + 1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	////下
	//for (i = 0; i < line - 1; i++)
	//{
	//	//1.空格
	//	int j = 0;
	//	for (j = 0; j <=i ; j++)
	//	{
	//		printf(" ");
	//	}
	//	// 2.*
	//	for (j = 0; j <2*(line-1-i)-1; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");

	//}
	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，一共可以喝多少瓶汽水
	//int money = 0;
	//scanf("%d", &money);       //way1
	//int total = money;
	//int empty = money;
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	//int money = 0;
	//int total = 0;
	//scanf("%d", &money);       //way2
	//if(money>0)
	//	total = money * 2 - 1;
	//printf("%d", total);
//	return 0;
//}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void Move(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//判断顺序是否为奇数
		while ( left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		//判断逆序是否为偶数
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

//int main()
//{
////输入一个整数数组，实现一个函数
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，偶数位于后半部分
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Move(arr, sz);
//	print(arr, sz);
//}


int main()
{
	//打印杨辉三角形
	//1
	//1 1
	//1 2 1
	//1 3 3 1
	//1 4 6 4 1
	//1 5 10 10 5 1
	//int arr[10][10] = { 0 };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		if (j == 0)
	//		{
	//			arr[i][j] = 1;
	//		}
	//		if (i == j)
	//		{
	//			arr[i][j] = 1;
	//		}
	//		if (i >= 2 && j >= 1)
	//		{
	//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
	//		}
	//	}
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	for (j = 0; j <= i; j++)
	//	{
	//		printf("%d  ", arr[i][j]);
	//	}
	//	printf("\n");
	//}
	//有四个凶手，其中三个人说了真话，一个人说假话
	//A说：不是我
	//B说：是C
	//C说：是D
	//D说：C在胡说
		char killer = 0;
		for (killer = 'A'; killer <= 'D'; killer++)
		{
			if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			{
				printf("%c ", killer);
			}
		}


}

