#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Init_Board(char Board[ROW][COL]);
void Print_Board(char Board[ROW][COL]);
void Player_Set(char Board[ROW][COL]);
char Is_Win(char Board[ROW][COL]);
void Computer_Set(char Board[ROW][COL]);