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
void Initborad(char board[ROWS][COLS], int row, int col, char set)//棋盘初始化函数
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
	printf("----------扫雷游戏----------\n");
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
	printf("----------扫雷游戏----------\n");
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
		printf("请输入扫雷的位置：");
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
						printf("恭喜你赢得游戏！\n");
						break;
					}

				}
				else
				{
					printf("您踩到了地雷，游戏结束！\n");
					break;
				}
			}
			else
			{
				printf("您输入的位置重复，请重新输入！\n");
			}

			
		}
		else
		{
			printf("您输入的位置无效，请重新输入！");
		}
	}
	

}