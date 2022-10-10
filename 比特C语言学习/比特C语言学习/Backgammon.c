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
//	//声明一个二维数组用来存放棋子
//	char c_chessman[ROW][COL] = { 0 };
//
//	//对二维数组进行初始化
//	Input(c_chessman, ROW, COL);
//
//	//打印棋盘
//	Display_chessboard(c_chessman, ROW, COL);
//
//	//玩家下棋
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
//		printf("您与电脑和棋了！重新再来一局吧!\n");
//	}
//	else if (c_flag == '*')
//	{
//		printf("玩家胜利!\n");
//	}
//	else if (c_flag == '#')
//	{
//		printf("电脑胜利!\n");
//	}
//
//	printf("将在10秒后退出该页面!\n");
//	Sleep(10000);
//
//
//}
//
////对二维数组的初始化
//void Input(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	//声明两个变量用于for循环
//	int i_i = 0;
//	int i_j = 0;
//
//	//初始化的实现,将二维数组的每一个元素初始化为空格
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
////打印棋盘
//void Display_chessboard(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	//声明两个变量用于for循环
//	int i_i = 0;
//	int i_j = 0;
//
//	//打印棋盘的实现
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
////玩家下棋
//void Player_plays_chess(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	printf("玩家下棋！\n");
//
//	//声明两个变量作为用户输入的坐标并获取
//	int i_x = 0;
//	int i_y = 0;
//	
//	//对玩家下棋的实现
//	while (1)
//	{
//		printf("请输入您想下的位置的坐标:");
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
//				printf("该位置已经有棋子,重新选择把！\n");
//			}
//		}
//		else
//		{
//			printf("输入的坐标超出了棋盘的范围，请重新输入!\n");
//		}
//	}
//
//}
//
////电脑下棋
//void Computer_chess_play(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	printf("电脑下棋!\n");
//
//	//声明两个变量用与坐标
//	int i_x = 0;
//	int i_y = 0;
//
//	while (1)
//	{
//		//获取一定范围的随机数
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
////对棋盘进行判断
//char Judgment(char c_chessman[ROW][COL], int i_row, int i_col)
//{
//	//Display_chessboard(c_chessman, ROW, COL);
//	//声明两个变量用于对二维数组的访问
//	int i_i = 0;
//	int i_j = 0;
//
//	//对棋盘情况判断的实现
//	//玩家或电脑赢得胜利
//	//行胜利
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
//	//列胜利
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
//	//对角线满足
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
//	//和棋的判断
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