#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	//五位运动员参加比赛
//	//A说：B第二，我第三
//	//B说：我第二，E第四
//	//C说：我第一，D第二
//	//D说：C最后，我第三
//	//E说：我第四，A第一
//	//比赛结束后，每个选手都说对了一半，请编程确定比赛的名词
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//
//
//
//					}
//				}
//
//			}
//
//
//		}
//
//
//
//	}
//
//
//
//
//	return 0;
//}




//计算器
void menu()
{
	printf("*****************************\n");
	printf("******** 1.Add   2.Sub ******\n");
	printf("******** 3.Mul   4.Div ******\n");
	printf("********** 0.exit ***********\n");
	printf("*****************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int calu(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数：");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	int input = 0;
	int (*pfarr[5])(int, int) = { NULL,Add,Sub,Mul,Div};

	do
	{
		int x = 0;
		int y = 0;
		int ret = 0;
		menu();
	/*	printf("请输入选项：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：");//函数指针实现
			scanf("%d %d", &x, &y);
			ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("程序退出！\n");
			break;
		}
		else
		{
			printf("您输入的选项无效，请重新输入！\n");
		}*/
		printf("请输入选项：");
		scanf("%d", &input);
		switch (input)
		{
			int ret = 0;
		case 1:
			ret = calu(Add);
			printf("%d\n", ret);      //回调函数实现
			break;
		case 2:
			ret = calu(Sub);
			printf("%d\n", ret);
			break;
		case 3:
			ret = calu(Mul);
			printf("%d\n", ret);
			break;
		case 4:
			ret = calu(Div);
			printf("%d\n", ret);
			break;
		case 0:
			break;
		default:
			break;

		}























	} while (input);




	return 0;
}