#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Cheak_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p; //����1����С�ˣ�����0������
}




int main()
{
	int ret = Cheak_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}


}