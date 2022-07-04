#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int Find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if(arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}



//int main()
//{
//	//杨氏矩阵
//	//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从
//	//上到下是递增的，请编写函数在矩阵中查找某个数字是否存在
//	//要求：时间复杂度小于O(N)
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	//int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//int x = 3;
//	//int y = 3;
//	//int k = 7;
//	//int ret = Find_num(arr, &x, &y, k);
//	//if (ret == 1)
//	//{
//	//	printf("找到了！\n");
//	//	printf("下标为：%d %d", x, y);
//	//}
//	//else
//	//{
//	//	printf("找不到！");
//	//}
//
//
//	
//}
void Left_rotate(char* str, int k)
{
	size_t sz = strlen(str);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = str[0];
		int j = 0;
		for (j = 0; j < sz-1; j++)
		{
			str[j] = str[j + 1];
		}
		str[sz - 1] = tmp;
	}
}
int Is_left_rotate(char* arr1, char* arr2)
{
	if (strlen(arr1) == strlen(arr2))
	{
		strncat(arr1, arr1, 6);
		if (strstr(arr1, arr2) != NULL)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

int main()
{
	//实现一个函数，可以左旋字符中的k个字符
	//如：ABCD左旋一个字符为BCDA
	//ABCD左旋两个字符为CDAB
	//char arr1[20] = "ABCDEF";
	//char arr2[] = "CDEFAB";
	//int k =1;
	///*Left_rotate(arr1, k);*/
	//int ret = Is_left_rotate(arr1, arr2);
	//if (ret == 1)
	//{
	//	printf("yes");
	//}
	//else
	//{
	//	printf("no");
	//}

	/*printf("%s ", arr);*/
	//写一个函数判断arr2是否由arr1左旋得到
	char arr[20] = "hello";
	strcat(arr, "bit");
	printf("%s ", arr);



	return 0;
}