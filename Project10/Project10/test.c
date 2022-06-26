#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void revese(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

void Init(int* arr,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//revese(arr, sz);
	//print(arr, sz);
	//Init(arr,sz);
	//print(arr, sz);
	int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(arr + i));
	//}
	//printf("\n");
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	printf("%d \n", arr[2]);
	printf("%d \n", 2[arr]);





	return 0;
}