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
//	//���Ͼ���
//	//��һ�����־��󣬾����ÿ�д������ǵ����ģ������
//	//�ϵ����ǵ����ģ����д�����ھ����в���ĳ�������Ƿ����
//	//Ҫ��ʱ�临�Ӷ�С��O(N)
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
//	//	printf("�ҵ��ˣ�\n");
//	//	printf("�±�Ϊ��%d %d", x, y);
//	//}
//	//else
//	//{
//	//	printf("�Ҳ�����");
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
	//ʵ��һ�����������������ַ��е�k���ַ�
	//�磺ABCD����һ���ַ�ΪBCDA
	//ABCD���������ַ�ΪCDAB
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
	//дһ�������ж�arr2�Ƿ���arr1�����õ�
	char arr[20] = "hello";
	strcat(arr, "bit");
	printf("%s ", arr);



	return 0;
}