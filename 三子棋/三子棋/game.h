#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Player_input(char board[ROW][COL], int row, int col);
void Computer_input(char board[ROW][COL], int row, int col);
char Judge_game(char board[ROW][COL], int row, int col);
//返回值
//'*'玩家赢
//'#'电脑赢
//'Q'平局
//'C'继续
