#include "game.h"

//实现三子棋


void menu()
{
	printf("###########################\n");
	printf("########## 1.play #########\n");
	printf("########## 0.exit #########\n");
	printf("###########################\n");
}


void game()
{
	char win = 0;
	char Board[ROW][COL] = { 0 };
	srand((unsigned)time(NULL));
	Init_Board(Board);//初始化棋盘
	Print_Board(Board);//打印棋盘
	while (1)
	{
		printf("玩家下>:");
		Player_Set(Board);//玩家下棋
		win = Is_Win(Board);//判断输赢
		if (win == '*' || win == '#')
		{
			break;
		}
		Print_Board(Board);//打印棋盘
		printf("电脑下>:\n");
		Computer_Set(Board);//电脑下棋
		win = Is_Win(Board);//判断输赢
		if (win == '*' || win == '#')
		{
			break;
		}
		Print_Board(Board);//打印棋盘
	}
	printf("%c获胜！\n", win);
	Print_Board(Board);//打印棋盘
}

//实现游戏主干部分
int main()
{
	int sel = 0;//存储用户输入的选择：开始游戏/退出游戏
	do
	{
		menu();//打印菜单的函数
		printf("请选择:>");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			game();//游戏函数
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (sel);
	printf("退出游戏");
	return 0;
}