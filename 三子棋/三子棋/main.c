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
	Initboard(board, row, col);//初始化棋盘
	Displayboard(board, row, col);//打印棋盘
	while (1)
	{
		Player_input(board, row, col);//玩家输入
		ret = Judge_game(board, row, col);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		Computer_input(board, row, col);//电脑输入
		ret = Judge_game(board, row, col);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了！\n");
	}
	else
	{
		printf("平局！\n");
	}
	Displayboard(board, row, col);//打印棋盘
}


int main()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	int input = 0;
	do {
		Menu();
		printf("请输入选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(board,ROW,COL);
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("您输入的选项有误，请重新输入！\n");
			break;
		}
	} while (input);
}