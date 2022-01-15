#include "game.h"


void Init_Board(char Board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

void Print_Board(char Board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < COL-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			printf("--- --- ---\n");
		}
	}
}

void Player_Set(char Board[ROW][COL])
{
	while (1)
	{
		int x = 0, y = 0;//用来存放坐标
		printf("请输入坐标(x y)>:");
		scanf("%d %d", &x, &y);
		if (x - 1 >= 0 && x - 1 <= 2 && y - 1 >= 0 && y - 1 <= 2 && Board[x - 1][y - 1] == ' ')
		{
			Board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("坐标不合法，请重新输入。\n");
		}
	}
}

char Is_Win(char Board[ROW][COL])
{
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][1] != ' ')
		{
			return Board[i][1];
		}
	}
	for (j = 0; j < COL; j++)
	{
		if (Board[0][j] == Board[1][j] && Board[1][j] == Board[2][j] && Board[i][1] != ' ')
		{
			return Board[1][j];
		}
	}
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[i][1] != ' ')
	{
		return Board[1][1];
	}
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[i][1] != ' ')
	{
		return Board[1][1];
	}
	return ' ';
}

void Computer_Set(char Board[ROW][COL])
{
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (x >= 0 && x <= 2 && y >= 0 && y <= 2 && Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}