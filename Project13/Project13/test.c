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
	//ret = Sum5(a);//��ӡa+aa+aaa+aaaa+aaaaa֮��
	//printf("%d ",ret);
	//��ʹ�������±��ӡ�����Ԫ��
	//int arr[] = { 1,2,3,5,6,7,8 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//Printarr(arr, sz);
	//��ӡ0~100000֮���������
	//int i = 0;
	//for (i = 0; i <= 100000; i++)
	//{
	//	//1.��i��λ��n
	//	int n = 1;
	//	int tmp = i;
	//	while (tmp / 10)
	//	{
	//		n++;
	//		tmp = tmp / 10;
	//	}
	//	//2.��i�ĸ�λ
	//	tmp = i;
	//	int sum = 0;
	//	while (tmp % 10)
	//	{
	//		sum += pow(tmp % 10, n);
	//		tmp = tmp / 10;
	//	}
	//	//3.�ж�
	//	if (sum == i)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//��ӡ����
	//int line = 0;
	//scanf("%d", &line);
	////��
	//int i = 0;
	//for (i = 0; i < line; i++)
	//{
	//	//1. �ո�
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
	////��
	//for (i = 0; i < line - 1; i++)
	//{
	//	//1.�ո�
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
	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��һ�����Ժȶ���ƿ��ˮ
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
		//�ж�˳���Ƿ�Ϊ����
		while ( left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		//�ж������Ƿ�Ϊż��
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
////����һ���������飬ʵ��һ������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�ż��λ�ں�벿��
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Move(arr, sz);
//	print(arr, sz);
//}


int main()
{
	//��ӡ���������
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
	//���ĸ����֣�����������˵���滰��һ����˵�ٻ�
	//A˵��������
	//B˵����C
	//C˵����D
	//D˵��C�ں�˵
		char killer = 0;
		for (killer = 'A'; killer <= 'D'; killer++)
		{
			if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			{
				printf("%c ", killer);
			}
		}


}

