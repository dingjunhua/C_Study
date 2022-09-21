#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include <iostream>
#include <string>


void test1()
{
	string s = "hello world";
	s += "!!!";
	string::iterator it = s.begin();
	//while (it != s.end())
	//{
	//	cout << *it << " ";
	//	it++;
	//}
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	/*cout << s << endl;*/
	cout << endl;

}






int main()
{
	test1();

}