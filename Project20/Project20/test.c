#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct s
{
	char name[20];
	int age;
	float high;
};




int main()
{
	//struct s ex = { {"dingjunhua"},{23},{5.5} };
	//struct s ex1 = { 0 };
	//char arr[100] = { 0 };
	//sprintf(arr, "%s %d %f\n", ex.name, ex.age, ex.high);
	//printf("%s", arr);
	//sscanf(arr, "%s %d %f\n", ex1.name, &ex1.age, &ex1.high);
	//printf("%s %d %f", ex1.name, ex1.age, ex1.high);
	FILE* pread = fopen("test.txt", "r");
	if (pread == NULL)
	{
		perror("pread");
		return 1;
	}
	FILE* pwriter = fopen("test1.txt", "w");
	if (pwriter == NULL)
	{
		fclose(pread);
		pread = NULL;
		perror("pwriter");
		return 1;
	}
	//文件打开成功
	//读写文件
	char ch = 0;
	while ((ch = fgetc(pread)) != EOF)
	{
		//写文件
		fputc(ch, pwriter);
	}

	fclose(pwriter);
	pwriter = NULL;





}