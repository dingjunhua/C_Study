#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



void text_static()
{
	static int a = 0;
	a++;
	printf("%d ", a);
}

struct Stu
{
	char naem[20];
	int age;
	double score;
};


//extern g_val;
//extern int add(int x ,int y);


int main()
{
	//for (int i = 0; i < 10; i++)
	//{
	//	text_static();
	//}
	//printf("%d", g_val);
	/*int num1 = 10;
	int num2 = 5;
	int sum = add(num1, num2);;
	printf("%d", sum);*/
	/*struct Stu s = { "ะกร๗",20,85.5 };
	printf("%s %d %lf\n", s.naem, s.age, s.score);
	struct Stu* p = &s;
	printf("%s %d %lf\n", p->naem, p->age, p->score);*/
	double a = 0;
	double b = 0;
	double min = 0;
	scanf("%lf %lf", &a, &b);
	min = a * b;
	printf("%lf", min);
	
}