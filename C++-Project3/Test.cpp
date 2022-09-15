#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
using namespace std;

void Test1()
{
	Date d1(2022, 8, 24);
	Date d2(2022,12,31);
	Date d3;
	d1 += 20;
	d1.Print();

	d1 += 200;
	d1.Print();

	d1 += 2000;
	d1.Print();	
	
	Date ret = d2 + 20;
	ret.Print();

	d3 = ++d2;
	d3.Print();
	d3 = d2++;
	d3.Print();
}

void Test2()
{
	Date d1(2022, 8, 30);
	Date d2(2022, 8, 30);
	d1 -= 100;
	d1.Print();
	Date ret = d2 - 100;
	d2.Print();
	ret.Print();
	d2--;
	d2.Print();
	--d2;
	d2.Print();

}
void Test3()
{
	Date d1(2022, 8, 30);
	Date d2(2022, 2, 28);
	//int ret = d1 - d2;
	cout << d1 - d2 << endl;
}

int main()
{
	//Test1();
	//Test2();
	Test3();

	return 0;
}