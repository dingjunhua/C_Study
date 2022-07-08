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
		printf("ͨ��¼������\n");
		return;
	}else
	{
		printf("������������\n");
		scanf("%s", ps->date[ps->sz].name);
		printf("���������䣺\n");
		scanf("%d", &(ps->date[ps->sz].age));
		printf("�������Ա�\n");
		scanf("%s", ps->date[ps->sz].sex);
		printf("������绰��\n");
		scanf("%s", ps->date[ps->sz].tele);
		printf("�������ַ��\n");
		scanf("%s", ps->date[ps->sz].address);
		printf("��ӳɹ���\n");
		ps->sz++;
	}
}
void PrintContact(Contact* ps) 
{
	if (ps->sz == 0)
	{
		printf("ͨѶ¼�����ݣ����������һ����Ա��Ϣ��\n");
		return;
	}
	else
	{
		printf("%-6s\t %-4s\t %-4s\t %-20s\t %-20s\t \n", "����", "����", "�Ա�", "�绰����", "��ַ");
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
		printf("ͨѶ¼�����ݣ����������һ����Ա��Ϣ��\n");
		return;
	}
	else
	{
		char name[10] = { 0 };
		printf("������Ҫ���ҵ����֣�");
		scanf("%s", &name);
		int ret = Searchname(ps, name);
		if (ret == -1)
		{
			printf("����������ֲ���ͨ��¼�ڣ�\n");
		}
		else
		{
			printf("%-6s\t %-4s\t %-4s\t %-20s\t %-20s\t \n", "����", "����", "�Ա�", "�绰����", "��ַ");
			printf("%-6s\t %-4d\t %-4s\t %-20s\t %-20s\t \n", ps->date[ret].name, ps->date[ret].age, ps->date[ret].sex, ps->date[ret].tele, ps->date[ret].address);

		}
	}					
}
void DeteContact(Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("ͨѶ¼�����ݣ����������һ����Ա��Ϣ��\n");
		return;
	}
	else
	{
		char name[10] = { 0 };
		printf("������Ҫɾ�������֣�");
		scanf("%s", &name);
		int ret = Searchname(ps, name);
		if (ret == -1)
		{
			printf("����������ֲ���ͨ��¼�ڣ�\n");
		}
		else
		{
			for (int i = 0; i < ps->sz - 1; i++)
			{
				ps->date[ret + i] = ps->date[ret + 1 + i];
			}
			ps->sz--;
			printf("ɾ���ɹ���\n");
		}
	}
	
}
void ModfiyContact(Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("ͨѶ¼�����ݣ����������һ����Ա��Ϣ��\n");
		return;
	}
	else
	{
		char name[10] = { 0 };
		printf("������Ҫ�޸ĵ����֣�");
		scanf("%s", &name);
		int ret = Searchname(ps, name);
		if (ret == -1)
		{
			printf("����������ֲ���ͨ��¼�ڣ�\n");
		}
		else
		{
			printf("������������\n");
			scanf("%s", ps->date[ret].name);
			printf("���������䣺\n");
			scanf("%d", &(ps->date[ret].age));
			printf("�������Ա�\n");
			scanf("%s", ps->date[ret].sex);
			printf("������绰��\n");
			scanf("%s", ps->date[ret].tele);
			printf("�������ַ��\n");
			scanf("%s", ps->date[ret].address);
			printf("�޸ĳɹ���\n");
		}
	}

}