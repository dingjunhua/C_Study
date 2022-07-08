#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* ps)
{
	ps->sz = 0;
	memset(ps->date, 0, sizeof(ps->date));
}
void AddContact(Contact* ps)
{
	if (ps->sz == MAX_NUM - 1)
	{
		printf("通信录已满！\n");
		return;
	}else
	{
		printf("请输入姓名：\n");
		scanf("%s", ps->date[ps->sz].name);
		printf("请输入年龄：\n");
		scanf("%d", &(ps->date[ps->sz].age));
		printf("请输入性别：\n");
		scanf("%s", ps->date[ps->sz].sex);
		printf("请输入电话：\n");
		scanf("%s", ps->date[ps->sz].tele);
		printf("请输入地址：\n");
		scanf("%s", ps->date[ps->sz].address);
		printf("添加成功！\n");
		ps->sz++;
	}
}
void PrintContact(Contact* ps) 
{
	if (ps->sz == 0)
	{
		printf("通讯录无内容，请至少添加一个成员信息！\n");
		return;
	}
	else
	{
		printf("%-6s\t %-4s\t %-4s\t %-20s\t %-20s\t \n", "姓名", "年龄", "性别", "电话号码", "地址");
		int i = 0;
		for (i = 0; i < ps->sz; i++)
		{
			printf("%-6s\t %-4d\t %-4s\t %-20s\t %-20s\t \n", ps->date[i].name, ps->date[i].age, ps->date[i].sex, ps->date[i].tele, ps->date[i].address);
		}
	}

}
static int Searchname(Contact* ps, char* name)
{
	int i = 0;		
	for (i = 0; i < ps->sz; i++)
	{
		if (strcmp(name, ps->date[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void SearchContact(Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("通讯录无内容，请至少添加一个成员信息！\n");
		return;
	}
	else
	{
		char name[10] = { 0 };
		printf("请输入要查找的名字：");
		scanf("%s", &name);
		int ret = Searchname(ps, name);
		if (ret == -1)
		{
			printf("您输入的名字不在通信录内！\n");
		}
		else
		{
			printf("%-6s\t %-4s\t %-4s\t %-20s\t %-20s\t \n", "姓名", "年龄", "性别", "电话号码", "地址");
			printf("%-6s\t %-4d\t %-4s\t %-20s\t %-20s\t \n", ps->date[ret].name, ps->date[ret].age, ps->date[ret].sex, ps->date[ret].tele, ps->date[ret].address);

		}
	}					
}
void DeteContact(Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("通讯录无内容，请至少添加一个成员信息！\n");
		return;
	}
	else
	{
		char name[10] = { 0 };
		printf("请输入要删除的名字：");
		scanf("%s", &name);
		int ret = Searchname(ps, name);
		if (ret == -1)
		{
			printf("您输入的名字不在通信录内！\n");
		}
		else
		{
			for (int i = 0; i < ps->sz - 1; i++)
			{
				ps->date[ret + i] = ps->date[ret + 1 + i];
			}
			ps->sz--;
			printf("删除成功！\n");
		}
	}
	
}
void ModfiyContact(Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("通讯录无内容，请至少添加一个成员信息！\n");
		return;
	}
	else
	{
		char name[10] = { 0 };
		printf("请输入要修改的名字：");
		scanf("%s", &name);
		int ret = Searchname(ps, name);
		if (ret == -1)
		{
			printf("您输入的名字不在通信录内！\n");
		}
		else
		{
			printf("请输入姓名：\n");
			scanf("%s", ps->date[ret].name);
			printf("请输入年龄：\n");
			scanf("%d", &(ps->date[ret].age));
			printf("请输入性别：\n");
			scanf("%s", ps->date[ret].sex);
			printf("请输入电话：\n");
			scanf("%s", ps->date[ret].tele);
			printf("请输入地址：\n");
			scanf("%s", ps->date[ret].address);
			printf("修改成功！\n");
		}
	}

}