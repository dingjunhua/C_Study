#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_MINE 10

void Initborad(char board[ROWS][COLS], int row, int col, char set);//棋盘初始化函数
void Displayboard(char board[ROWS][COLS], int row, int col);//棋盘打印函数
void Get_mine(char board[ROWS][COLS], int row, int col);
void Scan_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
