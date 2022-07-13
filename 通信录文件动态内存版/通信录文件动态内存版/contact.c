#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* ps)
{
	ps->date = (PeoINFO*)malloc(3 * sizeof(PeoINFO));
	if (ps->date == NULL)
	{
		perror("InitContact");
		return;
	}
	ps->sz = 0; //��ʼ��Ĭ��Ϊ0
	ps->capacity = 3;//��ʼ��Ĭ�ϴ�С 
	LoadContact(ps);
}
void LoadContact(Contact* ps)
{
	FILE* pf = fopen("contact.txt", "r");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	//���ļ�
	PeoINFO tmp = { 0 };
	while (fread(&tmp, sizeof(PeoINFO), 1, pf))
	{
		CheckCapacity(ps);
		ps->date[ps->sz] = tmp;
		ps->sz++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}
void SaveContact(Contact* ps)
{
	FILE* pf = fopen("contact.txt", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		fwrite(ps->date+i, sizeof(PeoINFO), 1, pf);
		
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}
void CheckCapacity(Contact* ps)
{
	if (ps->sz == ps->capacity)
	{
		PeoINFO* tmp = realloc(ps->date, (ps->capacity + 2) * sizeof(PeoINFO));
		if (tmp == NULL)
		{
			perror("AddCapacity");
		}
		else
		{
			ps->date = tmp;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
	}
}
void AddContact(Contact* ps)
{
	
	CheckCapacity(ps);
	printf("������������");
	scanf("%s", ps->date[ps->sz].name);
	printf("���������䣺");
	scanf("%d", &(ps->date[ps->sz].age));
	printf("�������Ա�");
	scanf("%s", ps->date[ps->sz].sex);
	printf("������绰��");
	scanf("%s", ps->date[ps->sz].tele);
	printf("�������ַ��");
	scanf("%s", ps->date[ps->sz].address);
	printf("��ӳɹ���\n");
	ps->sz++;

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
void DestoryContact(Contact* ps)
{
	free(ps->date);
	ps->date = NULL;
	ps->sz = 0;
	ps->capacity = 0;
}