#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Menu()
{
	printf("***********************\n");
	printf("******  1. play  ******\n");
	printf("******  0. exit  ******\n");
	printf("***********************\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initborad(mine, ROWS, COLS, '0');//�������̳�ʼ��
	Initborad(show, ROWS, COLS, '*');//�ɼ����̳�ʼ��
	//Displayboard(mine, ROW, COL);//��ӡ��������
	Displayboard(show, ROW, COL);//��ӡ�ɼ�����
	Get_mine(mine, ROW, COL);//����
	//Displayboard(mine, ROW, COL);//��ӡ��������
	Scan_mine(mine, show, ROW, COL);//ɨ��




}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		Menu();
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			printf("�������ѡ����Ч�����������룡\n");
			break;
		}

	} while (input);




}