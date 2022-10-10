//#define _CRT_SECURE_NO_WARNINGS 1
//#include "Backgammon.h"
//
//void Meum()
//{
//	printf("***************************\n"
//		   "********** 1.play *********\n"
//		   "********** 0.exit *********\n"
//		   "***************************\n");
//}
//
//void Game()
//{
//	//����һ����ά���������������
//	char c_chessman[ROW][COL] = { 0 };
//
//	//�Զ�ά������г�ʼ��
//	Input(c_chessman, ROW, COL);
//
//	//��ӡ����
//	Display_chessboard(c_chessman, ROW, COL);
//
//	//�������
//	char c_flag = 0;
//	while (1)
//	{
//		Player_plays_chess(c_chessman, ROW, COL);
//
//		system("cls");
//
//		Display_chessboard(c_chessman, ROW, COL);
//
//		c_flag = Judgment(c_chessman, ROW, COL);
//		printf("%c\n", c_flag);
//		if (c_flag != 'c')
//		{
//			break;
//		}
//
//		Computer_chess_play(c_chessman, ROW, COL);
//
//		system("cls");
//
//		Display_chessboard(c_chessman, ROW, COL);
//
//		c_flag = Judgment(c_chessman, ROW, COL);
//		printf("%c\n", c_flag);
//		if (c_flag != 'c')
//		{
//			break;
//		}
//	}
//
//	if (c_flag == 's')
//	{
//		printf("������Ժ����ˣ���������һ�ְ�!\n");
//	}
//	else if (c_flag == '*')
//	{
//		printf("���ʤ��!\n");
//	}
//	else if (c_flag == '#')
//	{
//		printf("����ʤ��!\n");
//	}
//
//	printf("����10����˳���ҳ��!\n");
//	Sleep(10000);
//
//
//}
//
////�Զ�ά����ĳ�ʼ��
//void Input(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	//����������������forѭ��
//	int i_i = 0;
//	int i_j = 0;
//
//	//��ʼ����ʵ��,����ά�����ÿһ��Ԫ�س�ʼ��Ϊ�ո�
//	for (i_i = 0; i_i < i_row; i_i++)
//	{
//		i_j = 0;
//		for (i_j = 0; i_j < i_col; i_j++)
//		{
//			c_chessman[i_i][i_j] = ' ';
//		}
//	}
//
//}
//
////��ӡ����
//void Display_chessboard(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	//����������������forѭ��
//	int i_i = 0;
//	int i_j = 0;
//
//	//��ӡ���̵�ʵ��
//	for (i_i = 0; i_i < i_row; i_i++)
//	{
//		for (i_j = 0; i_j < i_col; i_j++)
//		{
//			printf(" %c ", c_chessman[i_i][i_j]);
//
//			if (i_j < i_col - 1)
//			{
//				printf("|");
//			}
//		}
//
//		printf("\n");
//
//		if (i_i < i_row)
//		{
//			for (i_j = 0; i_j < i_col; i_j++)
//			{
//				printf("---");
//
//				if (i_j < i_col - 1)
//				{
//					printf("|");
//				}
//			}
//		}
//		printf("\n");
//	}
//}
//
////�������
//void Player_plays_chess(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	printf("������壡\n");
//
//	//��������������Ϊ�û���������겢��ȡ
//	int i_x = 0;
//	int i_y = 0;
//	
//	//����������ʵ��
//	while (1)
//	{
//		printf("�����������µ�λ�õ�����:");
//		scanf("%d %d", &i_x, &i_y);
//
//		if (i_x >= 1 && i_x <= i_row && i_y >= 1 && i_y <= i_col)
//		{
//			if (c_chessman[i_x - 1][i_y - 1] == ' ')
//			{
//				c_chessman[i_x - 1][i_y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("��λ���Ѿ�������,����ѡ��ѣ�\n");
//			}
//		}
//		else
//		{
//			printf("��������곬�������̵ķ�Χ������������!\n");
//		}
//	}
//
//}
//
////��������
//void Computer_chess_play(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	printf("��������!\n");
//
//	//��������������������
//	int i_x = 0;
//	int i_y = 0;
//
//	while (1)
//	{
//		//��ȡһ����Χ�������
//		i_x = (rand() % ROW);
//		i_y = (rand() % COL);
//
//		if (c_chessman[i_x][i_y] == ' ')
//		{
//			c_chessman[i_x][i_y] = '#';
//			break;
//		}
//	}
//}
//
////�����̽����ж�
//char Judgment(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	//Display_chessboard(c_chessman, ROW, COL);
//	//���������������ڶԶ�ά����ķ���
//	int i_i = 0;
//	int i_j = 0;
//
//	//����������жϵ�ʵ��
//	//��һ����Ӯ��ʤ��
//	//��ʤ��
//	for (i_i = 0; i_i < i_row; i_i++)
//	{
//		if (c_chessman[i_i][0] == c_chessman[i_i][1]
//			&& c_chessman[i_i][0] == c_chessman[i_i][2]
//			&& c_chessman[i_i][0] != ' ' && c_chessman[i_i][0] == '*')
//		{
//			return  '*';
//		}
//		else if (c_chessman[i_i][0] == c_chessman[i_i][1]
//			&& c_chessman[i_i][0] == c_chessman[i_i][2]
//		    && c_chessman[i_i][0] == '#')
//		{
//			return  '#';
//		}
//	}
//
//	//��ʤ��
//	for (i_j = 0; i_j < i_col; i_j++)
//	{
//		if (c_chessman[0][i_j] == c_chessman[1][i_j]
//			&& c_chessman[1][i_j] == c_chessman[2][i_j]
//			&& c_chessman[1][i_j] == '*')
//		{
//			return '*';
//		}
//		else if(c_chessman[0][i_j] == c_chessman[1][i_j]
//			&& c_chessman[1][i_j] == c_chessman[2][i_j]
//			&& c_chessman[1][i_j] == '#')
//		{
//			return  '#';
//		}
//	}
//
//	//�Խ�������
//	if (c_chessman[0][1] == c_chessman[1][1]
//	&& c_chessman[1][1] == c_chessman[2][2]
//	&& c_chessman[2][2] == '*')
//	{
//		return  '*';
//	}
//	else if (c_chessman[0][1] == c_chessman[1][1]
//		&& c_chessman[1][1] == c_chessman[2][2]
//		&& c_chessman[2][2] == '#')
//	{
//		return '#';
//	}
//
//	//������ж�
//	for (i_i = 0; i_i < i_row; i_i++)
//	{
//		for (i_j = 0; i_j < i_col; i_j++)
//		{
//			if (c_chessman[i_i][i_j] == ' ')
//			{
//				return 'c';
//			}
//		}
//	}
//	return 's';
//}