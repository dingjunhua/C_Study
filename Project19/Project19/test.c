#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���ÿ�����룬���Xͼ��
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
	//����λ���٣��Ӽ�������ŵ�ɳɼ���ÿ��7��������ȥ��һ����߷ֺ���ͷ֣����ÿ���ƽ���ɼ���
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
	//��������·ݣ�������һ��������ж�����
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
	//		printf("��������·��������������룡\n");
	//	}
	//	
	//}
	//��һ������һ��������0��N��50��
	//�ڶ�������N���������е������������ÿո�ָ���N������
	//������������Ҫ���в����һ������
	//���Ϊһ�У�N+1���������е�����

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
   