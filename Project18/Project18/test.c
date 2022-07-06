#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

void my_memcpy(void* dest, void* src, size_t num) //ģ��ʵ��memcpy
{
	assert(dest && src);
	int i = 0;
	for (i = 0; i < num; i++)
	{
		*((char*)dest + i) = *((char*)src + i);
	}
}

void my_memmove(void* dest, void* src, size_t num)//ģ��ʵ��memmove
{
	assert(dest && src);
	int i = 0;
	//��ǰ->��
	if (dest < src)
	{
		for (i = 0; i < num; i++)
		{
			*((char*)dest + i) = *((char*)src + i);
		}
	}
	else//�Ӻ�->ǰ
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	/*my_memcpy(arr2, arr1, 20);*/
	my_memmove(arr1 + 2, arr1, 20);




	return 0;
}