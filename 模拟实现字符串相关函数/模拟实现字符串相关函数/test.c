#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* scr)
{
	assert(dest != NULL);
	assert(scr != NULL);
	char* ret = dest;
	while (*dest++ = *scr++) 
	{
		;
	}
	return ret; 

}
int my_strlen(const char* str)
{
	assert(str != NULL);
	int i = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		;
	}
	return i;
}
int Numberof1(int m)//����һ�����ڴ��������1�ĸ���
{
	int count = 0;
	while (m)
	{
		m = m & (m - 1);//һ�ο�����ȥһ��1
		count++;
	}
	return count;
}
//int Numberof1(int m)//����һ�����ڴ��������1�ĸ���
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m & (1 << i))!= 0)//��λ��
//		{
//			count++;
//		}
//	}
//	return count;
//}




int main()
{
	//char arr1[20] = "xxxxxxxxx";
	//char arr2[] = "hello";
	//printf("%s \n", my_strcpy(arr1, arr2));
	//printf("%d\n", my_strlen("hello world"));
	//int m = 0;
	//int ret = 0;
	//scanf("%d", &m);
	//ret = Numberof1(m);
	//printf("%d", ret);
	int m = 0;
	int n = 0;
	int count = 0;
	scanf("%d %d" ,&m,&n);
	int ret = m^n;//�����������������в�ͬ��λ��
	count = Numberof1(ret);
	printf("%d", count);

}