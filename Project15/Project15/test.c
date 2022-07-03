#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void Swap(char* buf1, char* buf2, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
int bb_sort(const void* e1, const void* e2)
{
	return (*((int*)e1) - *((int*)e2));
}
int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu(*))e1)->age - ((struct Stu(*))e2)->age;
}
int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void my_qsort(void* pf, int num, int sz, int (*compare)(const void* e1, const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		//每趟的次数
		for (j = 0; j < num - 1 - i; j++)
		{
			int ret = compare((char*)pf + sz * j,(char*)pf+sz*(j+1));
			if (ret > 0)
			{
				Swap((char*)pf + sz * j, (char*)pf + sz * (j + 1),sz);		
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct Stu s[3] = { {"lisi",35} ,{"zhangsan",20} ,{"wangwu",30}};
	int szs = sizeof(s) / sizeof(s[0]);
	/*bubble_sort(arr, sz);*/
	/*qsort(arr, sz, sizeof(arr[0]), bb_sort);*/
	/*qsort(s, szs, sizeof(s[0]), sort_by_age);*/
	/*qsort(s, szs, sizeof(s[0]), sort_by_name);*/
	/*my_qsort(arr, sz, sizeof(arr[0]), bb_sort);*/
	/*my_qsort(s, szs, sizeof(s[0]), sort_by_age);*/
	my_qsort(s, szs, sizeof(s[0]), sort_by_name);
	print(arr, sz);
}