#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char* dest,const char* src)//模拟实现strcat
{
	char* ret = dest;
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++);
	return ret;
}

int my_strlen(const char* str)//模拟实现strlen
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
char* my_strcpy(char* dest,const char* src)//模拟实现strcpy
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int my_strcmp(char* str1, char* str2)//模拟实现strcmp
{
	while (str1 && str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}




int main()
{
	//char arr1[20] = "hello ";
	//char arr2[] = "world";
	//printf("%s ", my_strcat(arr1, arr2));
	//strtok函数用法
	/*char arr[] = { "dingjunhua@qq.com"};
	char tmp[20] ={0};
	strcpy(tmp, arr);
	char* ret = 0;
	for (ret = strtok(tmp, "@."); ret != NULL; ret = strtok(NULL, "@."))
	{
		printf("%s \n",ret);
	}*/
	//char arr1[] = "hello";
	//char arr2[] = "zble";
	//int ret = my_strcpy(arr1, arr2);
	//if (ret > 0)
	//{
	//	printf("arr1>arr2");
	//}
	//else if (ret < 0)
	//{
	//	printf("arr1 < arr2");
	//}
	//else
	//{
	//	printf("arr1 = arr2");
	//}

	return 0;
}