#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Menu()
{
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
}
void game(char board[ROW][COL], int row, int col)
{
	int ret = 0;
	Initboard(board, row, col);//��ʼ������
	Displayboard(board, row, col);//��ӡ����
	while (1)
	{
		Player_input(board, row, col);//�������
		ret = Judge_game(board, row, col);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		Computer_input(board, row, col);//��������
		ret = Judge_game(board, row, col);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
	Displayboard(board, row, col);//��ӡ����
}


int main()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	int input = 0;
	do {
		Menu();
		printf("������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(board,ROW,COL);
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			printf("�������ѡ���������������룡\n");
			break;
		}
	} while (input);
}