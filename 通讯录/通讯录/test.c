#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//ͨѶ¼
//���Դ��100������Ϣ
//1. �����˵���Ϣ
//2. ɾ���˵���Ϣ
//3. �޸��˵���Ϣ
//4. �����˵���Ϣ
//5. ��ӡͨѶ¼�����˵���Ϣ
//0. �˳�ͨѶ¼

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
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&my_contact);//1.�����˵���Ϣ
			break;
		case DETE:
			DeteContact(&my_contact);//2.ɾ���˵���Ϣ
			break;
		case MODIFY:
			ModfiyContact(&my_contact);//3.�޸��˵���Ϣ
			break;
		case SEARCH:
			SearchContact(&my_contact);//4.�����˵���Ϣ
			break;
		case PRINT:
			PrintContact(&my_contact);//5.��ӡ�˵���Ϣ
			break;
		case EXIT:
			printf("���˳�ͨѶ¼��\n");
			break;
		default:
			printf("�������ѡ����Ч�����������룡\n");
			break;
		}

	} while (input);




}