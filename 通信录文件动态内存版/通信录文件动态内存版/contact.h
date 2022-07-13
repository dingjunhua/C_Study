#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX_NUM 100
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDRESS 20



typedef struct PeoINFO
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
}PeoINFO;

typedef struct Contact
{
	PeoINFO* date;
	int sz;
	int capacity;
}Contact;


void InitContact(Contact* ps);//通信录初始化
void AddContact(Contact* ps);//增加人的信息
void PrintContact(Contact* ps);//打印通信录
void SearchContact(Contact* ps);//查询人的信息
void DeteContact(Contact* ps);//删除人的信息
void ModfiyContact(Contact* ps);//修改人的信息
void DestoryContact(Contact* ps);//销毁申请的空间
void SaveContact(Contact* ps);//保存信息到文件
void CheckCapacity(Contact* ps);//检测容量
void LoadContact(Contact* ps);//加载文件内容