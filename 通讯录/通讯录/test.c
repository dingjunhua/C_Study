#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//通讯录
//可以存放100个的信息
//1. 增加人的信息
//2. 删除人的信息
//3. 修改人的信息
//4. 查找人的信息
//5. 打印通讯录所有人的信息
//0. 退出通讯录

void meun()
{
	printf("****************************\n");
	printf("***** 1.ADD     2.DETE *****\n");
	printf("***** 3.MODIFY  4.SEARCH ***\n");
	printf("***** 5.PINRT   0.EXIT *****\n");
	printf("****************************\n");

}
enum Input
{
	EXIT,
	ADD,
	DETE,
	MODIFY,
	SEARCH,
	PRINT
};
Contact my_contact;


int main()
{
	int input = 0;
	InitContact(&my_contact);
	do
	{
		meun();
		printf("请输入选项：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&my_contact);//1.增加人的信息
			break;
		case DETE:
			DeteContact(&my_contact);//2.删除人的信息
			break;
		case MODIFY:
			ModfiyContact(&my_contact);//3.修改人的信息
			break;
		case SEARCH:
			SearchContact(&my_contact);//4.查找人的信息
			break;
		case PRINT:
			PrintContact(&my_contact);//5.打印人的信息
			break;
		case EXIT:
			printf("已退出通讯录！\n");
			break;
		default:
			printf("您输入的选项无效，请重新输入！\n");
			break;
		}

	} while (input);




}