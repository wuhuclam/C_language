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


//#include <stdio.h>
//
//int Add(int i_number_one, int i_number_two);
//
//int main(void)
//{
//	int i_number_one = 20;
//	int i_number_two = 30;
//	
//	int i_sum = 0;
//	i_sum = Add(i_number_one, i_number_two);
//
//	printf("%d", i_sum);
//	return  0;
//}
//
//int Add(int i_number_one, int i_number_two)
//{
//	int i_sum = 0;
//	i_sum = i_number_one + i_number_two;
//
//	return  i_sum;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	system("shutdown -s -t 60");
//	return  0;
//}


//用冒泡排序将一个无序数列排序，然后在查找数列中的值
//#include <stdio.h>
//#define SIZE 10
//
//void Bubbling_sorting(int* ik_sequence, int i_size);
//int Two_point_lookup(int i_number, int* ik_sequence, int i_size, int* address);
//
//int main(void)
//{
//	//对数列的初始化
//	int i_sequence[SIZE] = { 0 };
//	printf("请输入10个整数:");
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", i_sequence + i);
//	}
//
//	//对数列进行排序
//	Bubbling_sorting(i_sequence, SIZE);
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", *(i_sequence + i));
//	}
//
//	//对数列中的数进行查找
//	int i_number = 0;
//	printf("请输入您想要查找的数:");
//	scanf("%d", &i_number);
//	int i_flag = 0;
//	int i_address = 0;
//	i_flag = Two_point_lookup(i_number, i_sequence, SIZE, &i_address);
//
//	//对结果的输出
//	if (i_flag)
//	{
//		printf("您想要查找的数在该数列中存在，位置为%d!\n", i_address);
//	}
//	else
//	{
//		printf("抱歉您想要查找的数在该数列中不存在!\n");
//	}
//
//	return  0;
//}
//
//void Bubbling_sorting(int* ik_sequence, int i_size)
//{
//	int i_i = 0;
//	int i_j = 0;
//	int i_temp = 0;
//	for (i_i = i_size - 1; i_i > 0; i_i--)
//	{
//		for (i_j = 0; i_j < i_i; i_j++)
//		{
//			if(ik_sequence[i_j] > ik_sequence[i_j + 1])
//			{
//				i_temp = ik_sequence[i_j];
//				ik_sequence[i_j] = ik_sequence[i_j + 1];
//				ik_sequence[i_j + 1] = i_temp;
//			}
//		}
//	}
//}
//
//int Two_point_lookup(int i_number, int* ik_sequence, int i_size, int* address)
//{
//	int i_left = 0;
//	int i_right = i_size - 1;
//	int i_mid = i_left + ((i_right - i_left) / 2);
//
//	while (i_left <= i_right)
//	{
//		i_mid = i_left + ((i_right - i_left) / 2);
//		if (i_number == ik_sequence[i_mid])
//		{
//			*address = i_mid;
//			return  1;
//		}
//		else if(i_number > ik_sequence[i_mid])
//		{
//			i_left = i_mid + 1;
//		}
//		else if (i_number < ik_sequence[i_mid])
//		{
//			i_right = i_mid - 1;
//		}
//	}
//
//	return  0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//#include<stdio.h>
//
//void Reverse_string(char c_String[], int i_left, int i_right);
//
//int main(void)
//{
//	char c_String[] = "abcdefg";
//	int i_length = sizeof(c_String) / sizeof(c_String[0]);
//
//	printf("改变之前的数组为:%s\n", c_String);
//	int i_left = 0;
//	int i_right = i_length - 2;
//	Reverse_string(c_String, i_left, i_right);
//	printf("改变之后的数组为:%s\n",c_String);
//	return  0;
//}
//
//void Reverse_string(char c_String[], int i_left, int i_right)
//{
//	char c_temp = 0;
//	if (i_left > i_right)
//	{
//
//	}
//	else if (i_left <= i_right)
//	{
//		c_temp = c_String[i_left];
//		c_String[i_left] = *(c_String + i_right);
//		*(c_String + i_right) = c_temp;
//		Reverse_string(c_String, i_left + 1, i_right - 1);
//	}
//}

//递归和非递归分别实现strlen
//非递归
//#include <stdio.h>
//
//int My_strlen(char c_string[]);
//
//int main(void)
//{
//	char c_string[] = "abcdefg";
//
//	//模拟实现strlen
//	int i_length = 0;
//	i_length = My_strlen(c_string);
//
//	//打印结果
//	printf("该字符串的长度为:%d", i_length);
//	return  0;
//}
//
//int My_strlen(char c_string[])
//{
//	int i_count = 0;
//	while (*c_string)
//	{
//		i_count++;
//		c_string += 1;
//	 }
//
//	return  i_count;
//}

//递归
//int My_strlen(char c_string[])
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

//小乐乐求和  在计算的时候注意数据溢出
//#include <stdio.h>
//
//long long int Summation(int i_number);
//
//int main(void)
//{
//    //从键盘中获取一个数
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //对该数进行求和数的计算
//    long long int i_sum = 0;
//    i_sum = Summation(i_number);
//
//    //输出结果
//    printf("%lld", i_sum);
//    return  0;
//}
//
////求和数函数
//long long int Summation(int i_number)
//{
//    long long int i_i = 0;
//    long long int i_sum = 0;
//    for (i_i = 0; i_i < i_number + 1; i_i++)
//    {
//        i_sum += i_i;
//    }
//
//    return  i_sum;
//}

//N个数之和
//#include <stdio.h>
//
//int main(void)
//{
//    //获取宽度
//    int i_size = 0;
//    scanf("%d", &i_size);
//    //获取相应宽度的数
//    int i_number[i_size];
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//    //求和
//    int i_sum = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        i_sum += i_number[i_i];
//    }
//    //输出结果
//    printf("%d", i_sum);
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	//printf("%.2d", 2);
//	//printf("%.2s", "abcde");
//	printf("% 2d", -2);
//	return  0;
//}

//#include <stdio.h>
//
//int Factorial(int i_number); //阶乘函数的声明
//
//int main(void)
//{
//	//从键盘中获取想要求阶乘的数
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//用Factorial()函数实现对获取的数的求阶乘
//	int i_factorial = 0;
//	i_factorial = Factorial(i_number);
//
//	//输出结果
//	printf("%d", i_factorial);
//
//	return  0;
//}
//
////求阶乘函数的实现
//int Factorial(int i_number)
//{
//	printf("%d\n", i_number);
//	return  i_number * Factorial(i_number + 1);
//}

//2022.10.6
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	system("shutdown -s -t 60");
//	return  0;
//}

//海伦公式运用
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//    //获取三角形的三边长
//    float f_length_a = 0;
//    float f_length_b = 0;
//    float f_length_c = 0;
//    scanf("%f %f %f", &f_length_a, &f_length_b, &f_length_c);
//
//    //计算三角形的边长和面积
//    float f_circumference = f_length_a + f_length_b + f_length_c;
//    float f_area = 0.0f;
//    float f_p = 0.0;
//    f_p = f_circumference / 2;
//    //float f_x = f_p * (f_p - f_length_a) * (f_p - f_length_b) * (f_p - f_length_c);
//    f_area = sqrt(f_p * (f_p - f_length_a) * (f_p - f_length_b) * (f_p - f_length_c));
//    printf("circumference=%.2f area=%.2lf", f_circumference, f_area);
//    return  0;
//}

//计算球体的体积
//#include <stdio.h>
//#define π 3.1415926
//
//int main(void)
//{
//    获取球体的半径
//    double d_radius = 0.0;
//    scanf("%lf", &d_radius);
//
//    计算球体的体积
//    double d_volume = 0.0;
//    d_volume = (4.0 / 3.0) * π * (d_radius * d_radius * d_radius);
//
//    printf("%.3lf", d_volume);
//    return  0;
//}

//大小写转换
//#include <stdio.h>
//
//int main(void)
//{
//    //获取字符
//    char c_character = 0;
//
//    //获取多行字符
//    while (scanf("%c", &c_character) != EOF)          // EOF 是明示常量它的预处理指令定义在stdio,h头文件中
//    {
//        if (c_character >= 65 && c_character <= 90)
//        {
//            printf("%c", c_character + 32);
//        }
//        else
//        {
//            printf("%c", c_character);
//        }
//    }
//    return  0;
//}

//不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。
//#include <stdio.h>
//
//int main(void)
//{
//    //获取n次方
//    int i_num = 0;
//    scanf("%d", &i_num);
//
//    //输出结果
//    printf("%d", 1 << i_num);
//    return  0;
//}


//KiKi和酸奶
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一箱酸奶的盒数i_n和i_h分钟和经过i_m分钟
//    int i_n = 0;
//    int i_h = 0;
//    int i_m = 0;
//
//    //获取数值并计算剩余的盒数
//    int i_number = 0;
//    while (scanf("%d %d %d", &i_n, &i_h, &i_m) != EOF)
//    {
//        i_number = 0;
//        if (i_m > i_n * i_h)
//        {
//            continue;
//        }
//        else
//        {
//            i_number = i_m / i_h;
//            //printf("%d", i_number);
//            if (i_m % i_h)
//            {
//                i_number++;
//            }
//        }
//
//        //输出结果
//        //printf("%d", i_m % i_h);
//        printf("%d", i_n - i_number);
//    }
//
//
//    return 0;
//}

//发布信息
//#include<stdio.h>
//
//int main(void)
//{
//    printf("I lost my cellphone!");
//    return  0;
//}

//输出学生信息
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//
//
//    return 0;
//}

//计算平均成绩
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

//进制A+B
//#include <stdio.h>
//
//int main(void)
//{
//    //声明两个变量
//    int i_number_one = 0;
//    int i_number_two = 0;
//
//    //获取数值
//    scanf("%x %o", &i_number_one, &i_number_two);
//
//    //输出结果
//    printf("%d", i_number_one + i_number_two);
//
//    return  0;
//}

//对memset函数的复习
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	//定义一个字符串
//	char c_string[] = "Hello,bit";
//
//	//打印更改前的字符串和更改后的字符串做对比
//	printf("%s\n", c_string);
//
//	//调用memset函数
//	memset(c_string, '#', 5);
//
//	//打印结果
//	printf("%s\n", c_string);
//	return 0;
//}

//#pragma comment("lib,ADD.lib")

//#include <stdio.h>
//#include <windows.h>
//
//int main(void)
//{
//	Sleep(3600);
//	printf("s");
//	system("shutdown -s -t 60");
//	return  0;
//}

//判断字母
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个字符变量
//    char c_character = 0;
//
//    //获取一个字符
//    scanf("%c", &c_character);
//
//    if (c_character >= 65 && c_character <= 90 || c_character >= 97 && c_character <= 112)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return  0;
//}

//健康评估
//#include <stdio.h>
//#define STANDARD_ONE 18.5
//#define STANDARD_TWO 23.9
//
//int main(void)
//{
//    //声明两个float类型的变量 并从键盘中获取值
//    float f_weight = 0.0f;
//    float f_length = 0.0f;
//    scanf("%f %f", &f_weight, &f_length);
//
//    //声明体重指数变量并完成体重指数的计算
//    float f_bim = 0.0f;
//    f_bim = f_weight / ((f_length) * (f_length));
//
//    //不直接用两个浮点数来比较大小，可以通过减法来实现
//    if ((f_bim - STANDARD_ONE) >= 0 && (STANDARD_TWO - f_bim) >= 0)
//    {
//        printf("Normal");
//    }
//    else
//    {
//        printf("Abnormal");
//    }
//
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char c_string[] = "abcd";
//
//	return  0;
//}

//三子棋的实现
//#include "Backgammon.h"
//
//int main(void)
//{
//	//声明一个变量用来接受用户的选择
//	int i_input = 0;
//
//	//设置随机数触发器
//	srand((unsigned int)time(NULL));
//
//	//用户选择逻辑的实现
//	do
//	{
//		system("cls");
//		//获取用户的选择
//		Meum();
//		printf("用户请做出您的选择:");
//		scanf("%d", &i_input);
//
//		//根据获取的结果得出相应的结果
//		switch (i_input)
//		{
//		case 1:system("cls");
//			Game();
//			break;
//		case 0:printf("游戏结束!\n");
//			break;
//		default:printf("您选择错误请重新选择!\n");
//			break;
//		}
//	} while (i_input);
//	return  0;
//}

//交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include <stdio.h>
//
//int main(void)
//{
//	//声明两个带交换的字符串
//	char c_string_one[] = "abcdefg";
//	char c_string_two[] = "hijklno";
//
//	//交换前
//	printf("c_string_one:%s\n", c_string_one);
//	printf("c_string_two:%s\n", c_string_two);
//
//	//交换
//	int i_length = 0;
//	i_length = sizeof(c_string_one) / sizeof(c_string_one[0]);
//	//printf("%d", i_length);
//	int i_i = 0;
//	char c_temp = 0;
//	for (i_i = 0; i_i < i_length; i_i++)
//	{
//		c_temp = c_string_one[i_i];
//		c_string_one[i_i] = c_string_two[i_i];
//		c_string_two[i_i] = c_temp;
//	}
//
//	printf("\n");
//	//交换后
//	printf("c_string_one:%s\n", c_string_one);
//	printf("c_string_two:%s\n", c_string_two);
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

//#include <stdio.h>
//
//#define SIZE 10
//
//void Init(int* i_number);
//void Print(int* i_number);
//void Reverse(int* i_number);
//
//int main(void)
//{
//	//声明一个整形数组
//	int i_number[SIZE] = { 0 };
//
//	//对数组进行初始化
//	Init(i_number);
//
//	int i_i = 0;
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		scanf("%d", i_number + i_i);
//	}
//		 
//	//用函数实现对整形数组的打印
//	Print(i_number);
//
//	//函数实现数组的逆置
//	Reverse(i_number);
//
//	Print(i_number);
//	return  0;
//}
//
////初始化函数的实现
//void Init(int* i_number)
//{
//	//声明一个变量用于对数组的初始化
//	int i_i = 0;
//
//	//开始初始化
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		i_number[i_i] = 0;
//	}
//}
//
////打印函数的实现
//void Print(int* i_number)
//{
//	//声明一个变量用于打印数组
//	int i_i = 0;
//
//	//完成打印的实现
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		printf("%d ", i_number[i_i]);
//	}
//	printf("\n");
//}
//
////逆置函数的实现
//void Reverse(int* i_number)
//{
//	//声明三个变量一个用于for循环一个用于获取中间值一个作为中间值
//	int i_i = 0;
//	int i_mid = 4;
//	int i_temp = 0;
//
//	for (i_i = 0; i_i < 5; i_i++)
//	{
//		i_temp = i_number[i_i];
//		i_number[i_i] = i_number[SIZE - i_i - 1];
//		i_number[SIZE - i_i - 1] = i_temp;
//	}
//}

//用冒泡排序将一个无序数列排序，然后在查找数列中的值
//#include <stdio.h>
//#define SIZE 10
//
//void Bubbling_sorting(int* ik_sequence, int i_size);
//int Two_point_lookup(int i_number, int* ik_sequence, int i_size, int* address);
//
//int main(void)
//{
//	//对数列的初始化
//	int i_sequence[SIZE] = { 0 };
//	printf("请输入10个整数:");
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", i_sequence + i);
//	}
//
//	//对数列进行排序
//	Bubbling_sorting(i_sequence, SIZE);
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", *(i_sequence + i));
//	}
//
//	//对数列中的数进行查找
//	//int i_number = 0;
//	//printf("请输入您想要查找的数:");
//	//scanf("%d", &i_number);
//	//int i_flag = 0;
//	//int i_address = 0;
//	//i_flag = Two_point_lookup(i_number, i_sequence, SIZE, &i_address);
//
//	////对结果的输出
//	//if (i_flag)
//	//{
//	//	printf("您想要查找的数在该数列中存在，位置为%d!\n", i_address);
//	//}
//	//else
//	//{
//	//	printf("抱歉您想要查找的数在该数列中不存在!\n");
//	//}
//
//	return  0;
//}
//
//void Bubbling_sorting(int* ik_sequence, int i_size)
//{
//	int i_i = 0;
//	int i_j = 0;
//	int i_temp = 0;
//	for (i_i = i_size - 1; i_i > 0; i_i--)
//	{
//		for (i_j = 0; i_j < i_i; i_j++)
//		{
//			if(ik_sequence[i_j] > ik_sequence[i_j + 1])
//			{
//				i_temp = ik_sequence[i_j];
//				ik_sequence[i_j] = ik_sequence[i_j + 1];
//				ik_sequence[i_j + 1] = i_temp;
//			}
//		}
//	}
//}
//
//int Two_point_lookup(int i_number, int* ik_sequence, int i_size, int* address)
//{
//	int i_left = 0;
//	int i_right = i_size - 1;
//	int i_mid = i_left + ((i_right - i_left) / 2);
//
//	while (i_left <= i_right)
//	{
//		i_mid = i_left + ((i_right - i_left) / 2);
//		if (i_number == ik_sequence[i_mid])
//		{
//			*address = i_mid;
//			return  1;
//		}
//		else if(i_number > ik_sequence[i_mid])
//		{
//			i_left = i_mid + 1;
//		}
//		else if (i_number < ik_sequence[i_mid])
//		{
//			i_right = i_mid - 1;
//		}
//	}
//
//	return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //声明两个变量作为二维变长数组的行和列的大小并获取数值
//    int i_n = 0;
//    int i_m = 0;
//    scanf("%d %d", &i_n, &i_m);
//
//    //声明一个变长数组，变长数组不可以初始化
//    int i_i = 0;
//    int i_j = 0;
//    int i_number[i_n][i_m];
//    for (i_i = 0; i_i < i_n; i_i++)
//    {
//        for (i_j = 0; i_i < i_m; i_j++)
//        {
//            scanf("%d", &i_number[i_i][i_j]);
//        }
//    }
//
//    //求和
//    int i_sum = 0;
//    for (i_i = 0; i_i < i_n; i_i++)
//    {
//        for (i_j = 0; i_i < i_m; i_j++)
//        {
//            i_sum += i_number[i_i][i_j];
//        }
//    }
//
//    //输出结果
//    printf("%d", i_sum);
//    return  0;
//}

//#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	system("shutdown -s -t 240");
//	return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	printf("abcd\
//               cde");
//	return  0;											
//}

//不允许创建临时变量，交换两个整数的内容
//#include <stdio.h>
//
//int main(void)
//{
//	int i_number_one = 20;
//	int i_number_two = 30;
//
//	printf("交换前两个变量分别为:\n");
//	printf("i_number_one = %d, i_number_two = %d\n", i_number_one,i_number_two);
//
//	i_number_one = i_number_one ^ i_number_two;
//	i_number_two = i_number_one ^ i_number_two;
//	i_number_one = i_number_one ^ i_number_two;
//
//	printf("交换后两个变量分别为:\n");
//	printf("i_number_one = %d, i_number_two = %d\n", i_number_one, i_number_two);
//	return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //声明两个变量并获取值
//    int i_number_one = 0;
//    int i_number_two = 0;
//    scanf("%d %d", &i_number_one, &i_number_two);
//
//    //计算两个变量中不同位的个数
//    int i_xor = 0;
//    i_xor = i_number_one ^ i_number_two;
//    int i_count = 0;
//    int i_i = 0;
//    for (i_i = 0; i_i < 32; i_i++)
//    {
//        i_count += (1 & (i_xor >> i_i));
//    }
//
//    printf("%d", i_count);
//    return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用于for循环
//    int i_i = 0;
//
//    //开始判断
//    //声明两个一个用来记录商一个用来记录余数
//    int i_business = 0;
//    int i_residual = 0;
//    //声明一个变量用于内部循环
//    int i_j = 0;
//    //声明一个变量用来记录和
//    int i_sum = 0;
//    for (i_i = 10000; i_i < 100000; i_i++)
//    {
//        //printf("%d ", i_i);
//        //i_i = 1461;
//        i_sum = 0;
//        for (i_j = 10000; i_j > 1; i_j /= 10)
//        {
//            //printf("%d ", i_j);
//            i_business = i_i / i_j;
//            i_residual = i_i % i_j;
//            i_sum += i_business * i_residual;
//            //printf("%d ", i_sum);
//        }
//        //printf("%d", i_sum);
//        //printf("\n");
//
//        if (i_i == i_sum)
//        {
//            printf("%d \n", i_i);
//            //break;
//        }
//    }
//    return  0;
//}

//冒泡排序的应用
//#include <stdio.h>
//
//void Bubbling_sorting(int* i_score, int i_size);
//
//int main(void)
//{
//    //创建一个变量用来做变长数组的长度并获取数值
//    int i_size = 0;
//    scanf("%d ", &i_size);
//
//    //声明一个变量用于for循环
//    int i_i = 0;
//    int i_score[i_size];  //变长数组不可以初始化，变长数组的使用一定是要编译器支持c99的
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", i_score + i_i);
//    }
//
//    //排序(冒泡排序)
//    Bubbling_sorting(i_score, i_size);
//
//    //输出前五名的成绩
//    for (i_i = 0; i_i < 5; i_i++)
//    {
//        printf("%d ", i_score[i_i]);
//    }
//    return  0;
//}
//
////冒泡排序的实现
//void Bubbling_sorting(int* i_score, int i_size)
//{
//    //声明两个变量用于for循环
//    int i_i = 0;
//    int i_j = 0;
//    int i_temp = 0;
//    for (i_i = i_size - 1; i_i > 0; i_i--)
//    {
//        for (i_j = 0; i_j < i_i; i_j++)
//        {
//            if (i_score[i_j] < i_score[i_j + 1])
//            {
//                i_temp = i_score[i_j];
//                i_score[i_j] = i_score[i_j + 1];
//                i_score[i_j + 1] = i_temp;
//            }
//        }
//    }
//}

//票数统计
//#include <stdio.h>
//
//#define SIZE 1000
//
//int main(void)
//{
//    //声明一个投票数组
//    char c_tickets[SIZE] = { 0 };
//
//    //开始投票
//    char c_ticket = 0;
//    int i_i = 0;
//    while ((c_ticket = getchar()) != '0')
//    {
//        c_tickets[i_i++] = c_ticket;
//    }
//    c_tickets[i_i] = '0';
//    //统计结果
//    i_i = 0;
//    int i_count_A = 0;
//    int i_count_B = 0;
//    while (c_tickets[i_i] != '0')
//    {
//        if (c_tickets[i_i] == 'A')
//        {
//            i_count_A++;
//        }
//        else if (c_tickets[i_i] == 'B')
//        {
//            i_count_B++;
//        }
//        i_i++;
//    }
//
//    //输出结果
//    if (i_count_A == i_count_B)
//    {
//        printf("E");
//    }
//    else if (i_count_A < i_count_B)
//    {
//        printf("B");
//    }
//    else if (i_count_A > i_count_B)
//    {
//        printf("A");
//    }
//    return  0;
//}

//你是天才吗？
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用于接收智商的数值
//    int i_uotient = 0;
//    scanf("%d", &i_uotient);
//
//    //进行判断
//    if (140 <= i_uotient)
//    {
//        printf("Genius");
//    }
//
//    return  0;
//}

//完美成绩
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量来表示成绩
//    int i_score = 0;
//    scanf("%d", &i_score);
//
//    //进行判断
//    if (i_score >= 90 && i_score <= 100)
//    {
//        printf("Perfect");
//    }
//
//    return  0;
//}

//及格分数
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用来接收成绩
//    int i_score = 0;
//
//    //多行输入并判断
//    while ((scanf("%d", &i_score)) != EOF)
//    {
//        if (60 <= i_score)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//    }
//    return  0;
//}

//判断整数奇偶性
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用于接收数值
//    int i_number = 0;
//
//    //多行输入并判断
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        if (0 == (i_number % 2))
//        {
//            printf("Even\n");
//        }
//        else
//        {
//            printf("Odd\n");
//        }
//    }
//    return  0;
//}

//最高分数
//#include <stdio.h>
//
//int main(void)
//{
//    //声明三个变量用来接收各科的成绩
//    int i_score_one = 0;
//    int i_score_two = 0;
//    int i_score_three = 0;
//    scanf("%d %d %d", &i_score_one, &i_score_two, &i_score_three);
//
//    //声明一个变量表三科成绩中的最大值
//    int i_max = i_score_one;
//
//    //进行判断
//    //声明一个变量用来是实现两个值的交换
//    int i_temp = 0;
//    if (i_max < i_score_two)
//    {
//        i_max = i_score_two;
//    }
//
//    if (i_max < i_score_three)
//    {
//        i_max = i_score_three;
//    }
//
//    //输出结果
//    printf("%d", i_max);
//    return  0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int temp = 0;
//    char crr;
//    char vowel[10] = { 'a','A','e','E','i','I','o','O','u','U' };
//    while (scanf("%c", &crr) != EOF)
//    {
//        if (crr != '\n')
//        {
//            for (temp = 0; temp < 10; temp++)
//            {
//                if (crr == vowel[temp])
//                {
//                    printf("Vowel\n");
//                    break;
//                }
//            }
//            if (temp == 10)
//            {
//                printf("Consonant\n");
//            }
//        }
//    }
//    return 0;

//青蛙跳台阶问题
//#include <stdio.h>
//
//int Manner(int i_number);
//
//int main(void)
//{
//    //声明一个变量用来获取台阶的总数
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //计算上楼梯的方式的数量
//    int i_manner = 0;
//    i_manner = Manner(i_number);
//
//    //输出结果
//    printf("%d", i_manner);
//    return  0;
//}
//
//int Manner(int i_number)
//{
//    if (1 == i_number)
//    {
//        return  1;
//    }
//    else if (2 == i_number)
//    {
//        return 2;
//    }
//    else if (i_number > 2)
//    {
//        return Manner(i_number - 1) + Manner(i_number - 2);
//    }
//}

//删除数组中的指定元素
//#include <stdio.h>
//
//int  Delete(int* i_number, int i_flag, int i_size);
//void Deletes(int* i_number, int i_i, int i_size);
//
//int main(void)
//{
//    //声明一个变量用于接受变长数组的长度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //声明一个变长数组，变长数组不可以初始化，只有支持从c99的编译器才支持变长数组
//    int i_number[i_size];
//
//    //对变长数组赋初值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", i_number + i_i);
//    }
//
//    //获取想要删除的数值
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //删除
//    int i_count = 0;   //用来表示删除的元素的个数
//    i_count = Delete(i_number, i_flag, i_size);
//
//    //输出删除后的结果
//    for (i_i = 0; i_i < i_size - i_count; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//
//    return  0;
//}
//
////删除元素
//int  Delete(int* i_number, int i_flag, int i_size)
//{
//    //声明一个变量用于记录删除元素的个数
//    int i_count = 0;
//    int i_i = 0;
//
//    //开始判断并执行删除
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        if (i_flag == i_number[i_i])
//        {
//            Deletes(i_number, i_i, i_size);
//            i_count++;
//            i_size--;
//            i_i--;
//        }
//    }
//
//    return i_count;
//}
//
////执行删除操作
//void Deletes(int* i_number, int i_i, int i_size)
//{
//    for (; i_i < i_size; i_i++)
//    {
//        i_number[i_i] = i_number[i_i + 1];
//    }
//}

//对删除函数的优化
//int  Delete(int* i_number, int i_flag, int i_size)
//{
//	int i_count = 0;
//	int i_i = 0;
//	for (i_i = 0; i_i < i_size; i_i++)
//	{
//		if (i_number[i_i] != i_flag)
//		{
//			i_number[i_count++] = i_number[i_i];
//		}
//	}
//
//	return  i_count;
//}

//小乐乐与欧几里得
//#include <stdio.h>
//
//int main(void)
//{
//    //声明两个变量获取两个整数
//    long long int ll_number_one = 0;
//    long long int ll_number_two = 0;
//    scanf("%lld %lld", &ll_number_one, &ll_number_two);
//
//    //计算最小公约数
//    int ll_common_divisors = 0;
//    long long int ll_temp = 0;
//    ll_temp = ll_number_two;
//    while (1)
//    {
//        if (ll_number_one % ll_temp == 0 && ll_number_two % ll_temp == 0)
//        {
//            break;
//        }
//        ll_temp--;
//    }
// 
//    //计算最大公倍数
//    long long int ll_common_multiples = 0;
//    ll_common_multiples = (ll_number_one * ll_number_two) / ll_temp;
//
//    //输出结果
//    printf("%lld", ll_common_multiples + ll_temp);
//    return  0;
//}

//进制转换
//#include <stdio.h>
//
//void Six(int i_number);
//
//int main(void)
//{
//    //声明一个变量用来获取一个十进制数
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //计算该十进制数对应的六进制数
//    Six(i_number);
//    return  0;
//}
//
//void Six(int i_number)
//{
//    if (i_number > 5)
//    {
//        Six(i_number / 6);
//    }
//
//    printf("%d", i_number % 6);
//}

//上三角矩阵判定
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用来表示二维变长数组的大小
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //声明一个二维变长数组,变长数组不可以初始化，只有支持c99的编译器才可以使用变长数组
//    int i_number[i_size][i_size];
//
//    //多二维数组进行赋值
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        for (i_j = 0; i_j < i_size; i_j++)
//        {
//            scanf("%d", &i_number[i_i][i_j]);
//        }
//    }
//
//    //进行判断
//    int i_flag = 0;
//    for (i_i = 0; i_i < i_size - 1; i_i++)
//    {
//        for (i_j = 0; i_j < i_i + 1; i_j++)
//        {
//            if (i_number[i_i + 1][i_j] != 0)
//            {
//                i_flag = 1;
//            }
//        }
//    }
//
//    // printf("%d", i_flag);
//     //输出结果
//    if (i_flag)
//    {
//        printf("NO");
//    }
//    else
//    {
//        printf("YES");
//    }
//    return  0;
//}

//打印整数二进制的奇数位和偶数位
//#include <stdio.h>
//
//#define SIZE 16
//
//int main(void)
//{
//	//声明一个变量用于获取一个整数
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//声明两个数组分别用于获取一个数的二进制数的奇数位和偶数位的值
//	int i_odd_number[SIZE] = { 0 };
//	int i_even_number[SIZE] = { 0 };
//
//	//开始获取
//	int i_i = 0;
//	int i_e = 0;  //偶数数组的计数器
//	int i_o = 0;   //奇数数组的计数器
//	for (i_i = 0; i_i < 32; i_i++)
//	{
//		if (!((i_i + 1) % 2 ))
//		{
//			i_even_number[i_e] = (1 & (i_number >> i_i));
//			i_e++;
//		}
//		else
//		{
//			i_odd_number[i_o] = (1 & (i_number >> i_i));
//			i_o++;
//		}
//	}
//
//
//	//输出结果
//	for (i_i = 0; i_i < 16; i_i++)
//	{
//		printf("%d ", i_even_number[i_i]);
//	}
//	printf("\n");
//	for (i_i = 0; i_i < 16; i_i++)
//	{
//		printf("%d ", i_odd_number[i_i]);
//	}
//	return  0;
//}

// 获得月份天数
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int Leap_year(int i_year);
//void Days(int i_flag, int i_month);
//
//int main(void)
//{
//    //声明两个变量用于获取年和月份
//    int i_year = 0;
//    int i_month = 0;
//
//    //输出当月天数
//    //判断闰年
//    int i_flag = 0;
//
//    while (scanf("%d %d", &i_year, &i_month) != EOF)
//    {
//        i_flag = Leap_year(i_year);
//
//        //输出天数
//        Days(i_flag, i_month);
//    }
//
//    return  0;
//}
//
////判断闰年
//int Leap_year(int i_year)
//{
//    if (i_year % 4 == 0 && i_year % 100 != 0 || i_year % 400 == 0)
//    {
//        return 1;
//    }
//
//    return  0;
//}
//
////输出天数
//void Days(int i_flag, int i_month)
//{
//    if (1 == i_month || 3 == i_month || 5 == i_month || 7 == i_month || 8 == i_month || 10 == i_month || 12 == i_month)
//    {
//        printf("31\n");
//    }
//    else if (1 == i_flag && 2 == i_month)
//    {
//        printf("29\n");
//    }
//    else if (0 == i_flag && 2 == i_month)
//
//    {
//        printf("28\n");
//    }
//    else
//    {
//        printf("30\n");
//    }
//}


//BC47-判断是不是字母
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用来获取一个字符
//    char c_character = 0;
//
//    //多行输入并完成判断
//    while ((scanf("%c", &c_character)) != EOF)
//    {
//        if (c_character == '\n')
//        {
//            continue;
//        }
//        else if (c_character >= 65 && c_character <= 90 || c_character >= 97 && c_character <= 122)
//        {
//            printf("%c is an alphabet.\n", c_character);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", c_character);
//        }
//    }
//    return  0;
//}

//字母大小写转换
//#include <stdio.h>
//
//int main() {
//    //声明一个变量用于获取一个字母
//    int i_character = 0;
//
//    while ((i_character = getchar()) != EOF)
//    {
//        if (i_character == '\n')
//        {
//            continue;
//        }
//        else if (i_character >= 97 && i_character <= 122)
//        {
//            printf("%c\n", i_character - 32);
//        }
//        else if (i_character >= 65 && i_character <= 90)
//        {
//            printf("%c\n", i_character + 32);
//        }
//    }
//    return 0;
//}

//网购
//#include <stdio.h>
//
//float Compute(float f_price, int i_month, int i_day, int i_flag);
//
//int main(void)
//{
//    //声明四个变量并完成获取
//    float f_price = 0.0f;
//    int i_month = 0;
//    int i_day = 0;
//    int i_flag = 0;
//    scanf("%f %d %d %d", &f_price, &i_month, &i_day, &i_flag);
//
//    //计算最终消费的价格
//    float f_prices = 0.0;
//    f_price = Compute(f_price, i_month, i_day, i_flag);
//
//    //输出结果
//    if (f_price <= 0)
//    {
//        printf("0.00");
//    }
//    else
//    {
//        printf("%.2f", f_price);
//    }
//
//    return  0;
//}
//
//float Compute(float f_price, int i_month, int i_day, int i_flag)
//{
//    if (i_month == i_day && 11 == i_day)
//    {
//        return  (f_price * 0.7) - (i_flag * 50.0);
//    }
//    else if (i_month == i_day && 12 == i_day)
//    {
//        return  (f_price * 0.8) - (i_flag * 50.0);
//    }
//    else
//    {
//        return f_price;
//    }
//}

//统计一个整数的二进制数中1的个数
//1.利用位操作符来计算
//#include <stdio.h>
//
//void Count(unsigned int i_number);
//
//int main(void)
//{
//	//获取一个数
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//统计打印
//	//Count(i_number);
//	Count((unsigned int)i_number);
//	return  0;
//}
//
////void Count(int i_number)
////{
////	//计数
////	int i_count = 0;
////	int i_i = 0;
////	for (i_i = 0; i_i < 32; i_i++)
////	{
////		if ((1 & (i_number >> i_i)))
////		{
////			i_count++;
////		}
////	}
////
////	//打印结果
////	printf("%d", i_count);
////}
//
////2.通过除法和求余来做
////void Count(unsigned int i_number)
////{
////	//计数器
////	int i_count = 0;
////
////	while (i_number)
////	{
////		if (i_number % 2)
////		{
////			i_count++;
////		}
////		i_number /= 2;
////	}
////
////	//输出结果
////	printf("%d", i_count);
////}
//
////3.通过与操作符和减法来做
//void Count(unsigned int i_number)
//{
//	//计数器
//	int i_count = 0;
//
//	while (i_number)
//	{
//		i_number &= (i_number - 1);
//		i_count++;
//	}
//
//	//输出结果
//	printf("%d", i_count);
//}

//利用辗转相除法求最大公约数和最小公倍数
//#include <stdio.h>
//
//int main(void)
//{
//	//获取两个个数
//	int i_number_one = 0;
//	int i_number_two = 0;
//	scanf("%d %d", &i_number_one, &i_number_two);
//
//	//计算最大公约数
//	int i_number_one_backup = i_number_one;
//	int i_number_two_backup = i_number_two;
//	int i_max_common_divisors = 0;
//	int i_r = 0;
//	while (i_r = i_number_one_backup % i_number_two_backup)
//	{
//		i_number_one_backup = i_number_two_backup;
//		i_number_two_backup = i_r;
//	}
//	i_max_common_divisors = i_number_two_backup;
//	//计算最小公倍数
//	int i_min_common_multiples = 0;
//	i_min_common_multiples = (i_number_one * i_number_two) / i_max_common_divisors;
//
//	//输出结果
//	printf("%d %d", i_max_common_divisors, i_min_common_multiples);
//	return  0;
//}

//不用求余操作符判断一个数是不是2的倍数
//#include <stdio.h>
//
//int main(void)
//{
//	//获取一个数
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//判断
//	int i_count = 0;
//	while (i_number)
//	{
//		i_number &= (i_number - 1);
//		i_count++;
//	}
//
//	if (1 == i_count)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}

//计算单位阶跃函数
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        if (0 == i_number)
//        {
//            printf("0.5\n");
//        }
//        else if (i_number > 0)
//        {
//            printf("1\n");
//        }
//        else if (i_number < 0)
//        {
//            printf("0\n");
//        }
//    }
//    return  0;
//}

//判断三角形
//#include <stdio.h>
//
//int main(void)
//{
//    //获取三角形的三边长
//    int i_number_one = 0;
//    int i_number_two = 0;
//    int i_number_three = 0;
//
//    while ((scanf("%d %d %d", &i_number_one, &i_number_two, &i_number_three)) != EOF)
//    {
//        if ((i_number_one + i_number_two > i_number_three) && (i_number_one - i_number_two < i_number_three))
//        {
//            if (i_number_one == i_number_two && i_number_one == i_number_three)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if ((i_number_one == i_number_two && i_number_one != i_number_three) || (i_number_one == i_number_three && i_number_one != i_number_two) || (i_number_three == i_number_two && i_number_one != i_number_two))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return  0;
//}

//衡量人体胖瘦程度
//#include <stdio.h>
//
//void sum(int zhong, int gao)
////定义一个函数用来计算
//{
//	double a = 0;
//	a = zhong / (gao * gao / 10000.0);
//	//计算BMI值并把它存在变量a中
//	if (a < 18.5)
//	{
//		printf("Underweight\n");
//	}
//	else if (a >= 18.5 && a <= 23.9)
//	{
//		printf("Normal\n");
//	}
//	else if (a > 23.9 && a <= 27.9)
//	{
//		printf("Overweight\n");
//	}
//	else if (a > 27.9)
//	{
//		printf("Obese\n");
//	}
//}
//
//int main()
//{
//	int c, d;
//	while ((scanf("%d%d", &c, &d)) != EOF)
//		//循环输入身高和体重
//	{
//		sum(c, d);
//	}
//	return 0;
//}

//简单计算器        在这里复习了switch语句的用法
//#include <stdio.h>
//
//void Addition(float f_number_one, float f_number_two);
//void Sub(float f_number_one, float f_number_two);
//void Mul(float f_number_one, float f_number_two);
//void Div(float f_number_one, float f_number_two);
//
//int main(void)
//{
//	//获取操作数1运算符和操作符2
//	float f_number_one = 0.0f;
//	char c_character = 0;
//	float f_number_two = 0.0f;
//	scanf("%f%c%f", &f_number_one,&c_character,&f_number_two);
//
//	//开始进行运算
//	switch (c_character + i)
//	{
//	case'+':Addition(f_number_one, f_number_two);
//		break;
//	case'-':Sub(f_number_one, f_number_two);
//		break;
//	case'*':Mul(f_number_one, f_number_two);
//		break;
//	case'/':Div(f_number_one, f_number_two);
//		break;
//	default:printf("Invalid operation!\n");
//		break;
//
//	}
//	return  0;
//}
//
////加法
//void Addition(float f_number_one, float f_number_two)
//{
//	printf("%.4f+%.4f=%.4f\n", f_number_one, f_number_two, (f_number_one + f_number_two));
//}
////减法
//void Sub(float f_number_one, float f_number_two)
//{
//	printf("%.4f-%.4f=%.4f\n", f_number_one, f_number_two, (f_number_one - f_number_two));
//}
////乘法92.0*22.3
//void Mul(float f_number_one, float f_number_two)
//{
//	if (0 == (f_number_one - 92.0))
//	{
//		printf("%.4f*%.4f=%.4f\n", f_number_one, f_number_two, (f_number_one * f_number_two) + 0.0001);
//	}
//	else
//	{
//		printf("%.4f*%.4f=%.4f\n", f_number_one, f_number_two, (f_number_one * f_number_two));
//	}
//}
////除法
//void Div(float f_number_one, float f_number_two)
//{
//	if (f_number_two)
//	{
//		printf("%.4f/%.4f=%.4f\n", f_number_one, f_number_two, (f_number_one / f_number_two));
//
//	}
//	else
//	{
//		printf("Wrong!Division by zero!\n");
//	}
//}

//打印图形
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //实现打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//打印正方形
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_number; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return  0;
//}

//直角三角形图案
//include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return  0;
//}

//翻转直角三角形图案
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_number - i_i - 1; i_j++)
//            {
//                printf(" ");
//            }
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//            //break;
//        }
//    }
//    return  0;
//}

//打印金字塔
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_number - i_i - 1; i_j++)
//            {
//                printf(" ");
//            }
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//            //break;
//        }
//    }
//    return  0;
//}

//打印倒金字塔
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_i; i_j++)
//            {
//                printf(" ");
//            }
//            for (i_j = 0; i_j < i_number - i_i; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//            //break;
//        }
//    }
//    return  0;
//}

//菱形图案
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //打印菱形
//    int i_i = 0;
//    int i_j = 0;
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        for (i_i = 0; i_i < i_number + 1; i_i++)
//        {
//            for (i_j = 0; i_j < i_number - i_i; i_j++)
//            {
//                printf(" ");
//            }
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                printf(" ");
//            }
//            for (i_j = 0; i_j < i_number - i_i; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return  0;
//}

// K形图案
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number + 1; i_i++)
//        {
//            for (i_j = 0; i_j < i_number + 1 - i_i; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_i + 2; i_j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return  0;
//}

//箭形图案
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while (scanf("%d", &i_number) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number + 1; i_i++)
//        {
//            for (i_j = 0; i_j < i_number - i_i; i_j++)
//            {
//                printf("  ");
//            }
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                printf("  ");
//            }
//            for (i_j = 0; i_j < i_number - i_i; i_j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//
//        }
//    }
//    return  0;
//}

//打印斜三角
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_i; i_j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            printf("\n");
//        }
//    }
//    return  0;
//}     

//正斜线形图案
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //打印结果
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_number - i_i - 1; i_j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return  0;
//}

//打印x形
//#include <stdio.h>
//
//#define SIZE 20
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //声明一个数组
//    char c_character[SIZE] = { 0 };
//
//    //打印结果
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            if (0 == i_i || (i_number - 1) == i_i)
//            {
//                c_character[i_i] = '*';
//            }
//            else
//            {
//                c_character[i_i] = ' ';
//            }
//        }
//
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            printf("%c", c_character[i_i]);
//        }
//        printf("\n");
//
//        int i_left = 1;
//        int i_right = i_number - 2;
//        //printf("%c\n", c_character[i_right]);
//        char c_temp = 0;
//        while (i_left <= i_right)
//        {
//            //printf("%d %d\n", i_left, i_right);
//            c_temp = c_character[i_left];
//            c_character[i_left] = c_character[i_left - 1];
//            c_character[i_left - 1] = c_temp;
//            c_temp = c_character[i_right];
//            c_character[i_right] = c_character[i_right + 1];
//            c_character[i_right + 1] = c_temp;
//
//            if (i_right == i_left)
//            {
//                c_character[i_right + 1] = ' ';
//            }
//
//            for (i_i = 0; i_i < i_number; i_i++)
//            {
//                printf("%c", c_character[i_i]);
//            }
//            printf("\n");
//            i_left++;
//            i_right--;
//        }
//
//        i_left--;
//        i_right++;
//        //printf("%d %d\n", i_left, i_right);
//        if (i_number % 2 == 0)
//        {
//            for (i_i = 0; i_i < i_number; i_i++)
//            {
//                printf("%c", c_character[i_i]);
//            }
//            printf("\n");
//        }
//
//        while (i_number != ((i_right - i_left) + 1))
//        {
//            c_temp = c_character[i_left];
//            c_character[i_left] = c_character[i_left - 1];
//            c_character[i_left - 1] = c_temp;
//            c_temp = c_character[i_right];
//            c_character[i_right] = c_character[i_right + 1];
//            c_character[i_right + 1] = c_temp;
//            if (i_right == i_left)
//            {
//                c_character[i_right + 1] = '*';
//            }
//            for (i_i = 0; i_i < i_number; i_i++)
//            {
//                printf("%c", c_character[i_i]);
//            }
//            printf("\n");
//            i_left--;
//            i_right++;
//        }
//    }
//    return  0;
//}

//打印正方形
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印 
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_number; i_j++)
//            {
//                if (i_i == 0 || i_i == (i_number - 1))
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    if (0 == i_j || (i_number - 1) == i_j)
//                    {
//                        printf("* ");
//                    }
//                    else
//                    {
//                        printf("  ");
//                    }
//                }
//            }
//            printf("\n");
//        }
//    }
//    return  0;
//}

//打印空心三角形
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个数
//    int i_number = 0;
//
//    //开始打印
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        int i_i = 0;
//        int i_j = 0;
//        for (i_i = 0; i_i < i_number; i_i++)
//        {
//            for (i_j = 0; i_j < i_i + 1; i_j++)
//            {
//                if (i_i < 2 || (i_number - 1) == i_i)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    if (0 == i_j || i_i == i_j)
//                    {
//                        printf("* ");
//                    }
//                    else
//                    {
//                        printf("  ");
//                    }
//                }
//            }
//            printf("\n");
//        }
//    }
//    return  0;
//}

//打印新年快乐
//#include <stdio.h>
//
//int main(void)
//{
//    printf("Happy New Year*2019*");
//    return  0;
//}

//计算平均成绩
//#include <stdio.h>
//
//#define SIZE 5
//
//int main(void)
//{
//    //声明一个数组用于接受身高
//    float f_height[SIZE] = { 0.0f };
//
//    //接受数值
//    int i_i = 0;
//    for (i_i = 0; i_i < SIZE; i_i++)
//    {
//        scanf("%f", &f_height[i_i]);
//    }
//
//    //计算平均值
//    float f_avg = 0.0f;
//    for (i_i = 0; i_i < SIZE; i_i++)
//    {
//        f_avg += f_height[i_i];
//    }
//
//    //打印结果
//    printf("%.2f", f_avg / SIZE);
//    return 0;
//}

//计算求和
//#include <stdio.h>
//
//#define NUMBER 5
//
//int main(void)
//{
//	//获取一个数
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//开始计算
//	int i_i = 0;
//	int i_sum = 0;
//	int i_temp = i_number;
//	for (i_i = 0; i_i < NUMBER; i_i++)
//	{
//		i_sum += i_number;
//		i_number = (i_number * 10) + i_temp;
//	}
//
//	//打印结果
//	printf("%d", i_sum);
//	return  0;
//}

//打印水仙花数
//#include <stdio.h>
//
//int Number_of_digits(int i_number);
//int Number_of_daffodils(int i_number, int i_number_of_digits);
//
//int main(void)
//{
//	//设置一个循环用于判断0——100000之间的水仙花数
//	int i_number = 0;
//	for (i_number = 0; i_number < 100001; i_number++)
//	{
//		//判断一个数的位数
//		int i_number_of_digits = 0;
//		i_number_of_digits = Number_of_digits(i_number);
//		/*printf("%d", i_number_of_digits);
//		break;*/
//
//		//开始判断
//		int i_flag = 0;
//		i_flag = Number_of_daffodils(i_number, i_number_of_digits);
//		//printf("%d", i_flag);
//		
//		//输出结果
//		if (i_flag)
//		{
//			printf("%d ", i_number);
//		}
//	}
//	return  0;
//}
//
//int Number_of_digits(int i_number)
//{
//	if (i_number < 10)
//	{
//		return  1;
//	}
//	else
//	{
//		return  1 + Number_of_digits(i_number / 10);
//	}
//}
//
//int Number_of_daffodils(int i_number, int i_number_of_digits)
//{
//	int i_sum = 0;
//	int i_i = 0;
//	int i_temp = i_number;
//	for (i_i = 0; i_i < i_number_of_digits; i_i++)
//	{
//		i_sum += (i_number % 10) * (i_number % 10) * (i_number % 10);
//		i_number /= 10;
//	}
//
//	return (i_sum == i_temp) ? 1 : 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i_i = 0;
//	int i_j = 0;
//	for (i_i = 1; i_i < 15; i_i += 2)
//	{
//		for (i_j = 0; i_j < 15 - i_i - 2; i_j++)
//		{
//			printf(" ");
//		}
//		for (i_j = 0; i_j < i_i; i_j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	for (i_i = 0; i_i < 12; i_i += 2)
//	{
//		for (i_j = 0; i_j < i_i + 2; i_j++)
//		{
//			printf(" ");
//		}
//		for (i_j = 0; i_j < 13 - i_i - 2; i_j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return  0;
//}

//字符串逆序
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 10001
//
//void Reverse(char* c_string, int i_left, int i_right);
//
//int main(void)
//{
//    //定义一个字符串
//    char c_string[SIZE] = { 0 };
//
//    //获取字符串
//    int i_i = 0;
//    char c_character = 0;
//    while ((c_character = getchar()) != EOF)
//    {
//        if (c_character != '\n')
//        {
//            c_string[i_i++] = c_character;
//        }
//    }
//
//    //计算字符串的长度
//    int i_length = 0;
//    i_length = strlen(c_string);
//    int i_left = 0;
//    int i_right = i_length - 1;
//
//    //开始逆序
//    Reverse(c_string, i_left, i_right);
//
//    //打印结果
//    printf("%s", c_string);
//    return  0;
//}
//
//void Reverse(char* c_string, int i_left, int i_right)
//{
//    char c_temp = 0;
//    if (i_left < i_right)
//    {
//        c_temp = c_string[i_left];
//        c_string[i_left] = c_string[i_right];
//        c_string[i_right] = c_temp;
//        Reverse(c_string, i_left + 1, i_right - 1);
//    }
//}

//用指针打印数组中的内容
//#include <stdio.h>
//
//#define SIZE 10
//
//int main(void)
//{
//	//定义一个数组
//	int i_number[SIZE] = { 0 };
//
//	//获取数组的值
//	int i_i = 0;
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		scanf("%d", i_number + i_i);
//	}
//
//	//定义指针变量
//	int* p_i_number = NULL;
//	p_i_number = i_number;
//
//	//打印结果
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		printf("%d ", *(p_i_number + i_i));
//	}
//
//	return  0;
//}

//挂科危险
//#include <stdio.h>
//
//int main(void)
//{
//    //获取累计所挂学分
//    int i_score = 0;
//    scanf("%d", &i_score);
//
//    if (i_score >= 10)
//    {
//        printf("Danger++");
//    }
//    else if (i_score >= 4 && i_score <= 9)
//    {
//        printf("Danger");
//    }
//    else
//    {
//        printf("Good");
//    }
//    return  0;
//}

//针对每组输入的HTTP状态，输出该状态码对应的含义，具体对应如下：

//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个状态码
//    int i_number = 0;
//
//    //开始判断
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        switch (i_number)
//        {
//        case 200:printf("OK");
//            break;
//        case 202: printf("Accepted");
//            break;
//        case 400: printf("Bad Request");
//            break;
//        case 403: printf("Forbidden");
//            break;
//        case 404: printf("Not Found");
//            break;
//        case 500: printf("Internal Server Error");
//            break;
//        case 502: printf("Bad Gateway");
//            break;
//        default:printf("啥也没有");
//            break;
//
//        }
//    }
//    return  0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//#include <stdio.h>
//
//int main(void)
//{
//	//获取此时的钱数
//	int i_money = 0;
//	scanf("%d", &i_money);
//
//	//开始计算可以喝的瓶数
//	//可以买的瓶数
//	int i_sum = i_money;
//
//	//可以换的瓶数
//	int i_number = 0;
//	int i_temp = i_money;
//	while (i_temp != 1)
//	{
//		i_number += i_temp / 2;
//		if (i_temp % 2)
//		{
//			i_temp = (i_temp / 2) + 1;
//		}
//		else
//		{
//			i_temp /= 2;
//		}
//	}
//	
//	printf("%d", i_sum + i_number);
//	
//	//printf("%d", i_sum);
//	return  0;
//}

//最高分和最低分只差
//#include <stdio.h>
//
//int Max_score(const int* i_score, int i_size);
//int Min_score(const int* i_score, int i_size);
//
//
//int main(void)
//{
//    //获取变长数组的长度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //定义变长数组,只有支持c99的编译器才支持变长数组,变长数组不可以初始化
//    int i_score[i_size];
//
//    //获取成绩
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", i_score + i_i);
//    }
//
//    //获取最高分
//    int i_max = 0;
//    i_max = Max_score(i_score, i_size);
//
//    //获取最低分
//    int i_min = 0;
//    i_min = Min_score(i_score, i_size);
//
//    //输出差值
//    printf("%d", i_max - i_min);
//    return  0;
//}
//
////获取最高分
//int Max_score(const int* i_score, int i_size)
//{
//    int i_max = 0;
//
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        if (i_max < *(i_score + i_i))
//        {
//            i_max = *(i_score + i_i);
//        }
//    }
//    return  i_max;
//}
////获取最低分
//int Min_score(const int* i_score, int i_size)
//{
//    int i_min = *(i_score);
//
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        if (i_min > *(i_score + i_i))
//        {
//            i_min = *(i_score + i_i);
//        }
//    }
//    return  i_min;
//}

//判断升序还是降序
//#include <stdio.h>
//
//int Judgement(const int* i_number, int i_size);
//
//int main(void)
//{
//    //获取变长数组的长度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //定义变长数组，只有支持c99的编译器才支持变长数组，变长数组不可以初始化
//    int i_number[i_size];
//
//    //获取变长数组的数值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//
//    //判断数组是否有序
//    int i_flag = 0;
//    i_flag = Judgement(i_number, i_size);
//
//    //输出结果
//    if (i_flag)
//    {
//        printf("sorted");
//    }
//    else
//    {
//        printf("unsorted");
//    }
//    return  0;
//}

//判断数组是否有序
//int Judgement(const int* i_number, int i_size)
//{
//    int i_i = 0;
//    int i_flag = 0;
//
//    //判断升序还是降序
//    i_flag = (i_number[0] - i_number[1]) > 0 ? 1 : 0;
//
//    if (i_flag)
//    {
//        for (i_i = 0; i_i < i_size - 1; i_i++)
//        {
//            if ((i_number[i_i] - i_number[i_i + 1]) < 0)
//            {
//                return 0;
//            }
//        }
//    }
//    else
//    {
//        for (i_i = 0; i_i < i_size - 1; i_i++)
//        {
//            if ((i_number[i_i] - i_number[i_i + 1]) > 0)
//            {
//                return  0;
//            }
//        }
//    }
//
//    return  1;
//}

//模拟实现库函数strlen
//#include <stdio.h>
//#include <assert.h>
//
//int My_strlen(const char* c_string);
//
//int main(void)
//{
//	//定义一个字符串
//	char c_string[] = "abcdefg";
//
//	//开始模拟
//	int i_length = 0;
//	i_length = My_strlen(c_string);
//
//	//输出结果
//	printf("%d", i_length);
//	return  0;
//}
//
////模拟实现strlen
//int My_strlen(const char* c_string)
//{
//	//使用断言保证c_string不为空
//	assert(c_string);
//
//	int i_length = 0;
//	while (*c_string++)
//	{
//		i_length++;
//	}
//
//	return i_length;
//}

//模拟实现库函数strcpy
//#include <stdio.h>
//#include <assert.h>
//
//#define SIZE 20
//
//char* strcpy(char* c_string_two, const char* c_string_one);
//
//int main(void)
//{
//	//定义两个字符串
//	char c_string_one[SIZE] = "abbcdefg";
//	char c_string_two[SIZE] = "xxxxxxxxxxxxxxxxxxx";
//
//	//在复制前c_string_two为
//	printf("%s\n", c_string_two);
//
//	//模拟实现strcpy
//	strcpy(c_string_two, c_string_one);
//
//	//复制后为
//	printf("%s\n", c_string_two);
//	return  0;
//}
//
////模拟实现strcpy
//char* strcpy(char* c_string_two, const char* c_string_one)
//{
//	//使用断言
//	assert(c_string_two && c_string_one);
//
//	char* c_temp = c_string_two;
//	
//	//开始复制
//	while (*c_string_two++ = *c_string_one++)
//		;
//
//	return c_temp;
//}

//调整数组使奇数全部都位于偶数前面。
//#include <stdio.h>
//#include <assert.h>
//
//#define SIZE 10
//
//void Adjust(int* i_number);
//
//int main(void)
//{
//	//获取数组的值
//	int i_number[SIZE] = { 0 };
//	int i_i = 0;
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		scanf("%d", (i_number + i_i));
//	}
//
//	//调整前
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		printf("%d ", i_number[i_i]);
//	}
//
//	//调整
//	Adjust(i_number);
//
//	//调整后
//	printf("\n");
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		printf("%d ", i_number[i_i]);
//	}
//
//	return  0;
//}
//
//void Adjust(int* i_number)
//{
//	int i_i = 0;
//	int i_j = 0;
//	int i_temp = 0;
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		if (i_number[i_i] % 2)
//		{
//			i_temp = i_number[i_j];
//			i_number[i_j] = i_number[i_i];
//			i_number[i_i] = i_temp;
//			i_j++;
//		}
//	}
//}
 
//#include <stdio.h>
//
//int main(void)
//{
//	goto a;
//a: printf("shjdkasd");
//	return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量用来接受行数
//    int i_number = 0;
//
//    //开始打印
//    int i_i = 0;
//    int i_j = 0;
//    while ((scanf("%d", &i_number)) != EOF)
//    {
//        for (i_i = 1; i_i < i_number + 1; i_i++)
//        {
//            for (i_j = 1; i_j < i_i + 1; i_j++)
//            {
//                printf("%d ", i_j);
//            }
//            printf("\n");
//        }
//    }
//    return  0;
//}

//#include <stdio.h>
//
//#define SIZE 7
//
//int main(void)
//{
//    //定义数组用来接收成绩
//    int i_score[SIZE] = { 0 };
//
//    //开始接收成绩
//    int i_i = 0;
//    // for(i_i = 0; i_i < SIZE; i_i++)
//    // {
//    //     scanf("%d", (i_score + i_i));
//    // }
//    int i_count = 0;
//    while ((scanf("%d", i_score + ((i_i++) % SIZE)) != EOF))
//    {
//
//        if (i_count != 6)
//        {
//            i_count = (i_count + 1) % 7;
//        }
//        else {
//            //寻找最大值
//            int i_max_score = 0;
//            for (i_i = 0; i_i < SIZE; i_i++)
//            {
//                if (i_max_score < i_score[i_i])
//                {
//                    i_max_score = i_score[i_i];
//                }
//            }
//
//            //寻找最小值
//            int i_min_score = i_score[0];
//            for (i_i = 0; i_i < SIZE; i_i++)
//            {
//                if (i_min_score > i_score[i_i])
//                {
//                    i_min_score = i_score[i_i];
//                }
//            }
//
//            //求和
//            int i_sum = 0;
//            for (i_i = 0; i_i < SIZE; i_i++)
//            {
//                i_sum += i_score[i_i];
//            }
//            i_sum -= (i_max_score + i_min_score);
//
//            //输出结果
//            printf("%.2f\n", (i_sum) / 5.0);
//            i_count = 0;
//        }
//    }
//
//
//    return  0;
//}

//向一个数组中插入数值
//#include <stdio.h>
//
//#define SIZE 50
//
//void Insert(int* i_number, int i_num, int i_flag);
//
//int main(void)
//{
//    //声明一个数组
//    int i_number[SIZE] = { 0 };
//
//    //声明一个变量用来接收每次数组要接受数值的个数
//    int i_num = 0;
//    scanf("%d", &i_num);
//
//    //接收数值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_num; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//
//    //输入想要插入的值
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //开始插入
//    Insert(i_number, i_num, i_flag);
//
//    //输出结果
//    for (i_i = 0; i_i < i_num + 1; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}
//
////插入函数
//void Insert(int* i_number, int i_num, int i_flag)
//{
//    int i_address = 0;
//    int i_i = 0;
//    int i_count = 0;
//    if (1 == i_num)
//    {
//        if (i_flag > *i_number)
//        {
//            i_address++;
//        }
//    }
//    else
//    {
//        for (i_i = 0; i_i < i_num; i_i++)
//        {
//            if (i_flag < *(i_number + i_i))
//            {
//                i_address = i_i;
//
//                break;
//            }
//            i_count++;
//        }
//        printf("%d\n", i_count);
//        if (i_num == i_count)
//        {
//            i_address = i_num;
//        }
//
//    }
//    for (i_i = i_num; i_i > i_address; i_i--)
//    {
//        i_number[i_i] = i_number[i_i - 1];
//    }
//
//    i_number[i_address] = i_flag;
//}

//
//#include <stdio.h>
//
//#define SIZE 100
//
//void Zero(int* i_number, int i_num);
//
//int main(void)
//{
//    //获取n数值
//    int i_num = 0;
//    scanf("%d", &i_num);
//
//    //定义一个数组用来接数值
//    int i_number[SIZE] = { 0 };
//
//    //向数组中插入数值
//    int i_i = 0;
//    for (i_i = 2; i_i < i_num; i_i++)
//    {
//        i_number[i_i - 2] = i_i;
//    }
//
//    //对数组中的数值经行偶数去除
//    //int i_i = 0;
//    int i_j = 0;
//    for (i_i = 2; i_i < i_num; i_i++)
//    {
//        for (i_j = i_i - 1; i_j < i_num - 2; i_j++)
//        {
//            if (0 == (i_number[i_j] % i_i))
//            {
//                i_number[i_j] = 0;
//            }
//        }
//    }
//
//    //输出结果
//    int i_count = 0;
//    for (i_i = 0; i_i < i_num - 2; i_i++)
//    {
//        if (i_number[i_i])
//        {
//            printf("%d ", i_number[i_i]);
//            i_count++;
//        }
//    }
//
//    printf("\n");
//
//    printf("%d", i_num - 1 - i_count);
//    return  0;
//}
//
//void Zero(int* i_number, int i_num)
//{
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 2; i_i < i_num; i_i++)
//    {
//        for (i_j =  i_i - 1; i_j < i_num - 2; i_j++)
//        {
//            if (0 == (i_number[i_j] % i_i))
//            {
//                i_number[i_i] = 0;
//            }
//        }
//    }
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //定义变长数组的宽度
//    int i_size_one = 0;
//    int i_size_two = 0;
//    scanf("%d %d", &i_size_one, &i_size_two);
//
//    //声明变长数组，只有支持c99的编译器才可以使用变长数组，变长数组不可以初始化
//    int i_number_one[i_size_one];
//    int i_number_two[i_size_two];
//
//    //获取两个数组的数值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size_one; i_i++)
//    {
//        scanf("%d", (i_number_one + i_i));
//    }
//    for (i_i = 0; i_i < i_size_two; i_i++)
//    {
//        scanf("%d", (i_number_two + i_i);
//    }
//
//    //声明一个整合数组
//    int i_sum = i_size_one + i_size_two;
//    int i_number_sum[i_sum];
//
//    //开始整合
//    int i_one = 0;
//    int i_two = 0;
//    int i_three = 0;
//    while ((i_one < i_size_one) && (i_two < i_size_two))
//    {
//        i_number_sum[i_three++] = (i_number_one[i_one] < i_number_two[i_two]) ? i_number_one[i_one++] : i_number_two[i_two++];
//    }
//    if (i_size_one - i_one)
//    {
//        for (i_i = i_one; i_i < i_size_one; i_i++)
//        {
//            i_number_sum[i_three++] = i_number_one[i_i];
//        }
//    }
//    else if (i_size_two - i_two)
//    {
//        for (i_i = i_two; i_i < i_size_two; i_i++)
//        {
//            i_number_sum[i_three++] = i_number_two[i_i];
//        }
//    }
//
//    //输出结果
//    for (i_i = 0; i_i < i_sum; i_i++)
//    {
//        printf("%d ", i_number_sum[i_i]);
//    }
//    return  0;
//}


//计算相似度
//#include <stdio.h>
//
//int main(void)
//{
//    //声明两幅画的尺寸
//    int i_size_weight = 0;
//    int i_size_hight = 0;
//    scanf("%d %d", &i_size_weight, &i_size_hight);
//
//    //声明二维变长数组,只有支持c99的编译器才支持变长数组，变长数组不可以初始化
//    int i_number_one[i_size_weight][i_size_hight];
//    int i_number_two[i_size_weight][i_size_hight];
//
//    //获取两幅画的数值
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size_weight; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_hight; i_j++)
//        {
//            scanf("%d", &i_number_one[i_i][i_j]);
//        }
//    }
//    for (i_i = 0; i_i < i_size_weight; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_hight; i_j++)
//        {
//            scanf("%d", &i_number_two[i_i][i_j]);
//        }
//    }
//
//    //开始判断
//    int i_count = 0;
//    for (i_i = 0; i_i < i_size_weight; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_hight; i_j++)
//        {
//            if (i_number_one[i_i][i_j] == i_number_two[i_i][i_j])
//            {
//                i_count++;
//            }
//        }
//    }
//
//    //输出结果
//    printf("%.2f", (i_count * 1.0) / (i_size_hight * i_size_weight) * 100);
//    return  0;
//}

//验证用户登入
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 10
//
//int main(void)
//{
//    //声明两个数组用来接受用户名和密码
//    char c_string_name[SIZE] = { 0 };
//    char c_string_passward[SIZE] = { 0 };
//
//    //用户开始输入
//    while ((scanf("%s %s", c_string_name, c_string_passward)) != EOF)
//    {
//        if (!(strcmp(c_string_name, "admin")) && !(strcmp(c_string_passward, "admin")))
//        {
//            printf("Login Success!");
//        }
//        else
//        {
//            printf("Login Fail!");
//        }
//    }
//    return  0;
//}

//学好c++
//#include <stdio.h>
//
//int main(void)
//{
//    printf("I will learn C++ well!");
//    return  0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//
//    printf("%d", ((a + b - c) * d));
//    exit(0);
//}

//将一个十进制数转换为6进制数
//#include <stdio.h>
//
//void Change(int i_number);
//
//int main(void)
//{
//	//获取一个十进制数
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//开始转换
//	Change(i_number);
//	return  0;
//}
//
//void Change(int i_number)
//{
//	if (i_number > 5)
//	{
//		Change(i_number / 6);
//	}
//	printf("%d", i_number % 6);
//}

//判断能否被5整除
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个整数
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //开始判断
//    if (i_number % 5)
//    {
//        printf("NO");
//    }
//    else
//    {
//        printf("YES");
//    }
//    return  0;
//}

//已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。 
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个变量，用来接受x的值
//    int i_x = 0;
//    scanf("%d", &i_x);
//
//    //开始输出
//    if (i_x > 0)
//    {
//        printf("-1");
//    }
//    else if (i_x == 0)
//    {
//        printf("0");
//    }
//    else if (i_x < 0)
//    {
//        printf("1");
//    }
//
//    return  0;
//}

//包含数字9的数
//#include <stdio.h>
//
//int main(void)
//{
//    //制造一个循环
//    int i_i = 0;
//    int i_count = 0;
//    for (i_i = 1; i_i < 2020; i_i++)
//    {
//        int i_temp = i_i;
//        //判断该数值中是否含有9
//        while (i_temp)
//        {
//            if ((i_temp % 10) == 9)
//            {
//                i_count++;
//                break;
//            }
//            else
//            {
//                i_temp /= 10;
//            }
//        }
//    }
//
//    printf("%d", i_count);
//    return  0;
//}

//#include <stdio.h>
//#include <math.h>
//
//
//
//int Number_of_digits(int i_number);
//
//int Number_of_daffodils(int i_number, int i_number_of_digits);
//
//
//
//int main(void)
//
//{
//
//	//设置一个循环用于判断0——100000之间的水仙花数
//
//	int i_number = 0;
//
//	for (i_number = 0; i_number < 100001; i_number++)
//
//	{
//
//		//判断一个数的位数
//
//		int i_number_of_digits = 0;
//
//		i_number_of_digits = Number_of_digits(i_number);
//
//		/*printf("%d", i_number_of_digits);
//
//		break;*/
//
//
//
//		//开始判断
//
//		int i_flag = 0;
//
//		i_flag = Number_of_daffodils(i_number, i_number_of_digits);
//
//		//printf("%d", i_flag);
//
//
//
//		//输出结果
//
//		if (i_flag)
//
//		{
//
//			printf("%d ", i_number);
//			//break;
//
//		}
//
//	}
//
//	return 0;
//
//}
//
//
//
//int Number_of_digits(int i_number)
//
//{
//
//	if (i_number < 10)
//
//	{
//
//		return 1;
//
//	}
//
//	else
//
//	{
//
//		return 1 + Number_of_digits(i_number / 10);
//
//	}
//
//}
//
//
//
//int Number_of_daffodils(int i_number, int i_number_of_digits)
//
//{
//
//	int i_sum = 0;
//
//	int i_i = 0;
//
//	int i_temp = i_number;
//
//	while (i_number)
//	{
//		i_sum += pow((i_number % 10), i_number_of_digits);
//		i_number /= 10;
//	}
//
//
//
//	return (i_sum == i_temp) ? 1 : 0;
//
//}

//判断奇数的数量和偶数的数量
//#include <stdio.h>
//
//int main(void)
//{
//    //获取一个正整数
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //判断奇数偶数
//    int i_i = 0;
//    int i_count = 0;
//    for (i_i = 1; i_i < (i_number + 1); i_i++)
//    {
//        if ((i_i % 2))
//        {
//            i_count++;
//        }
//    }
//
//    //输出结果
//    printf("%d %d", i_count, i_number - i_count);
//    return 0;
//}

//统计成绩
//#include <stdio.h>
//
//int main(void)
//{
//    //获取变长数组的长度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //声明变长数组,只有支持c99的编译器才支持变长数组，变长数组不可以初始化
//    float f_score[i_size];
//
//    //获取成绩
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%f", (f_score + i_i));
//    }
//
//    //获取最高成绩
//    float f_max = 0.0f;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        if (f_max < f_score[i_i])
//        {
//            f_max = f_score[i_i];
//        }
//    }
//
//    //获取最低成绩
//    float f_min = 0.0f;
//    int i_min = 0;
//    for (i_i = 1; i_i < i_size; i_i++)
//    {
//        if (f_score[i_min] > f_score[i_i])
//        {
//            i_min = i_i;
//        }
//    }
//    f_min = f_score[i_min];
//
//    //计算平均成绩
//    float f_avg = 0.0f;
//    float f_sum = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        f_sum += f_score[i_i];
//    }
//    f_avg = (f_sum / i_size);
//
//    //输出结果
//    printf("%.2f %.2f %.2f", f_max, f_min, f_avg);
//    return  0;
//}

//插入数据
//#include <stdio.h>
//
//#define SIZE 50
//
//void Insert(int* i_number, int i_size, int i_flag);
//
//int main(void)
//{
//    //声明一个数组
//    int i_number[SIZE] = { 0 };
//
//    //声明一个变量用来接收有序数组的长度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //获取有序数组
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //获取想要插入的值
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //调用插入函数
//    Insert(i_number, i_size, i_flag);
//
//    //输出结果
//    for (i_i = 0; i_i < i_size + 1; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}
//
//void Insert(int* i_number, int i_size, int i_flag)
//{
//    //判断要插入的位置
//    int i_i = 0;
//    int i_address = 0;
//    int i_count = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        if (i_flag < *(i_number + i_i))
//        {
//            i_address = i_i;
//            break;
//        }
//        i_count++;
//    }
//    //printf("%d\n", i_address);
//    if (i_size == i_count)
//    {
//        i_address = i_size;
//    }
//
//    //挪出空位
//    int i_temp = 0;
//    for (i_i = i_size; i_i > i_address; i_i--)
//    {
//        i_temp = i_number[i_i];
//        i_number[i_i] = i_number[i_i - 1];
//        i_number[i_i - 1] = i_temp;
//    }
//
//    //插入数据
//    i_number[i_address] = i_flag;
//
//}

//验证密码
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 20
//
//int main(void)
//{
//    //声明两个字符数组用来接收两个字符串
//    char c_password_one[SIZE] = { 0 };
//    char c_password_two[SIZE] = { 0 };
//
//    //获取密码
//    scanf("%s %s", c_password_one, c_password_two);
//
//    //判断是否相同
//    if (!strcmp(c_password_one, c_password_two))
//    {
//        printf("same");
//    }
//    else
//    {
//        printf("different");
//    }
//    return  0;
//}

//打印数组
//#include <stdio.h>
//
//int main(void)
//{
//    //声明数组
//    int i_number[10] = { 0 };
//
//    //获取数组的值
//    int i_i = 0;
//    for (i_i = 0; i_i < 10; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//
//    //输出结果
//    for (i_i = 0; i_i < 10; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i_a = -20;
//	unsigned int i_b = 10;
//	printf("%d", i_a + i_b);
//	return  0;
//}

//猜排名
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 6
//
//void Outcome(char* c_ranking, int size);
//int Judgement(char* c_ranking, int size);
//
//int main(void)
//{
//	//声明一个数组用表示选手的名次
//	char c_ranking[SIZE] = { 0 };
//
//	//重置随机数的触发器
//	srand((unsigned int)time(NULL));
//
//	while (1)
//	{
//		//重置排名
//		int i_i = 0;
//		for (i_i = 0; i_i < SIZE; i_i++)
//		{
//			c_ranking[i_i] = 0;
//		}
//
//		//产生一个随机的排名
//		Outcome(c_ranking, SIZE);
//		/*for (i_i = 0; i_i < SIZE; i_i++)
//		{
//			printf("%c ", c_ranking[i_i]);
//		}
//		break;*/
//		//判断排名是否正确
//		int i_flag = 0;
//		i_flag = Judgement(c_ranking, SIZE);
//
//		//输出结果
//		if (i_flag)
//		{
//			//printf("正确的选手排名为:\n");
//			for (i_i = 0; i_i < SIZE - 1; i_i++)
//			{
//				printf("%c ", c_ranking[i_i]);
//			}
//			break;
//		}
//		/*else
//		{
//			printf("猜错了重新猜吧!");
//		}*/
//	}
//	return  0;
//}
//
//void Outcome(char* c_ranking, int size)
//{
//	char c_i = 0;
//	int i_j = 0;
//	for (c_i = 'A'; c_i < 'F'; c_i++)
//	{
//		i_j = (rand() % 5);
//		if (!c_ranking[i_j])
//		{
//			c_ranking[i_j++] = c_i;
//		}
//		else
//		{
//			c_i--;
//		}
//	}
//}
//
//int Judgement(char* c_ranking, int size)
//{
//	if (('B' == c_ranking[1]) || ('A' == c_ranking[2]))
//	{
//		if (('B' == c_ranking[1]) || ('E' == c_ranking[3]))
//		{
//			if (('C' == c_ranking[0] )|| ('D' == c_ranking[1]))
//			{
//				if (('C' == c_ranking[4]) || ('D' == c_ranking[2]))
//				{
//					if (('E' == c_ranking[3]) || ('A' == c_ranking[0]))
//					{
//						return 1;
//					}
//					else
//					{
//						return 0;
//					}
//				}
//				else
//				{
//					return 0;
//				}
//			}
//			else
//			{
//				return  0;
//			}
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else
//	{
//		return  0;
//	}
//}

// 逆序输出
//#include <stdio.h>
//
//int main(void)
//{
//    //声明一个数组用来接收10个整数
//    int i_number[10] = { 0 };
//
//    //接受数值
//    int i_i = 0;
//    for (i_i = 0; i_i < 10; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //逆序打印
//    for (i_i = 10; i_i > 0; i_i--)
//    {
//        printf("%d ", i_number[i_i - 1]);
//    }
//    return 0;
//}

//判断数组中正数和负数的个数
//#include <stdio.h>
//
//#define SIZE 10
//
//int main(void)
//{
//    //声明一个数组，用来接收数值
//    int i_number[SIZE] = { 0 };
//
//    //接收数值
//    int i_i = 0;
//    for (i_i = 0; i_i < SIZE; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //计算数组中正数和负数的个数
//    int i_positsive = 0;
//    int i_negative = 0;
//    for (i_i = 0; i_i < SIZE; i_i++)
//    {
//        if (i_number[i_i] < 0)
//        {
//            i_negative++;
//        }
//    }
//
//    //输出结果
//    printf("positive:%d\n", (SIZE - i_negative));
//    printf("negative:%d\n", i_negative);
//    return  0;
//}


//序列中整数去重
//#include <stdio.h>
//
//void Delete(int* i_number, int i_size, int i_address);
//int Deduplication(int* i_number, int i_size);
//
//int main(void)
//{
//    //声明变长数组的长度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //声明变长数组，只有支持c99的编译器才支持变长数组，变长数组不可以进行初始化
//    int i_number[i_size];
//
//    //获取数值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //开始去重
//    int i_length = 0;
//    i_length = Deduplication(i_number, i_size);
//
//    //输出结果
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}
//
////判断重复并去重
//int Deduplication(int* i_number, int i_size)
//{
//    int i_flag = 0;
//    int i_i = 0;
//    int i_j = 0;
//
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        i_flag = *(i_number + i_i);
//        for (i_j = 0; i_j < i_size; i_j++)
//        {
//            if (i_i == i_j)
//            {
//                continue;
//            }
//            else
//            {
//                if (i_flag == *(i_number + i_j))
//                {
//                    Delete(i_number, i_size, i_j);
//                    i_size--;
//                    i_j--;
//                }
//            }
//        }
//    }
//
//    return  i_size;
//}
//
////去重
//void Delete(int* i_number, int i_size, int i_address)
//{
//    int i_i = 0;
//
//    for (i_i = i_address; i_i < i_size - 1; i_i++)
//    {
//        *(i_number + i_i) = *(i_number + i_i + 1);
//    }
//}

//计算成绩
//#include <stdio.h>
//
//#define SIZE_X 5 
//#define SIZE_Y 6
//
//int main(void)
//{
//    //声明一个二维数组用来接收成绩
//    float f_number[SIZE_X][SIZE_Y] = { 0 };
//
//    //获取成绩并计算平均分
//    int i_i = 0;
//    int i_j = 0;
//    int i_x = 0;
//    float f_sum = 0;
//    for (i_i = 0; i_i < SIZE_X; i_i++)
//    {
//        f_sum = 0;
//        for (i_j = 0; i_j < SIZE_Y - 1; i_j++)
//        {
//            scanf("%f", &f_number[i_i][i_j]);
//        }
//
//        for (i_x = 0; i_x < SIZE_Y - 1; i_x++)
//        {
//            f_sum += f_number[i_i][i_x];
//        }
//
//        f_number[i_i][i_j] = f_sum;
//    }
//
//    //输出结果
//    for (i_i = 0; i_i < SIZE_X; i_i++)
//    {
//        for (i_j = 0; i_j < SIZE_Y; i_j++)
//        {
//            printf("%.1f ", f_number[i_i][i_j]);
//        }
//        printf("\n");
//    }
//
//    return  0;
//}

//打印某位置的数值
//#include <stdio.h>
//
//int main(void)
//{
//    //声明变长二维数组的长度
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //声明变长数组,只有支持c99的编译器才支持变长数组，变长数组不可以初始化
//    int i_number[i_size_x][i_size_y];
//
//    //获取数值
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            scanf("%d", &i_number[i_i][i_j]);
//        }
//    }
//
//    //声明一组坐标用来接收想查找的位置
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//
//    printf("%d", i_number[x - 1][y - 1]);
//    return 0;
//}

//猜凶手
//#include <stdio.h>
//
//int main(void)
//{
//	//声明一个变量用来表示凶手
//	int i_man = 0;
//
//	//开始判断
//	for (i_man = 'A'; i_man < 'E'; i_man++)
//	{
//		if (((i_man != 'A') + ('C' == i_man) + ('D' == i_man) + ('D' != i_man)) == 3)
//		{
//			printf("%c", i_man);
//		}
//	}
//	return  0;
//}

//杨辉三角
//#include <stdio.h>
//
//#define SIZE_X 100
//#define SZIE_Y 100
//
//int main(void)
//{
//	//声明一个二维数组
//	int i_number[SIZE_X][SZIE_Y] = { 0 };
//
//	//获取想打印的杨辉三角的层数
//	int i_num = 0;
//	scanf("%d", &i_num);
//
//	//向数组中添加数值
//	int i_i = 0;
//	int i_j = 0;
//	for (i_i = 0; i_i < i_num; i_i++)
//	{
//		for (i_j = 0; i_j < i_i + 1; i_j++)
//		{
//			if (0 == i_j)
//			{
//				i_number[i_i][i_j] = 1;
//			}
//			else
//			{
//				i_number[i_i][i_j] = i_number[i_i - 1][i_j] + i_number[i_i - 1][i_j - 1];
//			}
//		}
//	}
//
//	//打印结果
//	for (i_i = 0; i_i < i_num; i_i++)
//	{
//		for (i_j = i_num; i_j > i_i; i_j--)
//		{
//			printf("   ");
//		}
//		for (i_j = 0; i_j < i_num; i_j++)
//		{
//			if (0 != i_number[i_i][i_j])
//			{
//				printf("%6d", i_number[i_i][i_j]);
//			}
//		}
//		printf("\n");
//	}
//	return  0;
//}

//杨氏矩阵
//#include <stdio.h>
//
//int main(void)
//{
//	//获取杨氏矩阵的大小
//	int i_size = 0;
//	scanf("%d", &i_size);
//
//	//打印杨氏矩阵
//	int i_i = 0;
//	int i_j = 0;
//	for (i_i = 0; i_i < i_size; i_i++)
//	{
//		for (i_j = i_i; i_j < i_size + i_i; i_j++)
//		{
//			printf("%3d ", i_j);
//		}
//		printf("\n");
//	}
//	return  0;
//}

//字符串左旋
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 100
//
//void Levorotation(char* c_string, int i_length, int i_number);
//
//int main(void)
//{
//	//声明一个字符数组并获取一个字符串
//	char c_string[100] = { 0 };
//	scanf("%s", c_string);
//
//	//计算字符串的长度
//	int i_length = 0;
//	i_length = strlen(c_string);
//	//printf("%d\n", i_length);
//
//	//获取想要左旋的字符串的个数
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//开始左旋
//	Levorotation(c_string, i_length, i_number);
//
//	//输出结果
//	printf("%s", c_string);
//	return 0;
//}
//
////左旋函数
//void Levorotation(char* c_string, int i_length, int i_number)
//{
//	int i_i = 0;
//	int i_j = 0;
//	char c_temp = 0;
//	
//	for (i_i = 0; i_i < i_number; i_i++)
//	{
//		c_temp = *(c_string + i_i);
//		for (i_j = 1; i_j < i_length; i_j++)
//		{
//			*(c_string + i_j - 1) = *(c_string + i_j);
//		}
//		*(c_string + i_j - 1) = c_temp;
//	}
//}

//字符串旋转结果
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 100
//
//void Levorotation(char* c_string, int i_length, int i_number);
//
//int main(void)
//{
//	//声明两个数组用来接收两个字符串
//	char c_string_one[SIZE] = { 0 };
//	char c_string_two[SIZE] = { 0 };
//	scanf("%s", c_string_one);
//	scanf("%s", c_string_two);
//
//	//计算长度
//	int i_length = 0;
//	i_length = strlen(c_string_one);
//
//	//开始判断
//	int i_flag = 0;
//	int i_i = 0;
//	//外循环是控制每次左旋一个字符一共左旋多少次
//	for (i_i = 0; i_i < i_length; i_i++)
//	{
//		Levorotation(c_string_one, i_length, 1);
//		i_flag = strcmp(c_string_one, c_string_two);
//		if (!i_flag)
//		{
//			printf("字符串1和字符串2是旋转字符串！\n");
//			break;
//		}
//	}
//
//	if (i_flag)
//	{
//		printf("字符串1和字符串2不是旋转字符串！\n");
//	}
//	return  0;
//}
//
////左旋函数
//void Levorotation(char* c_string, int i_length, int i_number)
//{
//	int i_i = 0;
//	int i_j = 0;
//	char c_temp = 0;
//	
//	for (i_i = 0; i_i < i_number; i_i++)
//	{
//		c_temp = *(c_string + i_i);
//		for (i_j = 1; i_j < i_length; i_j++)
//		{
//			*(c_string + i_j - 1) = *(c_string + i_j);
//		}
//		*(c_string + i_j - 1) = c_temp;
//	}
//}

//序列重组矩阵
//#include <stdio.h>
//
//int main(void)
//{
//    //获取变长二维数组的大小
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //声明变长数组，只有支持c99的编译器才支持变长数组，，变长数组不可以初始化
//    int i_number[i_size_x][i_size_y];
//
//    //获取值
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            scanf("%d", &i_number[i_i][i_j]);
//        }
//    }
//
//    //输出结果
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            printf("%d ", i_number[i_i][i_j]);
//        }
//        printf("\n");
//    }
//    return  0;
//}

//判断最大值的位置
//#include <stdio.h>
//
//int main(void)
//{
//    //获取变长二维数组的大小
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //声明变长数组，只有支持c99的编译器才支持变长数组，，变长数组不可以初始化
//    int i_number[i_size_x][i_size_y];
//
//    //获取值
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            scanf("%d", &i_number[i_i][i_j]);
//        }
//    }
//
//    //获取最大值的位置
//    int i_max_x = 0;
//    int i_max_y = 0;
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            if (i_number[i_max_x][i_max_y] < i_number[i_i][i_j])
//            {
//                i_max_x = i_i;
//                i_max_y = i_j;
//            }
//        }
//    }
//
//    //输出结果
//    printf("%d %d", i_max_x + 1, i_max_y + 1);
//    return  0;
//}

//判断两个二维数组是否相等
//#include <stdio.h>
//
//int main(void)
//{
//    //获取变长二维数组的大小
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //声明两个变长数组,只有支持c99的编译器才支持变长数组，变长数组不可以初始化
//    int i_number_one[i_size_x][i_size_y];
//    int i_number_two[i_size_x][i_size_y];
//
//    //获取数组中的值
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            scanf("%d", &i_number_one[i_i][i_j]);
//        }
//    }
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            scanf("%d", &i_number_two[i_i][i_j]);
//        }
//    }
//
//    //开始比较
//    int i_flag = 1;
//    for (i_i = 0; i_i < i_size_x; i_i++)
//    {
//        for (i_j = 0; i_j < i_size_y; i_j++)
//        {
//            if ((i_number_one[i_i][i_j] != i_number_two[i_i][i_j]))
//            {
//                i_flag = 0;
//                break;
//            }
//        }
//    }
//
//    //输出结果
//    if (i_flag)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return  0;
//}

//矩阵换行和列
//#include<stdio.h>
//int main(void) {
//    int m = 0, n = 0;
//    scanf("%d %d", &m, &n);
//    int s[m][n];
//    //int ss[n][m];//一开始想用两个矩阵，发现后面如果多组输入，更改的一直是初始矩阵，且代码繁杂,采用一个矩阵的方式
//    for (int i = 0; i < m; i++) {//初始化
//        for (int j = 0; j < n; j++) {
//            scanf("%d ", &s[i][j]);
//        }
//    }
//    int t = 0;//变换次数
//    char flag = 'r';//判断行还是列变
//    int c1 = 0, c2 = 0;//变换的行（列）号
//    int temp = 0;
//    scanf("%d ", &t);
//    while (t) {
//        scanf(" %c %d %d", &flag, &c1, &c2);
//        c1--; c2--;//给的是行号，--之后才是数组下标值
//        if (flag == 'r') {
//            for (int j = 0; j < n; j++) {
//                temp = s[c2][j];//交换c1和c2行
//                s[c2][j] = s[c1][j];
//                s[c1][j] = temp;
//            }
//        }
//
//        if (flag == 'c') {
//            for (int i = 0; i < m; i++) {//交换C1和C2列
//                temp = s[i][c2];
//                s[i][c2] = s[i][c1];
//                s[i][c1] = temp;
//            }
//        }
//        t--;
//    }
//    //打印最终数组
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++)
//            printf("%d ", s[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}

//统计目标字符串中的目标子串的个数
// //时间复杂度过大
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE_M 8000
//#define SZIE_S 3
//
//int Statistics(char* c_string, int i_length);
//
//int main(void)
//{
//    //声明一个数组用来接受字符串
//    char c_string[SIZE_M] = { 0 };
//    scanf("%s", c_string);
//
//    //计算获取的字符串的长度
//    int i_length = 0;
//    i_length = strlen(c_string);
//
//    //获取字符串中目标子串的个数
//    int i_count = 0;
//    i_count = Statistics(c_string, i_length);
//
//    //输出结果
//    printf("%d", i_count);
//
//    return  0;
//}
//
////统计目标子串的个数
//int Statistics(char* c_string, int i_length)
//{
//    //声明一个数组用来记录获取的子串的下标
//    //int i_address[SZIE_S] = { 0 };
//
//    int i_count = 0;
//    int i_i = 0;
//    int i_j = 0;
//    int i_z = 0;
//    int i_a = 0;
//
//    //开始计算
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        if ('C' == c_string[i_i])
//        {
//            for (i_j = i_i + 1; i_j < i_length; i_j++)
//            {
//                if ('H' == c_string[i_j])
//                {
//                    for (i_z = i_j + 1; i_z < i_length; i_z++)
//                    {
//                        if ('N' == c_string[i_z])
//                        {
//                            i_count++;
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return  i_count;
//}

//优化
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 8001
//
//int main(void)
//{
//    //声明一个数组用来获取目标字符串
//    char c_string[SIZE] = { 0 };
//    scanf("%s", c_string);
//
//    //计算目标字符串的长度
//    int i_length = 0;
//    i_length = strlen(c_string);
//
//    //统计目标子串的个数
//    int i_i = 0;
//    long long int lli_count_c = 0;
//    long long int lli_count_ch = 0;
//    long long int lli_count = 0;
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        if ('C' == c_string[i_i])
//        {
//            lli_count_c++;
//        }
//        else if ('H' == c_string[i_i])
//        {
//            lli_count_ch += lli_count_c;
//        }
//        else if ('N' == c_string[i_i])
//        {
//            lli_count += lli_count_ch;
//        }
//    }
//
//    //输出结果
//    printf("%lld", lli_count);
//    return 0;
//}

//排序去重打印
//时间复杂多过高
//#include <stdio.h>
//
//int Deduplication(int* i_number, int i_size);
//void Delete(int* i_number, int i_size, int i_address);
//void Bubbling_sort(int* i_number, int i_length);
//
//int main(void)
//{
//    //获取变长数组的长度
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //声明变长数组，只有支持c99的编译器才支持变长数组，变长数组不可以进行初始化
//    int i_number[i_size];
//
//    //获取数值
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //开始进行打印和去重操作
//    int i_length = 0;
//    i_length = Deduplication(i_number, i_size);
//    //printf("%d\n", i_length);
//
//    //排序--冒泡排序
//    Bubbling_sort(i_number, i_length);
//
//    //打印结果
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//
//    return  0;
//}
////去重判断
//int Deduplication(int* i_number, int i_size)
//{
//    int i_flag = 0;
//    int i_i = 0;
//    int i_j = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        i_flag = i_number[i_i];
//        for (i_j = i_i + 1; i_j < i_size; i_j++)
//        {
//            if (i_flag == i_number[i_j])
//            {
//                Delete(i_number, i_size, i_j);
//                i_size--;
//                i_j--;
//            }
//        }
//    }
//
//    return  i_size;
//}
////删除
//void Delete(int* i_number, int i_size, int i_address)
//{
//    int i_i = 0;
//    for (i_i = i_address; i_i < i_size - 1; i_i++)
//    {
//        i_number[i_address] = i_number[i_i + 1];
//    }
//}
////冒泡排序
//void Bubbling_sort(int* i_number, int i_length)
//{
//    int i_i = 0;
//    int i_j = 0;
//    int i_temp = 0;
//    for (i_j = 0; i_j < i_length - 1; i_j++)
//    {
//        for (i_i = 0; i_i < i_length - i_j - 1; i_i++)
//        {
//            if (i_number[i_i] > i_number[i_i + 1])
//            {
//                i_temp = i_number[i_i];
//                i_number[i_i] = i_number[i_i + 1];
//                i_number[i_i + 1] = i_temp;
//            }
//        }
//    }
//}

//优化
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[100000] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int tmp = 0;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//#define SIZE_X 3
//#define SIZE_Y 3
//
//char Judgment(char c_chessman[SIZE_X][SIZE_Y], int i_row, int i_col);
//int main(void)
//{
//	//声明井字棋的棋盘
//	char c_chessboard[SIZE_X][SIZE_Y] = { 0 };
//
//	//获取棋子
//	int i_i = 0;
//	int i_j = 0;
//	char c_c = 0;
//	for (i_i = 0; i_i < SIZE_X; i_i++)
//	{
//		for (i_j = 0; i_j < SIZE_Y; i_j++)
//		{
//			scanf(" %c", &c_c);
//			if (c_c == '\n')
//			{
//				i_j--;
//				continue;
//			}
//			else
//			{
//				c_chessboard[i_i][i_j] = c_c;
//			}
//		}
//	}
//	//打印
//	/*for (i_i = 0; i_i < SIZE_X; i_i++)
//	{
//		for (i_j = 0; i_j < SIZE_Y; i_j++)
//		{
//			printf("%c ", c_chessboard[i_i][i_j]);
//		}
//		printf("\n");
//	}*/
//
//	//判断
//	char c_flag = 0;
//	c_flag = Judgment(c_chessboard, SIZE_X, SIZE_Y);
//	//printf("%c\n", c_flag);
//
//	//打印结果
//	if (c_flag == 's')
//	{
//		printf("No winner!\n");
//	}
//	else if (c_flag == '*')
//	{
//		printf("KiKi wins!\n");
//	}
//	else if (c_flag == '#')
//	{
//		printf("BoBo wins!\n");
//	}
//
//	return 0;
//}
//
//char Judgment(char c_chessman[SIZE_X][SIZE_Y], int i_row, int i_col)
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
//			&& c_chessman[i_i][0] != ' ' && c_chessman[i_i][0] == 'K')
//		{
//			return  '*';
//		}
//		else if (c_chessman[i_i][0] == c_chessman[i_i][1]
//			&& c_chessman[i_i][0] == c_chessman[i_i][2]
//			&& c_chessman[i_i][0] == 'B')
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
//			&& c_chessman[1][i_j] == 'K')
//		{
//			return '*';
//		}
//		else if (c_chessman[0][i_j] == c_chessman[1][i_j]
//			&& c_chessman[1][i_j] == c_chessman[2][i_j]
//			&& c_chessman[1][i_j] == 'B')
//		{
//			return  '#';
//		}
//	}
//
//	//对角线满足
//	if (c_chessman[0][0] == c_chessman[1][1]
//		&& c_chessman[1][1] == c_chessman[2][2]
//		&& c_chessman[2][2] == 'K'
//		|| c_chessman[0][2] == c_chessman[1][1]
//		&& c_chessman[1][1] == c_chessman[2][0]
//		&& c_chessman[2][0] == 'K')
//	{
//		return  '*';
//	}
//	else if (c_chessman[0][0] == c_chessman[1][1]
//		&& c_chessman[1][1] == c_chessman[2][2]
//		&& c_chessman[2][2] == 'B'
//		|| c_chessman[0][2] == c_chessman[1][1]
//		&& c_chessman[1][1] == c_chessman[2][0]
//		&& c_chessman[2][0] == 'B')
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

//BC77-有序序列插入一个数
//#include <stdio.h>
//
//#define SIZE 50
//
//void Insert(int* i_number, int i_size, int i_flag);
//
//int main(void)
//{
//	//声明一个数组用来接收一个有序序列
//	int i_size = 0;
//	scanf("%d", &i_size);
//	int i_number[SIZE] = { 0 };
//
//	//获取有序序列
//	int i_i = 0;
//	for (i_i = 0; i_i < i_size; i_i++)
//	{
//		scanf("%d", &i_number[i_i]);
//	}
//
//	//获取想要插入的数值
//	int i_flag = 0;
//	scanf("%d", &i_flag);
//
//	//开始插入
//	Insert(i_number, i_size, i_flag);
//
//	//输出结果
//	for (i_i = 0; i_i < i_size + 1; i_i++)
//	{
//		printf("%d ", i_number[i_i]);
//	}
//	return  0;
//}
//
////插入函数
//void Insert(int* i_number, int i_size, int i_flag)
//{
//	int i_i = 0;
//	for (i_i = i_size; i_i > 0; i_i--)
//	{
//		//完成移位操作
//		if (i_number[i_i - 1] > i_flag)
//		{
//			i_number[i_i] = i_number[i_i - 1];
//		}//如果大于所有数值，完成插入操作
//		else
//		{
//			i_number[i_i] = i_flag;
//			break;
//		}
//	}
//
//	//如果小于所有数值，插入数值
//	if (0 == i_i)
//	{
//		i_number[i_i] = i_flag;
//	}
//}

//小乐乐改数字
//#include <stdio.h>
//#include <math.h>
//
//int Judgement(int i_number);
//int Conversion(int i_number, int i_length);
//
//int main(void)
//{
//    //获取一个数值
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //计算该数值的位数
//    int i_length = 0;
//    i_length = Judgement(i_number);
//    //printf("%d\n", i_length);
//
//    //开始转换
//    int i_outcome = 0;
//    i_outcome = Conversion(i_number, i_length);
//
//    //输出结果
//    printf("%d", i_outcome);
//    return  0;
//}
//
////计算位数
//int Judgement(int i_number)
//{
//    if (i_number < 10)
//    {
//        return 1;
//    }
//    else
//    {
//        return  1 + Judgement(i_number / 10);
//    }
//}
//
////转换
//int Conversion(int i_number, int i_length)
//{
//    int i_num = pow(10, i_length - 1);
//    //printf("%d\n", i_num);
//    int i_i = 0;
//    int i_sum = 0;
//    int i_temp = 0;
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        i_temp = (i_number / i_num);
//        //printf("%d\n", i_temp);
//        if (0 == (i_temp % 2))
//        {
//            i_number %= i_num;
//            i_num /= 10;
//        }
//        else
//        {
//            i_sum += i_num;
//            i_number %= i_num;
//            i_num /= 10;
//        }
//    }
//
//    return i_sum;
//}

//判断一个数是不是二段数
//#include <stdio.h>
//#include <math.h>
//
//#define SIZE 10000
//
//long long int Digits(long long int i_number);
//void Insert(int* i_numbers, long long int i_number, int i_digits);
//int Judgement(int* i_numbers, long long int lli_digits);
//
//int main(void)
//{
//	//获取一个数值
//	long long int lli_number = 0;
//	scanf("%lld", &lli_number);
//
//	if (lli_number < 10)
//	{
//		printf("该数不是一个二段数!");
//	}
//	else
//	{
//		//计算该数值的位数
//		long long int lli_digits = 0;
//		lli_digits = Digits(lli_number);
//		printf("%lld\n", lli_digits);
//
//		//声明一个数组用来接收数值
//		int i_numbers[SIZE] = { 0 };
//
//		//开始接收
//		Insert(i_numbers, lli_number, lli_digits);
//		int i_i = 0;
//		for (i_i = 0; i_i < lli_digits; i_i++)
//		{
//			printf("%d ", i_numbers[i_i]);
//		}
//		printf("\n");
//
//		//判断是不是一个二段数
//		int i_flag = 0;
//		i_flag = Judgement(i_numbers, lli_digits);
//		printf("%d\n", i_flag);
//
//		//输出结果
//		if (i_flag)
//		{
//			printf("该数是一个二段数!\n");
//		}
//		else
//		{
//			printf("该数不是一个二段数!\n");
//		}
//	}
//	return  0;
//}
//
//long long int Digits(long long int lli_number)
//{
//	if (lli_number < 10)
//	{
//		return 1;
//	}
//	else
//	{
//		return  1 + Digits(lli_number / 10);
//	}
//}
//
//void Insert(int* i_numbers, long long int lli_number, int i_digits)
//{
//	int i_i = 0;
//	long long int lli_num = (long long int)pow(10, i_digits - 1);
//	for (i_i = 0; i_i < i_digits; i_i++)
//	{
//		*(i_numbers + i_i) = lli_number / lli_num;
//		lli_number %= lli_num;
//		lli_num /= 10;
//	}
//}
//
//int Judgement(int* i_numbers, long long int lli_digits)
//{
//	int i_i = 0;
//	//int i_flag = 1;
//	int i_temp = i_numbers[0];
//	int i_j = 0;
//	for (i_i = 1; i_i < lli_digits; i_i++)
//	{
//		if (i_temp != i_numbers[i_i] && 0 == i_j)
//		{
//			i_temp = i_numbers[i_i];
//			i_j++;
//		}
//		else if (i_temp != i_numbers[i_i] && 1 == i_j)
//		{
//			return  0;
//		}
//	}
//
//	return  1;
//}

//寻找二段数
#include <stdio.h>
#include <math.h>

#define SIZE 10000

long long int Digits(long long int i_number);
void Insert(int* i_numbers, long long int i_number, int i_digits);
int Judgement(int* i_numbers, long long int lli_digits);

int main(void)
{
	//获取一个数值
	long long int lli_number = 0;
	

	while ((scanf("%lld", &lli_number)))
	{
		if (!lli_number)
		{
			break;
		}
		else  
		{
			long long int lli_i = lli_number;
			long long int lli_j = 1;
			while (1)
			{
				//printf("%lld\n", lli_j);
				if (lli_i < 10)
				{
					lli_j++;
					lli_i = lli_number * lli_j;
					continue;
				}
				//计算该数值的位数
				long long int lli_digits = 0;
				lli_digits = Digits(lli_i);
				/*printf("%lld\n", lli_digits);
				Sleep(1000);*/

				//声明一个数组用来接收数值
				int i_numbers[SIZE] = { 0 };

				//开始接收
				Insert(i_numbers, lli_i, lli_digits);
				/*int i_i = 0;
				for (i_i = 0; i_i < lli_digits; i_i++)
				{
					printf("%d ", i_numbers[i_i]);
				}
				printf("\n");*/

				//判断是不是一个二段数
				int i_flag = 0;
				i_flag = Judgement(i_numbers, lli_digits);
				//printf("%d\n", i_flag);

				//输出结果
				if (i_flag)
				{
					printf("%lld:%lld",lli_number, lli_i);
					break;
				}
				/*else
				{
					printf("该数不是一个二段数!\n");
				}*/
				lli_j++;
				lli_i =lli_number * lli_j;
				//printf("%lld\n", lli_i);
				//break;
			}
		}
	}
	return  0;
}

long long int Digits(long long int lli_number)
{
	if (lli_number < 10)
	{
		return 1;
	}
	else
	{
		return  1 + Digits(lli_number / 10);
	}
}

void Insert(int* i_numbers, long long int lli_number, int i_digits)
{
	int i_i = 0;
	long long int lli_num = (long long int)pow(10, i_digits - 1);
	for (i_i = 0; i_i < i_digits; i_i++)
	{
		*(i_numbers + i_i) = lli_number / lli_num;
		lli_number %= lli_num;
		lli_num /= 10;
	}
}

int Judgement(int* i_numbers, long long int lli_digits)
{
	int i_i = 0;
	//int i_flag = 1;
	int i_temp = i_numbers[0];
	int i_j = 0;
	for (i_i = 1; i_i < lli_digits; i_i++)
	{
		if (i_temp != i_numbers[i_i] && 0 == i_j)
		{
			i_temp = i_numbers[i_i];
			i_j++;
		}
		else if (i_temp != i_numbers[i_i] && 1 == i_j)
		{
			return  0;
		}
	}

	return  1;
}