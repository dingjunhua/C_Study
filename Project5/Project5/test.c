#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <time.h>

//int main()
//{
	//n的阶乘
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
	//二分查找
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
	//		printf("找到了，值为:%d", arr[mid]);
	//		break;
	//	}
	//}
	//if (left>right)
	//{
	//	printf("不在数列中！");
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
	//	printf("请输入密码：");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	//	{
	//		printf("密码正确！");
	//		break;
	//	}
	//	else
	//	{
	//		printf("密码错误，请重新输入！\n");
	//	}
	//	
	//}
	//if (i == 3)
	//{
	//	printf("你输入密码的次数超过3次，程序退出！");
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
		printf("请输入数字：");
		scanf("%d", &ret);
		if (ret < random_num)
		{
			printf("输入数字太小！\n");
		}
		else if (ret > random_num)
		{
			printf("输入数字太大！\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
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
		printf("请输入选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("输入有误，请重新输入！\n");
			break;

		}
	} while (input);




	return 0;
}























