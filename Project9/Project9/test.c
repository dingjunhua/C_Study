#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int is_year(int n)
//{
//	return ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0));
//}
//void Swap(int* a, int* b)
//{
//	int z = *a;
//	*a = *b;
//	*b = z;
//}
//void display(int a)
//{
//	int b = 0;
//	int i = 0;
//	for(i=1 ; i<=a ; i++)
//	{
//		for (b = 1; b <= i; b++)
//		{
//			printf("%d*%-2d=%-3d ", b, i, i * b);
//		}
//		printf("\n");
//	}
//}
//void print(int a)
//{
//	if (a % 10 != 0)
//	{
//		print(a / 10);
//		printf("%d ", a%10);
//		
//	}
//}
//递归
int mul_n1(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * mul_n1(n - 1);
	}
	
}
//迭代
int mul_n2(int n)
{
	int i = 0;
	for (i = n-1; i>=1; i--)
	{
		n = n * i;
	}
	return n;
}
//递归
int my_strlen1(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen1(str + 1);
	}
	else
	{
		return 0;
	}
}
//迭代
int my_strlen2(char* str)
{
	int i = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		;
	}
	return i;
}
//迭代
void reverse_string1(char* str)
{
	int left = 0;
	int right = my_strlen2(str) - 1;
	while (left < right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}

}
//递归
void reverse_string2(char* str)
{
	char temp = *str;
	int len = my_strlen2(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen2(str+1) >= 2)
	{
		reverse_string2(str + 1);	
	}
	*(str + len - 1) = temp;
}
int digitsum(int a)
{
	if (a > 9)
	{
		return a % 10 + digitsum(a / 10);
	}
	else
	{
		return a;
	}
}
double Cal_nk(int n, int k)
{
	if (k>0)
	{
		return n * Cal_nk(n, k - 1);
	}
	else if(k<0)
	{
		return 1.0/ Cal_nk(n, -k);
	}
	else
	{
		return 1;
	}
}
//递归
int fib1(int n)
{
	if (n > 2)
	{
		return fib1(n - 1) + fib1(n - 2);
	}
	else
	{
		return 1 ;
	}
}
int fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;	
	}
	return c;
	
}


int main()
{
	//函数判断是否是润年
	//int year = 0;
	//int ret = 0;
	//printf("请输入年份：");
	//scanf("%d", &year);
	//ret = is_year(year);
	//if (ret == 1)
	//{
	//	printf("是闰年！");
	//}
	//else
	//{
	//	printf("不是闰年！");
	//}
	//函数交换两个整数
	//int a = 10;
	//int b = 20;
	//Swap(&a, &b);
	//printf("a = %d b = %d", a, b);
	//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
	/*int a = 0;
	printf("请输入要打印的乘法口诀表：");
	scanf("%d", &a);
	display(a);*/
	//递归方式实现打印一个整数的每一位
	//int a = 1234;
	//print(a);
	//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
	//int n = 0;
	//scanf("%d", &n);
	//int ret = mul_n2(n);
	//printf("%d", ret);
	//递归和非递归分别实现strlen
	//char arr[] = "hello";
	//int ret = my_strlen2(arr);
	//printf("%d", ret);
	//字符串逆序（递归实现）
	//char arr[] = "abcdef";
	//reverse_string2(arr);
	//printf("%s", arr);
	//计算一个数的每位之和（递归实现）
	//int a = 0;
	//scanf("%d", &a);
	//int sum = digitsum(a);
	//printf("%d", sum);
	//编写一个函数实现n的k次方，使用递归实现。
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Cal_nk(n, k);
	printf("%lf", ret);
	//递归和非递归分别实现求第n个斐波那契数
	//int n = 0;
	//int ret = 0;
	//scanf("%d", &n);
	//fib1(n);
	//ret = fib2(n);
	//printf("%d", ret);

	return 0;
}