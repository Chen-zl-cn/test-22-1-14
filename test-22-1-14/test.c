#include "game.h"

//ʵ��������


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
	Init_Board(Board);//��ʼ������
	Print_Board(Board);//��ӡ����
	while (1)
	{
		printf("�����>:");
		Player_Set(Board);//�������
		win = Is_Win(Board);//�ж���Ӯ
		if (win == '*' || win == '#')
		{
			break;
		}
		Print_Board(Board);//��ӡ����
		printf("������>:\n");
		Computer_Set(Board);//��������
		win = Is_Win(Board);//�ж���Ӯ
		if (win == '*' || win == '#')
		{
			break;
		}
		Print_Board(Board);//��ӡ����
	}
	printf("%c��ʤ��\n", win);
	Print_Board(Board);//��ӡ����
}

//ʵ����Ϸ���ɲ���
int main()
{
	int sel = 0;//�洢�û������ѡ�񣺿�ʼ��Ϸ/�˳���Ϸ
	do
	{
		menu();//��ӡ�˵��ĺ���
		printf("��ѡ��:>");
		scanf("%d", &sel);
		switch (sel)
		{
		case 1:
			game();//��Ϸ����
			break;
		case 0:
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (sel);
	printf("�˳���Ϸ");
	return 0;
}