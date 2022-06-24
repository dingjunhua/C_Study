#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Initboard(char board[ROW][COL], int row, int col) //��ʼ������
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col) //��ӡ����
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("--- ");
			}
		}
		printf("\n");	
	}
}
void Player_input(char board[ROW][COL], int row, int col)//�������
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("������Ҫ�����λ�ã�");
		scanf("%d %d", &a, &b);
		if (a > 0 && a <= row && b>0 && b <= col)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = '*';
				Displayboard(board, row, col);//��ӡ����
				break;
			}
			else
			{
				printf("�������λ���������ӣ����������룡\n");
			}
		}
		else
		{
			printf("�������λ����Ч�����������룡\n");
		}
	}

}
void Computer_input(char board[ROW][COL], int row, int col)//��������
{
	
	while (1)
	{
		int a = rand() % row;
		int b = rand() % col;
		if (board[a][b] == ' ')
		{
				board[a][b] = '#';
				printf("�����������\n");
				Displayboard(board, row, col);//��ӡ����
				break;
		}
		
	}
}
int Isfull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Judge_game(char board[ROW][COL], int row, int col)//�ж���Ӯ
{
	int i = 0;
	for (i = 0; i < row; i++)//�ж�����
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)//�ж�����
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//�ж�������
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//�ж�������
	{
		return board[1][1];
	}
	int ret = Isfull(board,row,col);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';
}