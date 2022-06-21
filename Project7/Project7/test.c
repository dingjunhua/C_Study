#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

void Swap(int *pa,int *pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int is_year(int n)
{
	if (((n % 4 == 0) && (n % 100) != 0) || (n % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int binary_search(int* arr, int key, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		
		}
	}

}
int main()
{
	//二分查找
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 != ret)
	{
		printf("下标为：%d", ret);
	}
	else
	{
		printf("找不到！");
	}


	////用函数来打印1000-2000之间的闰年
	//int i = 0;
	//for (i = 1000; i <= 2000; i++)
	//{
	//	if (is_year(i) == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}





	//用函数来打印100-200之间的素数
	//int i = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	if (is_prime(i) == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}


	//int a = 10;
	//int b = 20;
	////char arr1[20] = { 0 };
	////char arr2[] = "hello world!";
	////strcpy(arr1, arr2);
	////printf("%s", arr1);
	//
	////char arr1[] = "hello world";
	////memset(arr1, 'x', 5);
	////printf("%s", arr1);

	//printf("交换前：a=%d b=%d\n", a, b);
	//Swap(&a,&b);
	//printf("交换后：a=%d b=%d\n", a, b);


}