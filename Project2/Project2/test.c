#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	/*printf("abd\\ad\n");
	printf("\'\n");
	printf("\"\n");
	printf("\a\a\a");*/
	//printf("%c\n", '\130');//八进制130对应十进制值为88对应ASCII码值为X
	//printf("%c\n", '\x30');//48 - '0'
	///*int flag = 0;
	//printf("好好学习吗？\n");
	//printf("请输入(1/0):");
	//scanf("%d", &flag);
	//if (flag == 0)
	//{
	//	printf("回家卖红薯！");
	//}
	//else
	//{
	//	printf("走上人生巅峰！");
	//}*/
	//int num1 = 0;
	//int num2 = 0;
	//printf("请输入两个数：\n");
	//scanf("%d %d", &num1, &num2);
	//int sum = Add(num1, num2);
	//printf("您输入两个数的和为：%d\n", sum);
	//int arr[10] = { 2,2,3,5,5,9,7,8,9,10 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("arr[%d]:%d\n", i, arr[i]);
	//}
	int a = 0;
	int b = 5;
	int max = 0;
	max = a > b ? a : b;
	printf("max=%d", max);

	return 0;

}