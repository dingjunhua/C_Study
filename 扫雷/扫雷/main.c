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
	Initborad(mine, ROWS, COLS, '0');//地雷棋盘初始化
	Initborad(show, ROWS, COLS, '*');//可见棋盘初始化
	//Displayboard(mine, ROW, COL);//打印地雷棋盘
	Displayboard(show, ROW, COL);//打印可见棋盘
	Get_mine(mine, ROW, COL);//埋雷
	//Displayboard(mine, ROW, COL);//打印地雷棋盘
	Scan_mine(mine, show, ROW, COL);//扫雷




}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		Menu();
		printf("请输入选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("您输入的选项无效，请重新输入！\n");
			break;
		}

	} while (input);




}