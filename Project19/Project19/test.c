#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//针对每行输入，输出X图案
	//*   *
	// * *
	//  *
	// * *
	//*   *
	
	//int n = 0;
	//int i = 0;
	//int j = 0;
	//scanf("%d", &n);
	//for (i = 0; i < n; i++)
	//{
	//	for (j = 0; j < n; j++)
	//	{
	//		if (i == j)
	//		{
	//			printf("*");
	//		}
	//		else if(i + j == n - 1)
	//		{
	//			printf("*");
	//		}else
	//		{
	//			printf(" ");
	//		}
	//		
	//	}
	//	printf("\n");
	//有七位考官，从键盘输入诺干成绩，每组7个分数，去掉一个最高分和最低分，输出每组的平均成绩。
	//int i = 0;
	//int score = 0;
	//int sum = 0;
	//int max = 0;
	//int min = 100;
	//for (i = 0; i < 7; i++)
	//{
	//	scanf("%d", &score);
	//	sum += score;
	//	if (score > max)
	//	{
	//		max = score;
	//	}
	//	if (score < min)
	//	{
	//		min = score;
	//	}
	//}
	//printf("%.2f", (sum - max - min) / 5.0);
	//输入年份月份，计算这一年这个月有多少天
	//int y = 0;
	//int m = 0;
	//int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//while ( scanf("%d %d", &y, &m) != EOF)
	//{
	//	if (m <= 12 && m >= 0)
	//	{
	//		int days = day[m];
	//		if ((((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) && m == 2)
	//		{
	//			days += 1;
	//		}
	//		printf("%d \n", days);
	//	}
	//	else
	//	{
	//		printf("您输入的月份有误，请重新输入！\n");
	//	}
	//	
	//}
	//第一行输入一个整数（0≤N≤50）
	//第二行输入N个升序排列的整数，输入用空格分隔的N个整数
	//第三行输入想要进行插入的一个整数
	//输出为一行，N+1个有序排列的整数

		int arr[51] = { 0 };
		int n = 0;
		int i = 0;
		int m = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		scanf("%d", &m);
		for (i = n - 1; i >= 0; i--)
		{
			if (arr[i] > m)
			{
				arr[i + 1] = arr[i];
			}
			else
			{
				break;
			}
		}
		arr[i + 1] = m;
		for (i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}













	return 0;
}  
   