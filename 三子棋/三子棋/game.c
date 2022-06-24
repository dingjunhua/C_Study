#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Initboard(char board[ROW][COL], int row, int col) //初始化棋盘
{
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col) //打印棋盘
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
void Player_input(char board[ROW][COL], int row, int col)//玩家输入
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("请输入要下棋的位置：");
		scanf("%d %d", &a, &b);
		if (a > 0 && a <= row && b>0 && b <= col)
		{
			if (board[a - 1][b - 1] == ' ')
			{
				board[a - 1][b - 1] = '*';
				Displayboard(board, row, col);//打印棋盘
				break;
			}
			else
			{
				printf("您输入的位置已有棋子，请重新输入！\n");
			}
		}
		else
		{
			printf("您输入的位置无效，请重新输入！\n");
		}
	}

}
void Computer_input(char board[ROW][COL], int row, int col)//电脑输入
{
	
	while (1)
	{
		int a = rand() % row;
		int b = rand() % col;
		if (board[a][b] == ' ')
		{
				board[a][b] = '#';
				printf("电脑下棋完成\n");
				Displayboard(board, row, col);//打印棋盘
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
char Judge_game(char board[ROW][COL], int row, int col)//判断输赢
{
	int i = 0;
	for (i = 0; i < row; i++)//判断三行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)//判断三列
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//判断两交叉
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//判断两交叉
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