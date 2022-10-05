#define _CRT_SECURE_NO_WARNINGS 1
//1.Hello word
//#include <stdio.h>
//
//int main(void)
//{
//	printf("Hello word!");
//	return  0;
//}

//2.打印小飞机
//#include<stdio.h>
//
//int main(void)
//{
//    printf("     ##     \n"
//           "     ##     \n"
//           "############\n"
//           "############\n"
//           "    #  #    \n"
//           "    #  #    \n");
//    return 0;
//}

//3.
//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	printf("%d\n",strlen("c:\test\628\test.c"));
//	printf("c:\test\628\test.c\n");
//
//	int x = 0;
//	x = '\62';
//	printf("%d\n", x);
//	printf("%c\n",'\62');
//	return  0;
//}

//4.
//#include<stdio.h>
//
//int main(void)
//{
//    printf("Name    Age    Gnder\n"
//        "---------------------\n"
//        "Jack    18     man\n");
//    return  0;
//}

//5.求两个数的较大值
//#include<stdio.h>
//
//int main(void)
//{
//	int number1 = 0;
//	int number2 = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &number1 , &number2);
//
//	if (number1 > number2)
//	{
//		printf("%d", number1);
//	}
//	else if(number1 < number2)
//	{
//		printf("%d", number2);
//
//	}
//	return  0;
//}


//6.
//#include<stdio.h>
//
//int main(void)
//{
//    int number = 0;
//    scanf("%d", &number);
//
//    if ((number % 5) == 0)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}

//7.
//#include<stdio.h>
//
//int main(void)
//{
//    int intelligence = 0;
//    scanf("%d", &intelligence);
//
//    if (intelligence >= 140)
//    {
//        printf("Genius");
//    }
//    return 0;
//}

//8.
//#include<stdio.h>
//
//int main(void)
//{
//    int a = 40;
//    int c = 212;
//
//    printf("%d", ((-8 + 22) * a - 10 + c / 2));
//    return  0;
//}

//9.
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//    int numberone = 0;
//    int numbertwo = 0;
//   
//   while( scanf("%d %d", &numberone, &numbertwo) != EOF)
//   {
//       printf("%d %d\n", numberone, numbertwo);
//    if(numberone > numbertwo)
//    {
//        printf("%d>%d\n", numberone , numbertwo);
//    }else if(numberone == numbertwo)
//    {
//        printf("%d=%d\n", numberone , numbertwo);
//    }/*else if( numberone < numbertwo)
//    {
//        printf("%d<%d\n", numberone, numbertwo);
//    }*/
//   }
//    return  0;
//}

// 10.
//#include<stdio.h>
//
//int main(void)
//{
//    int num = 0;
//    num = printf("Hello world!");
//    printf("%d", num);
//    return 0;
//}

//11.
//#include<stdio.h>
//
//int main(void)
//{
//    int numbers = 0;
//    scanf("%d", &numbers);
//
//    printf("%d", (numbers / 12) * 4 + 2);
//    return 0;
//}

//12.
//#include<stdio.h>
//
//int main(void)
//{
//    char character = 0;
//    scanf("%c", &character);
//
//    if (character >= 65 && character <= 90 || character >= 97 && character <= 112)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//
//    return  0;
//}

//13.
//#include<stdio.h>
//
//int main(void)
//{
//    int num_one = 0;
//    int num_two = 0;
//    scanf("%d %d", &num_one, &num_two);
//
//    printf("%d %d", num_one / num_two, num_one % num_two);
//    return  0;
//}

//14.
//#include<stdio.h>
//
//int main(void)
//{
//    int number = 0;
//    scanf("%d", &number);
//
//    int i = 0;
//    for (i = 1; i <= 4; i++)
//    {
//        printf("%d", number % 10);
//        number /= 10;
//    }
//    return  0;
//}

//15.
//#include<stdio.h>
//#define numbers 5
//
//int main()
//{
//    int grades[numbers] = { 0 };
//    int i = 0;
//    for (i = 0; i < numbers; i++)
//    {
//        scanf("%d", grades + i);
//    }
//
//    int average = 0;
//    for (i = 0; i < numbers; i++)
//    {
//        average += *(grades + i);
//    }
//
//    printf("%.1f", average / 5.0);
//    return 0;
//}

//16.
//#include<stdio.h>
//
//int main(void)
//{
//    int numberone = 0;
//    int numbertwo = 0;
//
//    while (scanf("%d %d", &numberone, &numbertwo) != EOF)
//    {
//        if (numberone > numbertwo)
//        {
//            printf("%d>%d\n", numberone, numbertwo);
//        }
//        else if (numberone == numbertwo)
//        {
//            printf("%d=%d\n", numberone, numbertwo);
//        }
//        else if (numberone < numbertwo)
//        {
//            printf("%d<%d\n", numberone, numbertwo);
//        }
//    }
//    return  0;
//}

//17.
//#include <stdio.h>
//
//int main(void)
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//    
//    int hour = 0;
//    int minute = 0;
//    int second = 0;
//    hour = seconds / 3600;
//    minute = (seconds - (hour * 3600)) / 60;
//    second = (seconds - (hour * 3600)) - (minute * 60);
//
//    printf("%d %d %d", hour, minute, second);
//
//    return  0;
//}

//18.输出1-100之间的奇数
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//19.阶乘的相加
//#include<stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//
//	for (j = 1; j < n + 1; j++)
//	{
//		ret = 1;
//		for (i = 1; i < j + 1; i++)
//		{
//			ret *= i;
//		}
//
//		sum += ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//优化    
//#include<stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//
//	for (j = 1; j < n + 1; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}


//二分查找（折半查找）
//#include<stdio.h>
//#define SIZE 10
//
//
//int main(void)
//{
//	int number[SIZE] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
//
//	int target_number = 0;
//	printf("请输入目标值:");
//	scanf("%d", &target_number);
//
//	int middle = 0;
//	int left = 0;
//	int right = SIZE  - 1;
//	while (right >= left)
//	{
//		middle = left + ( ( right - left ) / 2 );
//
//		if ( target_number == number[middle] )
//		{
//			printf("该数在数组中的位置为:%d", middle);
//			break;
//		}
//		else if (target_number > number[middle])
//		{
//			left = middle + 1;
//		}
//		else if (target_number < number[middle])
//		{
//			right = middle - 1;
//		}
//	}
//	if (right < left)
//	{
//		printf("sorry,您想要查找的数在该数中不存在,请重新输入！");
//	}
//	
//	return  0;
//}

//实现关机程序 goto语句实现
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define SIZE 20
//
//int main(void)
//{
//	char target[] = "我是猪";
//	char input[SIZE] = { 0 };
//
//	system("shutdown -s -t 60");
//
//flag:
//	printf("请输入我是猪，否则你的电脑将在60秒后自动关机！");
//	scanf("%s", input);
//
//	if (0 == strcmp(input, target))
//	{
//		system("shutdown -a");
//		printf("已取消关机！");
//	}
//	else
//	{
//		goto flag;
//	}
//	return 0;
//}

//循环语句实现
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define SIZE 20
//
//int main(void)
//{
//	char target[] = "我是猪";
//	char input[SIZE] = { 0 };
//
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请输入我是猪，否则你的电脑将在60秒后自动关机！");
//		scanf("%s", input);
//
//		if (0 == strcmp(input, target))
//		{
//			system("shutdown -a");
//			printf("已取消关机！");
//			break;
//		}
//
//	}
//	
//	return 0;
//}

//实现猜数小游戏
//#include<stdio.h>
//#include<stdlib.h>
//
//void menu();
//void game();
//
//int main(void)
//{
//	int input = 0;
//
//	srand((unsigned int )time(NULL));  //重新设置随机数触发器
//
//	menu();
//
//	do
//	{
//		//system("cls");
//
//		printf("请做出你的选择:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:system("cls");
//			game();
//			system("cls");
//			printf("恭喜你！猜对了！\n");
//			menu();
//			break;
//		case 0:system("cls");
//			printf("游戏已退出！\n");
//			break;
//		default:system("cls");
//			printf("您输入错误了，请重新输入！\n");
//			menu();
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//void menu()
//{
//	printf("################################\n"
//		   "############ 1.start ###########\n"
//		   "############ 0.quit  ###########\n"
//		   "################################\n");
//}
//
//void game()
//{
//	int ret = (rand() % 100) + 1;      //产生1- 100之间的随机数
//
//	int input = 0;
//
//	while (1)
//	{
//		printf("请输入一个数:");
//		scanf("%d", &input);
//
//		if (ret == input)
//		{
//			break;
//		}
//		else if (ret > input)
//		{
//			printf("猜小了！\n");
//		}
//		else if (ret < input)
//		{
//			printf("猜大了！\n");
//		}
//	}
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include<windows.h>
//
//int main(void)
//{
//	char String_one[] = "Hello!bit";
//	char String_two[] = "#########";
//
//	int left = 0;
//	int right = sizeof(String_one) / sizeof(String_one[0]) - 2;  //字符串的结尾为'\0'
//	/*printf("%d", right);
//	printf("%c", String_one[right]);*/
//
//	while (left <= right)
//	{
//		String_two[left] = String_one[left];
//		String_two[right] = String_one[right];
//
//		Sleep(1000);     //暂停程序的执行已毫秒为单位，在使用的时候需要引入头文件windows.h
//		printf("%s\n", String_two);
//
//		left++;
//		right--;
//	}
//	return  0;
//}

//数9的个数
//#include<stdio.h>
//
//int main(void)
//{
//	int num = 9;
//	int sum = 0;
//
//	for (num = 9; num < 101; num += 10)
//	{
//		if (9 == num)
//		{
//			sum++;
//		}
//		else if(9 == (num / 10))
//		{
//			sum++;
//			if (9 == (num % 10))
//			{
//				sum++;
//			}
//		}
//		else if (9 == (num % 10))
//		{
//			sum++;
//		}
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//
//int main(void)
//{
//	double sum = 0;
//	int x = -1;
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		x *= -1;
//		sum += (1.0) * x / i;
//		//printf("%lf\n", sum);
//		
//	}
//
//	//printf("\n");
//	printf("%lf", sum);
//	return 0;
//}

//求最大值
//#include<stdio.h>
//#define SIZE 10
//
//int main(void)
//{
//	int number[SIZE] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", number + i);
//	}
//
//	int max = 0;
//	int temp = 0;
//	for (i = 1; i < SIZE; i++)
//	{
//		if (number[max] < number[i])
//		{
//			max = i;
//		}
//	}
//
//	printf("%d", number[max]);
//	return 0;
//}

//打印乘法口诀表
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d * %d = %d ", i , j , i * j);
//		}
//		printf("\n");
//	}
//	return  0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return  0;
//}

//写代码将三个整数数按从大到小输出。
//#include<stdio.h>
//#define SIZE 3
//
//int main(void)
//{
//	int number[SIZE] = { 0 };
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", number + i);
//	}
//	/*for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", number[i]);
//	}*/
//
//	int flag = 0;
//	int j = 0;
//	int temp = 0;
//	int max = 0;
//	for (i = 0; i < SIZE - 1; i++)
//	{
//		max = i;
//		flag = i;
//		for (j = i + 1; j < SIZE; j++)
//		{
//			if (number[max] < number[j])
//			{
//				max = j;
//			}
//		}
//
//		if (max != flag)
//		{
//			temp = number[flag];
//			number[flag] = number[max];
//			number[max] = temp;
//		}
//	}
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", number[i]);
//	}
//	return 0;
//}

//判断素数
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 100; i < 201; i++)
//	{
//		flag = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (0 == (i % j))
//			{
//				flag = 1;
//				break;
//			}
//		}
//
//		if (!flag)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return  0;
//}

//判断闰年
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//#include<stdio.h>
//
//int main(void)
//{
//	int number_one = 0;
//	int number_two = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &number_one , &number_two);
//
//	while (number_one % (number_two--) != 0)
//		;
//	printf("%d", number_two + 1);
//	return 0;
//}


//9月29日上课内容实现
//1.对strcpy库函数的使用
//#include<stdio.h>
//#include<string.h>
//#define SIZE 20
//
//int main(void)
//{
//	char String_one[SIZE] = { 0 };
//	char String_two[] = "Hello,bit!";
//
//	strcpy(String_one, String_two);
//
//	printf("%s", String_one);
//	return  0;
//}

//2.对库函数memset的使用
//#include<stdio.h>
//#include<string.h>
//#define SIZE 20 
//
//int main(void)
//{
//	char String[SIZE] = "Hello,bit!";
//
//	memset(String, 'X', 5);
//
//	printf("%s", String);
//	return  0;
//}

//3.函数实现两数交换
//#include<stdio.h>
//
//void Swap(int* , int* );
//
//int main(void)
//{
//	int number_one = 0;
//	int number_two = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &number_one, &number_two);
//
//	printf("交换前两数为:number_one=%d,number_two=%d\n", number_one,number_two);
//	Swap(&number_one, &number_two);
//	printf("交换后两数为:number_one=%d,number_two=%d\n", number_one,number_two);
//	return 0;
//}
//
//void Swap(int* number_one, int* number_two)
//{
//	int temp = 0;
//
//	temp = *number_two;
//	*number_two = *number_one;
//	*number_one = temp;
//}

//函数实现乘法表
//#include<stdio.h>
//
//void multiplication_table(int max);
//
//int main(void)
//{
//	int max = 0;
//	printf("请输入最大范围:");
//	scanf("%d", &max);
//
//	multiplication_table(max);
//	return  0;
//}
//
//void multiplication_table(int max)
//{
//	int i = 0; 
//	int j = 0;
//	for (i = 1; i < max + 1; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d * %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}

//函数实现判断闰年
//#include<stdio.h>
//
//void Leap_year(int year);
//
//int main(void)
//{
//	int year = 0;
//	printf("请输入一个年份:");
//	scanf("%d", &year);
//
//	Leap_year(year);
//	return 0;
//}
//
//void Leap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("该年是闰年！");
//	}
//	else
//	{
//		printf("该年不是闰年！");
//	}
//}

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//#include<stdio.h>
//
//int Prime_number(int);
//
//int main(void)
//{
//	for (int number = 100; number < 201; number++)
//	{
//		if (Prime_number(number))
//		{
//			printf("%d ", number);
//		}
//	}
//	return  0;
//}
//
//int Prime_number(int number)
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 2; i < number - 1; i++)
//	{
//		if (!(number % 2))
//		{
//			flag = 0;
//		}
//	}
//
//	return (flag) ? 1 : 0;
//}

//打印圣诞树
//#include<stdio.h>
//
//int main(void)
//{
//	char symbol = 0;
//	//printf("请输入一个符号:");
//	scanf("%c", &symbol);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i + 1; j++)
//		{
//			printf("%c ", symbol);
//		}
//		printf("\n");
//	}
//
//	return  0;
//}

//2022.10.2
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	system("shutdown -s -t 60");
//	return  0;
//}

//对用函数求素数的优化  讨论素数和合数的前提就是大于1的数
//#include<stdio.h>
//#include<math.h>
//
//int prime_number(int number);
//
//int main(void)
//{
//	int number = 0;
//	/*printf("请输入一个大于2的整数:");
//	scanf("%d", &number);*/
//
//	for (number = 1; number < 100; number++)
//	{
//
//		if (prime_number(number))
//		{
//			printf("%d是素数！\n", number);
//		}
//		else
//		{
//			printf("%d不是素数！\n", number);
//		}
//	}
//
//	return  0;
//}
//
//int prime_number(int number)
//{
//	if (2 == number)
//	{
//		return  1;
//	}
//	else if (1 == number)
//	{
//		return  0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 2; i < sqrt(number); i++)         //用来计算一个数的根号
//		{
//			if (number % i == 0)
//			{
//				return  0;
//			}
//		}
//
//		return  1;
//	}
//}

//对函数的封装
//#include<stdio.h>
//#include"add.h"
//#pragma comment(lib,"Adds.lib")
//
//int main(void)
//{
//	int number_one = 0;
//	int number_two = 0;
//	printf("请输入两个数:");
//	scanf("%d %d", &number_one, &number_two);
//
//	printf("两数和为:%d", Add(number_one, number_two));
//	return  0;
//}

//递归的简单实现
//打印一个四位数的每一位
//1.
//#include<stdio.h>
//
//void Print_each_one(int number);
//
//int main(void)
//{
//	int number = 0;
//	printf("请输入一个四位数:");
//	scanf("%d", &number);
//
//	Print_each_one(number);
//	return  0;
//}
//
////void Print_each_one(int number)
////{
////	if (number < 10)
////	{
////		printf("%d ", number);
////	}
////	else
////	{
////		Print_each_one(number / 10);
////		printf("%d ", number % 10);
////	}
////}
////2.
//void Print_each_one(int number)
//{
//	if (number > 9)
//	{
//		Print_each_one(number / 10);
//	}
//	printf("%d ", number % 10);
//}


//递归和非递归分别实现求n的阶乘
//递归
//#include<stdio.h>
//
//int Factorial(int number);
//
//int main(void)
//{
//	int number = 0;
//	printf("请输入一个数:");
//	scanf("%d", &number);
//
//	printf("该数的阶乘为:%d", Factorial(number));;
//	return  0;
//}
//
//int Factorial(int number)
//{
//	if (1 == number)
//	{
//		return  1;
//	}
//	else if (number > 1)
//	{
//		return  (number * Factorial(number - 1));
//	}
//}


//非递归
//#include<stdio.h>
//
//int main(void)
//{
//	int number = 0;
//	printf("请输入一个数:");
//	scanf("%d", &number);
//
//	int i = 0;
//	int factorial = 1;
//	for (i = 1; i < number + 1; i++)
//	{
//		factorial *= i;
//	}
//
//	printf("阶乘为:%d", factorial);
//	return 0;
//}

//2022.10.3
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	system("shutdown -s -t 60");
//	return  0;
//}

//预处理宏的复习
//#include<stdio.h>
//#define ADD(x,y) (x + y)
//
//int main(void)
//{
//	int i_number_one = 0;
//	int i_number_two = 0;
//
//	i_number_one = 20;
//	i_number_two = 30;
//
//	printf("%d", ADD(i_number_one, i_number_two));
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//    int i_a = 0;
//    int i_b = 0;
//    scanf("a=%d,b=%d", &i_a, &i_b);
//
//    int i_temp = 0;
//    i_temp = i_a;
//    i_a = i_b;
//    i_b = i_temp;
//
//    printf("a=%d,b=%d", i_a, i_b);
//    return  0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	char c_character = 0;
//	scanf("%c", &c_character);
//
//	printf("%d", c_character);
//	return  0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//    int a = 40;
//    int c = 212;
//
//    printf("%d", ((-8 + 22) * a - 10 + c / 2));
//    return  0;
//}

//将一个四位数，反向输出。
//#include<stdio.h>
//
//void Reverse(int i_number);
//
//int main(void)
//{
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    Reverse(i_number);
//    return  0;
//}
//
//void Reverse(int i_number)
//{
//    if (i_number < 9)
//    {
//        printf("%d", i_number);
//    }
//    else
//    {
//        printf("%d", i_number % 10);
//        Reverse(i_number / 10);
//    }
//}

//#include<stdio.h>

//int main(void)
//{
//    int i_number_one = 0;
//    int i_number_two = 0;
//    scanf("%d %d", &i_number_one, &i_number_two);
//
//    printf("%d", (i_number_one + i_number_two) % 100);
//    return  0;
//}

//2022.10.4
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	system("shutdown -s -t 60");
//	return 0;
//}

//#include<stdio.h>
//#define  Scond 31560000
//
//int main(void)
//{
//    long long int i_age = 0;
//    scanf("%lld", &i_age);
//
//    //int i_age = 0;
//    //scanf("%d", &i_age);
//
//    //printf("%lld\n", i_age * (long long int)Scond);
//    printf("%lld", i_age * Scond);
//    //printf("%d", Scond);
//    return  0;
//}

//
//#include <stdio.h>
//
//int main(void)
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//
//    int hour = 0;
//    int minute = 0;
//    int second = 0;
//    hour = seconds / 3600;
//    minute = (seconds - (hour * 3600)) / 60;
//    second = (seconds - (hour * 3600)) - (minute * 60);
//
//    printf("%d %d %d", hour, minute, second);
//
//    return  0;
//}

//依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩。
//#include<stdio.h>
//
//int main(void)
//{
//    double d_score_one = 0;
//    double d_score_two = 0;
//    double d_score_three = 0;
//    scanf("%lf %lf %lf", &d_score_one, &d_score_two, &d_score_three);
//
//    printf("%.2lf", d_score_one + d_score_two + d_score_three);
//    printf(" %.2lf", (d_score_one + d_score_two + d_score_three) / 3);
//    return  0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//    double d_wight = 0.0;
//    float f_hight = 0.0;
//    scanf("%lf %f", &d_wight, &f_hight);
//
//    printf("%0.2f", (d_wight) / ((f_hight / 100) * (f_hight / 100)));
//    return  0;
//}

//递归实现n的k次方
//#include<stdio.h>
//
//int Cumulative_multiplication(int i_number, int i_k);
//
//int main(void)
//{
//	int i_number = 0;
//	int i_k = 0;
//	printf("请输入一个数和多少次方:");
//	scanf("%d %d", &i_number, &i_k);
//
//	int i_outcome_number = 0;
//	i_outcome_number = Cumulative_multiplication(i_number, i_k);
//	printf("%d", i_outcome_number);
//	return  0;
//}
//
//int Cumulative_multiplication(int i_number, int i_k)
//{
//	if (1 == i_k)
//	{
//		return  i_number;
//	}
//	else if (0 == i_k)
//	{
//		return  1;
//	}
//	else
//	{
//		return i_number * Cumulative_multiplication(i_number, i_k - 1);
//	}
//}

//计算一个数的每位之和（递归实现）
//#include<stdio.h>
//
//int DigitSum(unsigned int u_number);
//
//int main(void)
//{
//	unsigned int u_number = 0;
//	printf("请输入一个非负整数:");
//	scanf("%u", &u_number);
//	//printf("%u", u_number);
//
//	int i_sum = 0;
//	i_sum = DigitSum(u_number);
//
//	printf("%d", i_sum);
//	return  0;
//}
//
//int DigitSum(unsigned int u_number)
//{
//	if (u_number < 10)
//	{
//		return u_number;
//	}
//	else
//	{
//		return  (u_number % 10) + DigitSum(u_number / 10);
//	}
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//#include<stdio.h>
//
//int main(void)
//{
//	char c_String[] = "abcdefg";
//	int i_length = sizeof(c_String) / sizeof(c_String[0]);
//
//	printf("改变之前的数组为:%s", c_String);
//	Reverse_string(c_String, i_length);
//	printf("改变之后的数组为:%s",c_String);
//	return  0;
//}
//
//void Reverse_string(char* c_String[], int i_length)
//{
//
//}

//求字符串长度
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char c_string[] = "abc";
//	int i_length = 0;
//	i_length = strlen(c_string);
//	
//	printf("%d", i_length);
//	return  0;
//}

//模拟实现strlen
//#include <stdio.h>
//
//int My_strlen(char*);
//
//int main(void)
//{
//	char c_string[] = "abc";
//	int i_length = 0;
//	i_length = My_strlen(c_string);
//
//	printf("%d", i_length);
//	return  0;
//}
//
//int My_strlen(char* c_string)
//{
//	int i_count = 0;
//
//	while (*c_string++)
//	{
//		i_count++;
//	}
//
//	return  i_count;
//}
//编写一个函数不可以创建临时变量，求字符串的长度
//#include<stdio.h>
//
//int My_strlen(char* c_string);
//
//int main(void)
//{
//	char c_string[] = "abc";
//	int i_length = 0;
//	i_length = My_strlen(c_string);
//
//	printf("%d", i_length);
//	return  0;
//}
//
//int My_strlen(char* c_string)
//{
//	if (*c_string)
//	{
//		return  1 + My_strlen(c_string + 1);
//	}
//	else
//	{
//		return  0;
//	}
//}

//递归实现求n的阶乘
//#include <stdio.h>
//
//int Factorial(int i_number);
//
//int main(void)
//{
//	int i_number = 0;
//	printf("请输入一个你想要求阶乘的整数:");
//	scanf("%d", &i_number);
//
//	int i_factorial = 0;
//	i_factorial = Factorial(i_number);
//	printf("%d", i_factorial);
//
//	return 0;
//}
//
//int Factorial(int i_number)
//{
//	if (1 == i_number)
//	{
//		return 1;
//	}
//	else
//	{
//		return  i_number * Factorial(i_number - 1);
//	}
//}

//非递归实现
//#include <stdio.h>
//
//int Factorial(int i_number);
//
//int main(void)
//{
//	int i_number = 0;
//	printf("请输入一个你想要求阶乘的数:");
//	scanf("%d", &i_number);
//
//	int i_factorial = 0;
//	i_factorial = Factorial(i_number);
//	printf("%d", i_factorial);
//
//	return 0;
//}
//
//int Factorial(int i_number)
//{
//	int i_factorial = 1;
//	int i = 1;
//	for (i = 1; i < i_number + 1; i++)
//	{
//		i_factorial *= i;
//	}
//
//	return  i_factorial;
//}

//递归实现斐波那契数列
//#include <stdio.h>
//
//int Fibonacci(int i_num);
//
//int main(void)
//{
//	int i_num = 0;
//	printf("请输入您想要查找的斐波那契数列的位数:");
//	scanf("%d", &i_num);
//
//	int i_number = 0;
//	i_number = Fibonacci(i_num);
//	printf("在斐波那契数列中第%d位的数为:%d", i_num, i_number);
//	return 0;
//}
//
//int Fibonacci(int i_num)
//{
//	if (i_num <= 2)
//	{
//		return  1;
//	}
//	else if (i_num > 2)
//	{
//		return  Fibonacci(i_num - 1) + Fibonacci(i_num - 2);
//	}
//}

//循环实现
//#include <stdio.h>
//
//int Fibonacci(int i_num);
//
//int main(void)
//{
//	int i_num = 0;
//	printf("请输入您想要在斐波那契数列中查找的位数:");
//	scanf("%d", &i_num);
//
//	int i_number = 0;
//	i_number = Fibonacci(i_num);
//    printf("%d", i_number);
//
//	return 0;
//}
//
//int Fibonacci(int i_num)
//{
//	int i_a = 1;
//	int i_b = 1;
//	int i_c = 1;
//
//	while(i_num > 2)
//	{
//		i_c = i_a + i_b;
//		i_a = i_b;
//		i_b = i_c;
//		i_num--;
//	}
//
//	return i_c;
//}
