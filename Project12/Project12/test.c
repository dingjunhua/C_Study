#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print1(int arr[3][5],int row ,int col)//正常方式打印二维数组
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}
}

void print2(int(*p)[5], int row, int col)//数组指针
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", *((*p) + j));
		}
		printf("\n");
	}

}



int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);

	return 0;
}