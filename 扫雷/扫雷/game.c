#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int Cal_mine(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] - 8 * '0';
}
void Initborad(char board[ROWS][COLS], int row, int col, char set)//���̳�ʼ������
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	printf("----------ɨ����Ϸ----------\n");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------ɨ����Ϸ----------\n");
}
void Get_mine(char board[ROWS][COLS], int row, int col)
{
	int count = 0;
	while (count<EASY_MINE)
	{
		
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count++;
		}
	}

}
void Scan_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (1)
	{
		printf("������ɨ�׵�λ�ã�");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '0')
				{
					int ret = Cal_mine(mine, x, y);
					show[x][y] = ret + '0';
					count++;
					Displayboard(show, ROW, COL);
					if (count == row * col - EASY_MINE)
					{
						printf("��ϲ��Ӯ����Ϸ��\n");
						break;
					}

				}
				else
				{
					printf("���ȵ��˵��ף���Ϸ������\n");
					break;
				}
			}
			else
			{
				printf("�������λ���ظ������������룡\n");
			}

			
		}
		else
		{
			printf("�������λ����Ч�����������룡");
		}
	}
	

}