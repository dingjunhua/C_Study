#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>



int main()
{
	//将三个整数数按从大到小输出
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a<b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a<c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b <c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d", a, b, c);
}

	//写一个代码打印1-100之间所有3的倍数的数字
	//int a = 0;
	//for (a = 1; a <= 100; a++)
	//{
	//	if (a % 3 == 0)
	//	{
	//		printf("%d ", a);
	//	}
	//}
	//求两个数的最大公约数
	//int a = 0;
	//int b = 0;
	//int tmp = 0;
	//scanf("%d %d", &a, &b);
	//while (a % b)
	//{
	//	tmp = a % b;
	//	a = b;
	//	b = tmp;
	//}
	//printf("%d", b);
	
	//}
	//打印1000-2000的闰年
//int main()
//{
	//	int year = 0;
	//	for(year = 1000; year <= 2000; year++)
	//	{
	//		if ((year % 4 == 0)&&(year % 100 != 0)||(year%400==0))
	//		{
	//		
	//			printf("%d ", year);
	//			
	//		}
	//	}
		//打印100-200之间的素数
//	int a = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		int i = 0;
//		int flag = 1;
//		for (i = 2; i <= sqrt(a); i++)
//		{
//			if (a % i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//}
    //计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int a = 0;
//double b = 1;
//for (a = 2; a <= 100; a++)
//{
//	if (a % 2 == 0)
//	{
//		b = b - ((double)1 / a);
//	}
//	else
//	{
//		b = b+ ((double)1 / a);
//	}
//}
//printf("%lf", b);
//int arr[] = { 1,3,4,8,9,98,55,12,33,22 };
//int max = 0;
//for (int i = 0; i < 10; i++)
//{
//	if (max < arr[i])
//	{
//		max = arr[i];
//	}
//
//}
//printf("%d", max);
//
//
//
//
//
//
//
//
//return 0;
//
//}
//猜字谜
//void menu()
//{
//	printf("######################\n");
//	printf("#######  1.play  #####\n");
//	printf("#######  0.exit  #####\n");
//	printf("######################\n");
//}
//void game()
//{
//	int ret = 0;
//	int num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入数字：");
//		scanf("%d", &ret);
//		if (ret > num)
//		{
//			printf("你输入的数字过大！\n");
//		}
//		else if (ret < num)
//		{
//			printf("你输入的数字过小！\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//	}
	


//int main()
//{
//	srand((unsigned int)(time(NULL)));
//	int input = 0;
//	menu();
//	do
//	{
//		printf("请输入选项：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束！");
//			break;
//		default:
//			printf("输入的选项无效，请重新输入！\n");
//			break;
//	} while (input);

//关机小程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{	
//		printf("请在输入爸爸，不然你的电脑将在一分钟后关机：\n");
//		scanf("%s", input);
//		if (strcmp(input, "爸爸") ==0)
//		{
//			system("shutdown -a");
//			break;
//		}
//			
//	}
//}