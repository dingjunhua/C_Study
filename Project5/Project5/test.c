#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <time.h>

//int main()
//{
	//n�Ľ׳�
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	ret *= i;
	//}
	//printf("%d", ret);
	// 
	// 
	// 1!+2!+...+10!
	//int n = 10;
	//int ret = 1;
	//int sum = 0;
	//	for (int i = 1; i <= n; i++)
	//	{
	//		ret *= i;
	//		sum += ret;
	//	}	
	//printf("%d", sum);
	// 
	//���ֲ���
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int n = 9;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;
	//while (left<=right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < n)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > n)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ��ˣ�ֵΪ:%d", arr[mid]);
	//		break;
	//	}
	//}
	//if (left>right)
	//{
	//	printf("���������У�");
	//}
	//char arr1[] = "Welcome To DeXin!!!";
	//char arr2[] = "###################";
	//int sz = strlen(arr1);
	//int left = 0;
	//int right = sz - 1;
	//while (left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	Sleep(1000);
	//	system("cls");
	//	printf("%s", arr2);

	//}
	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i < 3; i++)
	//{
	//	printf("���������룺");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	//	{
	//		printf("������ȷ��");
	//		break;
	//	}
	//	else
	//	{
	//		printf("����������������룡\n");
	//	}
	//	
	//}
	//if (i == 3)
	//{
	//	printf("����������Ĵ�������3�Σ������˳���");
	//}


void menu()
{
	printf("##########################\n");
	printf("######  1. play  #########\n");
	printf("######  0. exit  #########\n");
	printf("##########################\n");
}
void game()
{
	int random_num = rand() % 100 + 1;
	int ret = 0;
	while (1)
	{
		printf("���������֣�");
		scanf("%d", &ret);
		if (ret < random_num)
		{
			printf("��������̫С��\n");
		}
		else if (ret > random_num)
		{
			printf("��������̫��\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)(time(NULL)));
	int input = 0;
	do{	
		menu();
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			printf("�����������������룡\n");
			break;

		}
	} while (input);




	return 0;
}























