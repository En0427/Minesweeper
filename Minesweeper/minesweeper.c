#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("********************************\n");
	printf("****   1. play   0. exit    ****\n");
	printf("********************************\n");
}

void game()
{
	//�׵���Ϣ�洢 
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 }; //11 * 11
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("Please choose:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Minesweeper\n");
			game();
			break;
		case 0:
			printf("Exit Game\n");
			break;
		default:
			printf("Select error, please try again\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}