#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	//��λ�˶�Ա�μӱ���
//	//A˵��B�ڶ����ҵ���
//	//B˵���ҵڶ���E����
//	//C˵���ҵ�һ��D�ڶ�
//	//D˵��C����ҵ���
//	//E˵���ҵ��ģ�A��һ
//	//����������ÿ��ѡ�ֶ�˵����һ�룬����ȷ������������
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




//������
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
	printf("������������������");
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
	/*	printf("������ѡ�");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������������������");//����ָ��ʵ��
			scanf("%d %d", &x, &y);
			ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�����˳���\n");
			break;
		}
		else
		{
			printf("�������ѡ����Ч�����������룡\n");
		}*/
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
			int ret = 0;
		case 1:
			ret = calu(Add);
			printf("%d\n", ret);      //�ص�����ʵ��
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