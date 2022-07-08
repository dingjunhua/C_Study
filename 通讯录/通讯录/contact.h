#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

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
	PeoINFO date[MAX_NUM];
	int sz;
}Contact;


void InitContact(Contact* ps);//ͨ��¼��ʼ��
void AddContact(Contact* ps);//�����˵���Ϣ
void PrintContact(Contact* ps);//��ӡͨ��¼
void SearchContact(Contact* ps);//��ѯ�˵���Ϣ
void DeteContact(Contact* ps);//ɾ���˵���Ϣ
void ModfiyContact(Contact* ps);//�޸��˵���Ϣ