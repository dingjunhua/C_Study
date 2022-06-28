#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Cheak_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p; //返回1代表小端，返回0代表大端
}




int main()
{
	int ret = Cheak_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}


}