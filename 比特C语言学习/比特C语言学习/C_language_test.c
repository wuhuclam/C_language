#define _CRT_SECURE_NO_WARNINGS 1
//1.Hello word
//#include <stdio.h>
//
//int main(void)
//{
//	printf("Hello word!");
//	return  0;
//}

//2.��ӡС�ɻ�
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

//5.���������Ľϴ�ֵ
//#include<stdio.h>
//
//int main(void)
//{
//	int number1 = 0;
//	int number2 = 0;
//	printf("������������:");
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

//18.���1-100֮�������
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

//19.�׳˵����
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

//�Ż�    
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


//���ֲ��ң��۰���ң�
//#include<stdio.h>
//#define SIZE 10
//
//
//int main(void)
//{
//	int number[SIZE] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
//
//	int target_number = 0;
//	printf("������Ŀ��ֵ:");
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
//			printf("�����������е�λ��Ϊ:%d", middle);
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
//		printf("sorry,����Ҫ���ҵ����ڸ����в�����,���������룡");
//	}
//	
//	return  0;
//}

//ʵ�ֹػ����� goto���ʵ��
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define SIZE 20
//
//int main(void)
//{
//	char target[] = "������";
//	char input[SIZE] = { 0 };
//
//	system("shutdown -s -t 60");
//
//flag:
//	printf("������������������ĵ��Խ���60����Զ��ػ���");
//	scanf("%s", input);
//
//	if (0 == strcmp(input, target))
//	{
//		system("shutdown -a");
//		printf("��ȡ���ػ���");
//	}
//	else
//	{
//		goto flag;
//	}
//	return 0;
//}

//ѭ�����ʵ��
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define SIZE 20
//
//int main(void)
//{
//	char target[] = "������";
//	char input[SIZE] = { 0 };
//
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("������������������ĵ��Խ���60����Զ��ػ���");
//		scanf("%s", input);
//
//		if (0 == strcmp(input, target))
//		{
//			system("shutdown -a");
//			printf("��ȡ���ػ���");
//			break;
//		}
//
//	}
//	
//	return 0;
//}

//ʵ�ֲ���С��Ϸ
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
//	srand((unsigned int )time(NULL));  //�������������������
//
//	menu();
//
//	do
//	{
//		//system("cls");
//
//		printf("���������ѡ��:");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:system("cls");
//			game();
//			system("cls");
//			printf("��ϲ�㣡�¶��ˣ�\n");
//			menu();
//			break;
//		case 0:system("cls");
//			printf("��Ϸ���˳���\n");
//			break;
//		default:system("cls");
//			printf("����������ˣ����������룡\n");
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
//	int ret = (rand() % 100) + 1;      //����1- 100֮��������
//
//	int input = 0;
//
//	while (1)
//	{
//		printf("������һ����:");
//		scanf("%d", &input);
//
//		if (ret == input)
//		{
//			break;
//		}
//		else if (ret > input)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else if (ret < input)
//		{
//			printf("�´��ˣ�\n");
//		}
//	}
//}

//��д���룬��ʾ����ַ��������ƶ������м���
//#include<stdio.h>
//#include<windows.h>
//
//int main(void)
//{
//	char String_one[] = "Hello!bit";
//	char String_two[] = "#########";
//
//	int left = 0;
//	int right = sizeof(String_one) / sizeof(String_one[0]) - 2;  //�ַ����Ľ�βΪ'\0'
//	/*printf("%d", right);
//	printf("%c", String_one[right]);*/
//
//	while (left <= right)
//	{
//		String_two[left] = String_one[left];
//		String_two[right] = String_one[right];
//
//		Sleep(1000);     //��ͣ�����ִ���Ѻ���Ϊ��λ����ʹ�õ�ʱ����Ҫ����ͷ�ļ�windows.h
//		printf("%s\n", String_two);
//
//		left++;
//		right--;
//	}
//	return  0;
//}

//��9�ĸ���
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

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

//�����ֵ
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

//��ӡ�˷��ھ���
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

//дһ�������ӡ1-100֮������3�ı���������
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

//д���뽫�������������Ӵ�С�����
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

//�ж�����
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

//�ж�����
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

//���������������������������Լ��
//#include<stdio.h>
//
//int main(void)
//{
//	int number_one = 0;
//	int number_two = 0;
//	printf("������������:");
//	scanf("%d %d", &number_one , &number_two);
//
//	while (number_one % (number_two--) != 0)
//		;
//	printf("%d", number_two + 1);
//	return 0;
//}


//9��29���Ͽ�����ʵ��
//1.��strcpy�⺯����ʹ��
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

//2.�Կ⺯��memset��ʹ��
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

//3.����ʵ����������
//#include<stdio.h>
//
//void Swap(int* , int* );
//
//int main(void)
//{
//	int number_one = 0;
//	int number_two = 0;
//	printf("������������:");
//	scanf("%d %d", &number_one, &number_two);
//
//	printf("����ǰ����Ϊ:number_one=%d,number_two=%d\n", number_one,number_two);
//	Swap(&number_one, &number_two);
//	printf("����������Ϊ:number_one=%d,number_two=%d\n", number_one,number_two);
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

//����ʵ�ֳ˷���
//#include<stdio.h>
//
//void multiplication_table(int max);
//
//int main(void)
//{
//	int max = 0;
//	printf("���������Χ:");
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

//����ʵ���ж�����
//#include<stdio.h>
//
//void Leap_year(int year);
//
//int main(void)
//{
//	int year = 0;
//	printf("������һ�����:");
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
//		printf("���������꣡");
//	}
//	else
//	{
//		printf("���겻�����꣡");
//	}
//}

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
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

//��ӡʥ����
//#include<stdio.h>
//
//int main(void)
//{
//	char symbol = 0;
//	//printf("������һ������:");
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

//���ú������������Ż�  ���������ͺ�����ǰ����Ǵ���1����
//#include<stdio.h>
//#include<math.h>
//
//int prime_number(int number);
//
//int main(void)
//{
//	int number = 0;
//	/*printf("������һ������2������:");
//	scanf("%d", &number);*/
//
//	for (number = 1; number < 100; number++)
//	{
//
//		if (prime_number(number))
//		{
//			printf("%d��������\n", number);
//		}
//		else
//		{
//			printf("%d����������\n", number);
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
//		for (i = 2; i < sqrt(number); i++)         //��������һ�����ĸ���
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

//�Ժ����ķ�װ
//#include<stdio.h>
//#include"add.h"
//#pragma comment(lib,"Adds.lib")
//
//int main(void)
//{
//	int number_one = 0;
//	int number_two = 0;
//	printf("������������:");
//	scanf("%d %d", &number_one, &number_two);
//
//	printf("������Ϊ:%d", Add(number_one, number_two));
//	return  0;
//}

//�ݹ�ļ�ʵ��
//��ӡһ����λ����ÿһλ
//1.
//#include<stdio.h>
//
//void Print_each_one(int number);
//
//int main(void)
//{
//	int number = 0;
//	printf("������һ����λ��:");
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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ݹ�
//#include<stdio.h>
//
//int Factorial(int number);
//
//int main(void)
//{
//	int number = 0;
//	printf("������һ����:");
//	scanf("%d", &number);
//
//	printf("�����Ľ׳�Ϊ:%d", Factorial(number));;
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


//�ǵݹ�
//#include<stdio.h>
//
//int main(void)
//{
//	int number = 0;
//	printf("������һ����:");
//	scanf("%d", &number);
//
//	int i = 0;
//	int factorial = 1;
//	for (i = 1; i < number + 1; i++)
//	{
//		factorial *= i;
//	}
//
//	printf("�׳�Ϊ:%d", factorial);
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

//Ԥ�����ĸ�ϰ
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

//��һ����λ�������������
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

//��������һ��ѧ����3�Ƴɼ�������Ļ�������ѧ�����ܳɼ��Լ�ƽ���ɼ���
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

//�ݹ�ʵ��n��k�η�
//#include<stdio.h>
//
//int Cumulative_multiplication(int i_number, int i_k);
//
//int main(void)
//{
//	int i_number = 0;
//	int i_k = 0;
//	printf("������һ�����Ͷ��ٴη�:");
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

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//#include<stdio.h>
//
//int DigitSum(unsigned int u_number);
//
//int main(void)
//{
//	unsigned int u_number = 0;
//	printf("������һ���Ǹ�����:");
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//#include<stdio.h>
//
//int main(void)
//{
//	char c_String[] = "abcdefg";
//	int i_length = sizeof(c_String) / sizeof(c_String[0]);
//
//	printf("�ı�֮ǰ������Ϊ:%s", c_String);
//	Reverse_string(c_String, i_length);
//	printf("�ı�֮�������Ϊ:%s",c_String);
//	return  0;
//}
//
//void Reverse_string(char* c_String[], int i_length)
//{
//
//}

//���ַ�������
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

//ģ��ʵ��strlen
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
//��дһ�����������Դ�����ʱ���������ַ����ĳ���
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

//�ݹ�ʵ����n�Ľ׳�
//#include <stdio.h>
//
//int Factorial(int i_number);
//
//int main(void)
//{
//	int i_number = 0;
//	printf("������һ������Ҫ��׳˵�����:");
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

//�ǵݹ�ʵ��
//#include <stdio.h>
//
//int Factorial(int i_number);
//
//int main(void)
//{
//	int i_number = 0;
//	printf("������һ������Ҫ��׳˵���:");
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

//�ݹ�ʵ��쳲���������
//#include <stdio.h>
//
//int Fibonacci(int i_num);
//
//int main(void)
//{
//	int i_num = 0;
//	printf("����������Ҫ���ҵ�쳲��������е�λ��:");
//	scanf("%d", &i_num);
//
//	int i_number = 0;
//	i_number = Fibonacci(i_num);
//	printf("��쳲����������е�%dλ����Ϊ:%d", i_num, i_number);
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

//ѭ��ʵ��
//#include <stdio.h>
//
//int Fibonacci(int i_num);
//
//int main(void)
//{
//	int i_num = 0;
//	printf("����������Ҫ��쳲����������в��ҵ�λ��:");
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


//��ð������һ��������������Ȼ���ڲ��������е�ֵ
//#include <stdio.h>
//#define SIZE 10
//
//void Bubbling_sorting(int* ik_sequence, int i_size);
//int Two_point_lookup(int i_number, int* ik_sequence, int i_size, int* address);
//
//int main(void)
//{
//	//�����еĳ�ʼ��
//	int i_sequence[SIZE] = { 0 };
//	printf("������10������:");
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", i_sequence + i);
//	}
//
//	//�����н�������
//	Bubbling_sorting(i_sequence, SIZE);
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", *(i_sequence + i));
//	}
//
//	//�������е������в���
//	int i_number = 0;
//	printf("����������Ҫ���ҵ���:");
//	scanf("%d", &i_number);
//	int i_flag = 0;
//	int i_address = 0;
//	i_flag = Two_point_lookup(i_number, i_sequence, SIZE, &i_address);
//
//	//�Խ�������
//	if (i_flag)
//	{
//		printf("����Ҫ���ҵ����ڸ������д��ڣ�λ��Ϊ%d!\n", i_address);
//	}
//	else
//	{
//		printf("��Ǹ����Ҫ���ҵ����ڸ������в�����!\n");
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//#include<stdio.h>
//
//void Reverse_string(char c_String[], int i_left, int i_right);
//
//int main(void)
//{
//	char c_String[] = "abcdefg";
//	int i_length = sizeof(c_String) / sizeof(c_String[0]);
//
//	printf("�ı�֮ǰ������Ϊ:%s\n", c_String);
//	int i_left = 0;
//	int i_right = i_length - 2;
//	Reverse_string(c_String, i_left, i_right);
//	printf("�ı�֮�������Ϊ:%s\n",c_String);
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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
//#include <stdio.h>
//
//int My_strlen(char c_string[]);
//
//int main(void)
//{
//	char c_string[] = "abcdefg";
//
//	//ģ��ʵ��strlen
//	int i_length = 0;
//	i_length = My_strlen(c_string);
//
//	//��ӡ���
//	printf("���ַ����ĳ���Ϊ:%d", i_length);
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

//�ݹ�
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

//С�������  �ڼ����ʱ��ע���������
//#include <stdio.h>
//
//long long int Summation(int i_number);
//
//int main(void)
//{
//    //�Ӽ����л�ȡһ����
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //�Ը�������������ļ���
//    long long int i_sum = 0;
//    i_sum = Summation(i_number);
//
//    //������
//    printf("%lld", i_sum);
//    return  0;
//}
//
////���������
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

//N����֮��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//    //��ȡ��Ӧ��ȵ���
//    int i_number[i_size];
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//    //���
//    int i_sum = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        i_sum += i_number[i_i];
//    }
//    //������
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
//int Factorial(int i_number); //�׳˺���������
//
//int main(void)
//{
//	//�Ӽ����л�ȡ��Ҫ��׳˵���
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//��Factorial()����ʵ�ֶԻ�ȡ��������׳�
//	int i_factorial = 0;
//	i_factorial = Factorial(i_number);
//
//	//������
//	printf("%d", i_factorial);
//
//	return  0;
//}
//
////��׳˺�����ʵ��
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

//���׹�ʽ����
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//    //��ȡ�����ε����߳�
//    float f_length_a = 0;
//    float f_length_b = 0;
//    float f_length_c = 0;
//    scanf("%f %f %f", &f_length_a, &f_length_b, &f_length_c);
//
//    //���������εı߳������
//    float f_circumference = f_length_a + f_length_b + f_length_c;
//    float f_area = 0.0f;
//    float f_p = 0.0;
//    f_p = f_circumference / 2;
//    //float f_x = f_p * (f_p - f_length_a) * (f_p - f_length_b) * (f_p - f_length_c);
//    f_area = sqrt(f_p * (f_p - f_length_a) * (f_p - f_length_b) * (f_p - f_length_c));
//    printf("circumference=%.2f area=%.2lf", f_circumference, f_area);
//    return  0;
//}

//������������
//#include <stdio.h>
//#define �� 3.1415926
//
//int main(void)
//{
//    ��ȡ����İ뾶
//    double d_radius = 0.0;
//    scanf("%lf", &d_radius);
//
//    ������������
//    double d_volume = 0.0;
//    d_volume = (4.0 / 3.0) * �� * (d_radius * d_radius * d_radius);
//
//    printf("%.3lf", d_volume);
//    return  0;
//}

//��Сдת��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ�ַ�
//    char c_character = 0;
//
//    //��ȡ�����ַ�
//    while (scanf("%c", &c_character) != EOF)          // EOF ����ʾ��������Ԥ����ָ�����stdio,hͷ�ļ���
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

//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ��㡣
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡn�η�
//    int i_num = 0;
//    scanf("%d", &i_num);
//
//    //������
//    printf("%d", 1 << i_num);
//    return  0;
//}


//KiKi������
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ�����̵ĺ���i_n��i_h���Ӻ;���i_m����
//    int i_n = 0;
//    int i_h = 0;
//    int i_m = 0;
//
//    //��ȡ��ֵ������ʣ��ĺ���
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
//        //������
//        //printf("%d", i_m % i_h);
//        printf("%d", i_n - i_number);
//    }
//
//
//    return 0;
//}

//������Ϣ
//#include<stdio.h>
//
//int main(void)
//{
//    printf("I lost my cellphone!");
//    return  0;
//}

//���ѧ����Ϣ
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

//����ƽ���ɼ�
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

//����A+B
//#include <stdio.h>
//
//int main(void)
//{
//    //������������
//    int i_number_one = 0;
//    int i_number_two = 0;
//
//    //��ȡ��ֵ
//    scanf("%x %o", &i_number_one, &i_number_two);
//
//    //������
//    printf("%d", i_number_one + i_number_two);
//
//    return  0;
//}

//��memset�����ĸ�ϰ
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	//����һ���ַ���
//	char c_string[] = "Hello,bit";
//
//	//��ӡ����ǰ���ַ����͸��ĺ���ַ������Ա�
//	printf("%s\n", c_string);
//
//	//����memset����
//	memset(c_string, '#', 5);
//
//	//��ӡ���
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

//�ж���ĸ
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ���ַ�����
//    char c_character = 0;
//
//    //��ȡһ���ַ�
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

//��������
//#include <stdio.h>
//#define STANDARD_ONE 18.5
//#define STANDARD_TWO 23.9
//
//int main(void)
//{
//    //��������float���͵ı��� ���Ӽ����л�ȡֵ
//    float f_weight = 0.0f;
//    float f_length = 0.0f;
//    scanf("%f %f", &f_weight, &f_length);
//
//    //��������ָ���������������ָ���ļ���
//    float f_bim = 0.0f;
//    f_bim = f_weight / ((f_length) * (f_length));
//
//    //��ֱ�����������������Ƚϴ�С������ͨ��������ʵ��
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

//�������ʵ��
//#include "Backgammon.h"
//
//int main(void)
//{
//	//����һ���������������û���ѡ��
//	int i_input = 0;
//
//	//���������������
//	srand((unsigned int)time(NULL));
//
//	//�û�ѡ���߼���ʵ��
//	do
//	{
//		system("cls");
//		//��ȡ�û���ѡ��
//		Meum();
//		printf("�û�����������ѡ��:");
//		scanf("%d", &i_input);
//
//		//���ݻ�ȡ�Ľ���ó���Ӧ�Ľ��
//		switch (i_input)
//		{
//		case 1:system("cls");
//			Game();
//			break;
//		case 0:printf("��Ϸ����!\n");
//			break;
//		default:printf("��ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (i_input);
//	return  0;
//}

//��������
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//#include <stdio.h>
//
//int main(void)
//{
//	//�����������������ַ���
//	char c_string_one[] = "abcdefg";
//	char c_string_two[] = "hijklno";
//
//	//����ǰ
//	printf("c_string_one:%s\n", c_string_one);
//	printf("c_string_two:%s\n", c_string_two);
//
//	//����
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
//	//������
//	printf("c_string_one:%s\n", c_string_one);
//	printf("c_string_two:%s\n", c_string_two);
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�

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
//	//����һ����������
//	int i_number[SIZE] = { 0 };
//
//	//��������г�ʼ��
//	Init(i_number);
//
//	int i_i = 0;
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		scanf("%d", i_number + i_i);
//	}
//		 
//	//�ú���ʵ�ֶ���������Ĵ�ӡ
//	Print(i_number);
//
//	//����ʵ�����������
//	Reverse(i_number);
//
//	Print(i_number);
//	return  0;
//}
//
////��ʼ��������ʵ��
//void Init(int* i_number)
//{
//	//����һ���������ڶ�����ĳ�ʼ��
//	int i_i = 0;
//
//	//��ʼ��ʼ��
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		i_number[i_i] = 0;
//	}
//}
//
////��ӡ������ʵ��
//void Print(int* i_number)
//{
//	//����һ���������ڴ�ӡ����
//	int i_i = 0;
//
//	//��ɴ�ӡ��ʵ��
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		printf("%d ", i_number[i_i]);
//	}
//	printf("\n");
//}
//
////���ú�����ʵ��
//void Reverse(int* i_number)
//{
//	//������������һ������forѭ��һ�����ڻ�ȡ�м�ֵһ����Ϊ�м�ֵ
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

//��ð������һ��������������Ȼ���ڲ��������е�ֵ
//#include <stdio.h>
//#define SIZE 10
//
//void Bubbling_sorting(int* ik_sequence, int i_size);
//int Two_point_lookup(int i_number, int* ik_sequence, int i_size, int* address);
//
//int main(void)
//{
//	//�����еĳ�ʼ��
//	int i_sequence[SIZE] = { 0 };
//	printf("������10������:");
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		scanf("%d", i_sequence + i);
//	}
//
//	//�����н�������
//	Bubbling_sorting(i_sequence, SIZE);
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("%d ", *(i_sequence + i));
//	}
//
//	//�������е������в���
//	//int i_number = 0;
//	//printf("����������Ҫ���ҵ���:");
//	//scanf("%d", &i_number);
//	//int i_flag = 0;
//	//int i_address = 0;
//	//i_flag = Two_point_lookup(i_number, i_sequence, SIZE, &i_address);
//
//	////�Խ�������
//	//if (i_flag)
//	//{
//	//	printf("����Ҫ���ҵ����ڸ������д��ڣ�λ��Ϊ%d!\n", i_address);
//	//}
//	//else
//	//{
//	//	printf("��Ǹ����Ҫ���ҵ����ڸ������в�����!\n");
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
//    //��������������Ϊ��ά�䳤������к��еĴ�С����ȡ��ֵ
//    int i_n = 0;
//    int i_m = 0;
//    scanf("%d %d", &i_n, &i_m);
//
//    //����һ���䳤���飬�䳤���鲻���Գ�ʼ��
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
//    //���
//    int i_sum = 0;
//    for (i_i = 0; i_i < i_n; i_i++)
//    {
//        for (i_j = 0; i_i < i_m; i_j++)
//        {
//            i_sum += i_number[i_i][i_j];
//        }
//    }
//
//    //������
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

//����������ʱ������������������������
//#include <stdio.h>
//
//int main(void)
//{
//	int i_number_one = 20;
//	int i_number_two = 30;
//
//	printf("����ǰ���������ֱ�Ϊ:\n");
//	printf("i_number_one = %d, i_number_two = %d\n", i_number_one,i_number_two);
//
//	i_number_one = i_number_one ^ i_number_two;
//	i_number_two = i_number_one ^ i_number_two;
//	i_number_one = i_number_one ^ i_number_two;
//
//	printf("���������������ֱ�Ϊ:\n");
//	printf("i_number_one = %d, i_number_two = %d\n", i_number_one, i_number_two);
//	return  0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//    //����������������ȡֵ
//    int i_number_one = 0;
//    int i_number_two = 0;
//    scanf("%d %d", &i_number_one, &i_number_two);
//
//    //�������������в�ͬλ�ĸ���
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
//    //����һ����������forѭ��
//    int i_i = 0;
//
//    //��ʼ�ж�
//    //��������һ��������¼��һ��������¼����
//    int i_business = 0;
//    int i_residual = 0;
//    //����һ�����������ڲ�ѭ��
//    int i_j = 0;
//    //����һ������������¼��
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

//ð�������Ӧ��
//#include <stdio.h>
//
//void Bubbling_sorting(int* i_score, int i_size);
//
//int main(void)
//{
//    //����һ�������������䳤����ĳ��Ȳ���ȡ��ֵ
//    int i_size = 0;
//    scanf("%d ", &i_size);
//
//    //����һ����������forѭ��
//    int i_i = 0;
//    int i_score[i_size];  //�䳤���鲻���Գ�ʼ�����䳤�����ʹ��һ����Ҫ������֧��c99��
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", i_score + i_i);
//    }
//
//    //����(ð������)
//    Bubbling_sorting(i_score, i_size);
//
//    //���ǰ�����ĳɼ�
//    for (i_i = 0; i_i < 5; i_i++)
//    {
//        printf("%d ", i_score[i_i]);
//    }
//    return  0;
//}
//
////ð�������ʵ��
//void Bubbling_sorting(int* i_score, int i_size)
//{
//    //����������������forѭ��
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

//Ʊ��ͳ��
//#include <stdio.h>
//
//#define SIZE 1000
//
//int main(void)
//{
//    //����һ��ͶƱ����
//    char c_tickets[SIZE] = { 0 };
//
//    //��ʼͶƱ
//    char c_ticket = 0;
//    int i_i = 0;
//    while ((c_ticket = getchar()) != '0')
//    {
//        c_tickets[i_i++] = c_ticket;
//    }
//    c_tickets[i_i] = '0';
//    //ͳ�ƽ��
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
//    //������
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

//���������
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ���������ڽ������̵���ֵ
//    int i_uotient = 0;
//    scanf("%d", &i_uotient);
//
//    //�����ж�
//    if (140 <= i_uotient)
//    {
//        printf("Genius");
//    }
//
//    return  0;
//}

//�����ɼ�
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ����������ʾ�ɼ�
//    int i_score = 0;
//    scanf("%d", &i_score);
//
//    //�����ж�
//    if (i_score >= 90 && i_score <= 100)
//    {
//        printf("Perfect");
//    }
//
//    return  0;
//}

//�������
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ�������������ճɼ�
//    int i_score = 0;
//
//    //�������벢�ж�
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

//�ж�������ż��
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ���������ڽ�����ֵ
//    int i_number = 0;
//
//    //�������벢�ж�
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

//��߷���
//#include <stdio.h>
//
//int main(void)
//{
//    //�������������������ո��Ƶĳɼ�
//    int i_score_one = 0;
//    int i_score_two = 0;
//    int i_score_three = 0;
//    scanf("%d %d %d", &i_score_one, &i_score_two, &i_score_three);
//
//    //����һ�����������Ƴɼ��е����ֵ
//    int i_max = i_score_one;
//
//    //�����ж�
//    //����һ������������ʵ������ֵ�Ľ���
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
//    //������
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

//������̨������
//#include <stdio.h>
//
//int Manner(int i_number);
//
//int main(void)
//{
//    //����һ������������ȡ̨�׵�����
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //������¥�ݵķ�ʽ������
//    int i_manner = 0;
//    i_manner = Manner(i_number);
//
//    //������
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

//ɾ�������е�ָ��Ԫ��
//#include <stdio.h>
//
//int  Delete(int* i_number, int i_flag, int i_size);
//void Deletes(int* i_number, int i_i, int i_size);
//
//int main(void)
//{
//    //����һ���������ڽ��ܱ䳤����ĳ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //����һ���䳤���飬�䳤���鲻���Գ�ʼ����ֻ��֧�ִ�c99�ı�������֧�ֱ䳤����
//    int i_number[i_size];
//
//    //�Ա䳤���鸳��ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", i_number + i_i);
//    }
//
//    //��ȡ��Ҫɾ������ֵ
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //ɾ��
//    int i_count = 0;   //������ʾɾ����Ԫ�صĸ���
//    i_count = Delete(i_number, i_flag, i_size);
//
//    //���ɾ����Ľ��
//    for (i_i = 0; i_i < i_size - i_count; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//
//    return  0;
//}
//
////ɾ��Ԫ��
//int  Delete(int* i_number, int i_flag, int i_size)
//{
//    //����һ���������ڼ�¼ɾ��Ԫ�صĸ���
//    int i_count = 0;
//    int i_i = 0;
//
//    //��ʼ�жϲ�ִ��ɾ��
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
////ִ��ɾ������
//void Deletes(int* i_number, int i_i, int i_size)
//{
//    for (; i_i < i_size; i_i++)
//    {
//        i_number[i_i] = i_number[i_i + 1];
//    }
//}

//��ɾ���������Ż�
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

//С������ŷ�����
//#include <stdio.h>
//
//int main(void)
//{
//    //��������������ȡ��������
//    long long int ll_number_one = 0;
//    long long int ll_number_two = 0;
//    scanf("%lld %lld", &ll_number_one, &ll_number_two);
//
//    //������С��Լ��
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
//    //������󹫱���
//    long long int ll_common_multiples = 0;
//    ll_common_multiples = (ll_number_one * ll_number_two) / ll_temp;
//
//    //������
//    printf("%lld", ll_common_multiples + ll_temp);
//    return  0;
//}

//����ת��
//#include <stdio.h>
//
//void Six(int i_number);
//
//int main(void)
//{
//    //����һ������������ȡһ��ʮ������
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //�����ʮ��������Ӧ����������
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

//�����Ǿ����ж�
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ������������ʾ��ά�䳤����Ĵ�С
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //����һ����ά�䳤����,�䳤���鲻���Գ�ʼ����ֻ��֧��c99�ı������ſ���ʹ�ñ䳤����
//    int i_number[i_size][i_size];
//
//    //���ά������и�ֵ
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
//    //�����ж�
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
//     //������
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

//��ӡ���������Ƶ�����λ��ż��λ
//#include <stdio.h>
//
//#define SIZE 16
//
//int main(void)
//{
//	//����һ���������ڻ�ȡһ������
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//������������ֱ����ڻ�ȡһ�����Ķ�������������λ��ż��λ��ֵ
//	int i_odd_number[SIZE] = { 0 };
//	int i_even_number[SIZE] = { 0 };
//
//	//��ʼ��ȡ
//	int i_i = 0;
//	int i_e = 0;  //ż������ļ�����
//	int i_o = 0;   //��������ļ�����
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
//	//������
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

// ����·�����
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
//    //���������������ڻ�ȡ����·�
//    int i_year = 0;
//    int i_month = 0;
//
//    //�����������
//    //�ж�����
//    int i_flag = 0;
//
//    while (scanf("%d %d", &i_year, &i_month) != EOF)
//    {
//        i_flag = Leap_year(i_year);
//
//        //�������
//        Days(i_flag, i_month);
//    }
//
//    return  0;
//}
//
////�ж�����
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
////�������
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


//BC47-�ж��ǲ�����ĸ
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ������������ȡһ���ַ�
//    char c_character = 0;
//
//    //�������벢����ж�
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

//��ĸ��Сдת��
//#include <stdio.h>
//
//int main() {
//    //����һ���������ڻ�ȡһ����ĸ
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

//����
//#include <stdio.h>
//
//float Compute(float f_price, int i_month, int i_day, int i_flag);
//
//int main(void)
//{
//    //�����ĸ���������ɻ�ȡ
//    float f_price = 0.0f;
//    int i_month = 0;
//    int i_day = 0;
//    int i_flag = 0;
//    scanf("%f %d %d %d", &f_price, &i_month, &i_day, &i_flag);
//
//    //�����������ѵļ۸�
//    float f_prices = 0.0;
//    f_price = Compute(f_price, i_month, i_day, i_flag);
//
//    //������
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

//ͳ��һ�������Ķ���������1�ĸ���
//1.����λ������������
//#include <stdio.h>
//
//void Count(unsigned int i_number);
//
//int main(void)
//{
//	//��ȡһ����
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//ͳ�ƴ�ӡ
//	//Count(i_number);
//	Count((unsigned int)i_number);
//	return  0;
//}
//
////void Count(int i_number)
////{
////	//����
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
////	//��ӡ���
////	printf("%d", i_count);
////}
//
////2.ͨ����������������
////void Count(unsigned int i_number)
////{
////	//������
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
////	//������
////	printf("%d", i_count);
////}
//
////3.ͨ����������ͼ�������
//void Count(unsigned int i_number)
//{
//	//������
//	int i_count = 0;
//
//	while (i_number)
//	{
//		i_number &= (i_number - 1);
//		i_count++;
//	}
//
//	//������
//	printf("%d", i_count);
//}

//����շת����������Լ������С������
//#include <stdio.h>
//
//int main(void)
//{
//	//��ȡ��������
//	int i_number_one = 0;
//	int i_number_two = 0;
//	scanf("%d %d", &i_number_one, &i_number_two);
//
//	//�������Լ��
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
//	//������С������
//	int i_min_common_multiples = 0;
//	i_min_common_multiples = (i_number_one * i_number_two) / i_max_common_divisors;
//
//	//������
//	printf("%d %d", i_max_common_divisors, i_min_common_multiples);
//	return  0;
//}

//��������������ж�һ�����ǲ���2�ı���
//#include <stdio.h>
//
//int main(void)
//{
//	//��ȡһ����
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//�ж�
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

//���㵥λ��Ծ����
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
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

//�ж�������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ�����ε����߳�
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

//�����������ݳ̶�
//#include <stdio.h>
//
//void sum(int zhong, int gao)
////����һ��������������
//{
//	double a = 0;
//	a = zhong / (gao * gao / 10000.0);
//	//����BMIֵ���������ڱ���a��
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
//		//ѭ��������ߺ�����
//	{
//		sum(c, d);
//	}
//	return 0;
//}

//�򵥼�����        �����︴ϰ��switch�����÷�
//#include <stdio.h>
//
//void Addition(float f_number_one, float f_number_two);
//void Sub(float f_number_one, float f_number_two);
//void Mul(float f_number_one, float f_number_two);
//void Div(float f_number_one, float f_number_two);
//
//int main(void)
//{
//	//��ȡ������1������Ͳ�����2
//	float f_number_one = 0.0f;
//	char c_character = 0;
//	float f_number_two = 0.0f;
//	scanf("%f%c%f", &f_number_one,&c_character,&f_number_two);
//
//	//��ʼ��������
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
////�ӷ�
//void Addition(float f_number_one, float f_number_two)
//{
//	printf("%.4f+%.4f=%.4f\n", f_number_one, f_number_two, (f_number_one + f_number_two));
//}
////����
//void Sub(float f_number_one, float f_number_two)
//{
//	printf("%.4f-%.4f=%.4f\n", f_number_one, f_number_two, (f_number_one - f_number_two));
//}
////�˷�92.0*22.3
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
////����
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

//��ӡͼ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //ʵ�ִ�ӡ
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

//��ӡ������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//ֱ��������ͼ��
//include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//��תֱ��������ͼ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//��ӡ������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//��ӡ��������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//����ͼ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ӡ����
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

// K��ͼ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//����ͼ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//��ӡб����
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//��б����ͼ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ӡ���
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

//��ӡx��
//#include <stdio.h>
//
//#define SIZE 20
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //����һ������
//    char c_character[SIZE] = { 0 };
//
//    //��ӡ���
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

//��ӡ������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ 
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

//��ӡ����������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ����
//    int i_number = 0;
//
//    //��ʼ��ӡ
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

//��ӡ�������
//#include <stdio.h>
//
//int main(void)
//{
//    printf("Happy New Year*2019*");
//    return  0;
//}

//����ƽ���ɼ�
//#include <stdio.h>
//
//#define SIZE 5
//
//int main(void)
//{
//    //����һ���������ڽ������
//    float f_height[SIZE] = { 0.0f };
//
//    //������ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < SIZE; i_i++)
//    {
//        scanf("%f", &f_height[i_i]);
//    }
//
//    //����ƽ��ֵ
//    float f_avg = 0.0f;
//    for (i_i = 0; i_i < SIZE; i_i++)
//    {
//        f_avg += f_height[i_i];
//    }
//
//    //��ӡ���
//    printf("%.2f", f_avg / SIZE);
//    return 0;
//}

//�������
//#include <stdio.h>
//
//#define NUMBER 5
//
//int main(void)
//{
//	//��ȡһ����
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//��ʼ����
//	int i_i = 0;
//	int i_sum = 0;
//	int i_temp = i_number;
//	for (i_i = 0; i_i < NUMBER; i_i++)
//	{
//		i_sum += i_number;
//		i_number = (i_number * 10) + i_temp;
//	}
//
//	//��ӡ���
//	printf("%d", i_sum);
//	return  0;
//}

//��ӡˮ�ɻ���
//#include <stdio.h>
//
//int Number_of_digits(int i_number);
//int Number_of_daffodils(int i_number, int i_number_of_digits);
//
//int main(void)
//{
//	//����һ��ѭ�������ж�0����100000֮���ˮ�ɻ���
//	int i_number = 0;
//	for (i_number = 0; i_number < 100001; i_number++)
//	{
//		//�ж�һ������λ��
//		int i_number_of_digits = 0;
//		i_number_of_digits = Number_of_digits(i_number);
//		/*printf("%d", i_number_of_digits);
//		break;*/
//
//		//��ʼ�ж�
//		int i_flag = 0;
//		i_flag = Number_of_daffodils(i_number, i_number_of_digits);
//		//printf("%d", i_flag);
//		
//		//������
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

//�ַ�������
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 10001
//
//void Reverse(char* c_string, int i_left, int i_right);
//
//int main(void)
//{
//    //����һ���ַ���
//    char c_string[SIZE] = { 0 };
//
//    //��ȡ�ַ���
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
//    //�����ַ����ĳ���
//    int i_length = 0;
//    i_length = strlen(c_string);
//    int i_left = 0;
//    int i_right = i_length - 1;
//
//    //��ʼ����
//    Reverse(c_string, i_left, i_right);
//
//    //��ӡ���
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

//��ָ���ӡ�����е�����
//#include <stdio.h>
//
//#define SIZE 10
//
//int main(void)
//{
//	//����һ������
//	int i_number[SIZE] = { 0 };
//
//	//��ȡ�����ֵ
//	int i_i = 0;
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		scanf("%d", i_number + i_i);
//	}
//
//	//����ָ�����
//	int* p_i_number = NULL;
//	p_i_number = i_number;
//
//	//��ӡ���
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		printf("%d ", *(p_i_number + i_i));
//	}
//
//	return  0;
//}

//�ҿ�Σ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ�ۼ�����ѧ��
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

//���ÿ�������HTTP״̬�������״̬���Ӧ�ĺ��壬�����Ӧ���£�

//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ��״̬��
//    int i_number = 0;
//
//    //��ʼ�ж�
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
//        default:printf("ɶҲû��");
//            break;
//
//        }
//    }
//    return  0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//#include <stdio.h>
//
//int main(void)
//{
//	//��ȡ��ʱ��Ǯ��
//	int i_money = 0;
//	scanf("%d", &i_money);
//
//	//��ʼ������Ժȵ�ƿ��
//	//�������ƿ��
//	int i_sum = i_money;
//
//	//���Ի���ƿ��
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

//��߷ֺ���ͷ�ֻ��
//#include <stdio.h>
//
//int Max_score(const int* i_score, int i_size);
//int Min_score(const int* i_score, int i_size);
//
//
//int main(void)
//{
//    //��ȡ�䳤����ĳ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //����䳤����,ֻ��֧��c99�ı�������֧�ֱ䳤����,�䳤���鲻���Գ�ʼ��
//    int i_score[i_size];
//
//    //��ȡ�ɼ�
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", i_score + i_i);
//    }
//
//    //��ȡ��߷�
//    int i_max = 0;
//    i_max = Max_score(i_score, i_size);
//
//    //��ȡ��ͷ�
//    int i_min = 0;
//    i_min = Min_score(i_score, i_size);
//
//    //�����ֵ
//    printf("%d", i_max - i_min);
//    return  0;
//}
//
////��ȡ��߷�
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
////��ȡ��ͷ�
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

//�ж������ǽ���
//#include <stdio.h>
//
//int Judgement(const int* i_number, int i_size);
//
//int main(void)
//{
//    //��ȡ�䳤����ĳ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //����䳤���飬ֻ��֧��c99�ı�������֧�ֱ䳤���飬�䳤���鲻���Գ�ʼ��
//    int i_number[i_size];
//
//    //��ȡ�䳤�������ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//
//    //�ж������Ƿ�����
//    int i_flag = 0;
//    i_flag = Judgement(i_number, i_size);
//
//    //������
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

//�ж������Ƿ�����
//int Judgement(const int* i_number, int i_size)
//{
//    int i_i = 0;
//    int i_flag = 0;
//
//    //�ж������ǽ���
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

//ģ��ʵ�ֿ⺯��strlen
//#include <stdio.h>
//#include <assert.h>
//
//int My_strlen(const char* c_string);
//
//int main(void)
//{
//	//����һ���ַ���
//	char c_string[] = "abcdefg";
//
//	//��ʼģ��
//	int i_length = 0;
//	i_length = My_strlen(c_string);
//
//	//������
//	printf("%d", i_length);
//	return  0;
//}
//
////ģ��ʵ��strlen
//int My_strlen(const char* c_string)
//{
//	//ʹ�ö��Ա�֤c_string��Ϊ��
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

//ģ��ʵ�ֿ⺯��strcpy
//#include <stdio.h>
//#include <assert.h>
//
//#define SIZE 20
//
//char* strcpy(char* c_string_two, const char* c_string_one);
//
//int main(void)
//{
//	//���������ַ���
//	char c_string_one[SIZE] = "abbcdefg";
//	char c_string_two[SIZE] = "xxxxxxxxxxxxxxxxxxx";
//
//	//�ڸ���ǰc_string_twoΪ
//	printf("%s\n", c_string_two);
//
//	//ģ��ʵ��strcpy
//	strcpy(c_string_two, c_string_one);
//
//	//���ƺ�Ϊ
//	printf("%s\n", c_string_two);
//	return  0;
//}
//
////ģ��ʵ��strcpy
//char* strcpy(char* c_string_two, const char* c_string_one)
//{
//	//ʹ�ö���
//	assert(c_string_two && c_string_one);
//
//	char* c_temp = c_string_two;
//	
//	//��ʼ����
//	while (*c_string_two++ = *c_string_one++)
//		;
//
//	return c_temp;
//}

//��������ʹ����ȫ����λ��ż��ǰ�档
//#include <stdio.h>
//#include <assert.h>
//
//#define SIZE 10
//
//void Adjust(int* i_number);
//
//int main(void)
//{
//	//��ȡ�����ֵ
//	int i_number[SIZE] = { 0 };
//	int i_i = 0;
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		scanf("%d", (i_number + i_i));
//	}
//
//	//����ǰ
//	for (i_i = 0; i_i < SIZE; i_i++)
//	{
//		printf("%d ", i_number[i_i]);
//	}
//
//	//����
//	Adjust(i_number);
//
//	//������
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
//    //����һ������������������
//    int i_number = 0;
//
//    //��ʼ��ӡ
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
//    //���������������ճɼ�
//    int i_score[SIZE] = { 0 };
//
//    //��ʼ���ճɼ�
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
//            //Ѱ�����ֵ
//            int i_max_score = 0;
//            for (i_i = 0; i_i < SIZE; i_i++)
//            {
//                if (i_max_score < i_score[i_i])
//                {
//                    i_max_score = i_score[i_i];
//                }
//            }
//
//            //Ѱ����Сֵ
//            int i_min_score = i_score[0];
//            for (i_i = 0; i_i < SIZE; i_i++)
//            {
//                if (i_min_score > i_score[i_i])
//                {
//                    i_min_score = i_score[i_i];
//                }
//            }
//
//            //���
//            int i_sum = 0;
//            for (i_i = 0; i_i < SIZE; i_i++)
//            {
//                i_sum += i_score[i_i];
//            }
//            i_sum -= (i_max_score + i_min_score);
//
//            //������
//            printf("%.2f\n", (i_sum) / 5.0);
//            i_count = 0;
//        }
//    }
//
//
//    return  0;
//}

//��һ�������в�����ֵ
//#include <stdio.h>
//
//#define SIZE 50
//
//void Insert(int* i_number, int i_num, int i_flag);
//
//int main(void)
//{
//    //����һ������
//    int i_number[SIZE] = { 0 };
//
//    //����һ��������������ÿ������Ҫ������ֵ�ĸ���
//    int i_num = 0;
//    scanf("%d", &i_num);
//
//    //������ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < i_num; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//
//    //������Ҫ�����ֵ
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //��ʼ����
//    Insert(i_number, i_num, i_flag);
//
//    //������
//    for (i_i = 0; i_i < i_num + 1; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}
//
////���뺯��
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
//    //��ȡn��ֵ
//    int i_num = 0;
//    scanf("%d", &i_num);
//
//    //����һ��������������ֵ
//    int i_number[SIZE] = { 0 };
//
//    //�������в�����ֵ
//    int i_i = 0;
//    for (i_i = 2; i_i < i_num; i_i++)
//    {
//        i_number[i_i - 2] = i_i;
//    }
//
//    //�������е���ֵ����ż��ȥ��
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
//    //������
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
//    //����䳤����Ŀ��
//    int i_size_one = 0;
//    int i_size_two = 0;
//    scanf("%d %d", &i_size_one, &i_size_two);
//
//    //�����䳤���飬ֻ��֧��c99�ı������ſ���ʹ�ñ䳤���飬�䳤���鲻���Գ�ʼ��
//    int i_number_one[i_size_one];
//    int i_number_two[i_size_two];
//
//    //��ȡ�����������ֵ
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
//    //����һ����������
//    int i_sum = i_size_one + i_size_two;
//    int i_number_sum[i_sum];
//
//    //��ʼ����
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
//    //������
//    for (i_i = 0; i_i < i_sum; i_i++)
//    {
//        printf("%d ", i_number_sum[i_i]);
//    }
//    return  0;
//}


//�������ƶ�
//#include <stdio.h>
//
//int main(void)
//{
//    //�����������ĳߴ�
//    int i_size_weight = 0;
//    int i_size_hight = 0;
//    scanf("%d %d", &i_size_weight, &i_size_hight);
//
//    //������ά�䳤����,ֻ��֧��c99�ı�������֧�ֱ䳤���飬�䳤���鲻���Գ�ʼ��
//    int i_number_one[i_size_weight][i_size_hight];
//    int i_number_two[i_size_weight][i_size_hight];
//
//    //��ȡ����������ֵ
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
//    //��ʼ�ж�
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
//    //������
//    printf("%.2f", (i_count * 1.0) / (i_size_hight * i_size_weight) * 100);
//    return  0;
//}

//��֤�û�����
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 10
//
//int main(void)
//{
//    //���������������������û���������
//    char c_string_name[SIZE] = { 0 };
//    char c_string_passward[SIZE] = { 0 };
//
//    //�û���ʼ����
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

//ѧ��c++
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

//��һ��ʮ������ת��Ϊ6������
//#include <stdio.h>
//
//void Change(int i_number);
//
//int main(void)
//{
//	//��ȡһ��ʮ������
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//��ʼת��
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

//�ж��ܷ�5����
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ������
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //��ʼ�ж�
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

//��֪һ������y=f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1�� 
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ����������������x��ֵ
//    int i_x = 0;
//    scanf("%d", &i_x);
//
//    //��ʼ���
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

//��������9����
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ��ѭ��
//    int i_i = 0;
//    int i_count = 0;
//    for (i_i = 1; i_i < 2020; i_i++)
//    {
//        int i_temp = i_i;
//        //�жϸ���ֵ���Ƿ���9
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
//	//����һ��ѭ�������ж�0����100000֮���ˮ�ɻ���
//
//	int i_number = 0;
//
//	for (i_number = 0; i_number < 100001; i_number++)
//
//	{
//
//		//�ж�һ������λ��
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
//		//��ʼ�ж�
//
//		int i_flag = 0;
//
//		i_flag = Number_of_daffodils(i_number, i_number_of_digits);
//
//		//printf("%d", i_flag);
//
//
//
//		//������
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

//�ж�������������ż��������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡһ��������
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //�ж�����ż��
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
//    //������
//    printf("%d %d", i_count, i_number - i_count);
//    return 0;
//}

//ͳ�Ƴɼ�
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ�䳤����ĳ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //�����䳤����,ֻ��֧��c99�ı�������֧�ֱ䳤���飬�䳤���鲻���Գ�ʼ��
//    float f_score[i_size];
//
//    //��ȡ�ɼ�
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%f", (f_score + i_i));
//    }
//
//    //��ȡ��߳ɼ�
//    float f_max = 0.0f;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        if (f_max < f_score[i_i])
//        {
//            f_max = f_score[i_i];
//        }
//    }
//
//    //��ȡ��ͳɼ�
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
//    //����ƽ���ɼ�
//    float f_avg = 0.0f;
//    float f_sum = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        f_sum += f_score[i_i];
//    }
//    f_avg = (f_sum / i_size);
//
//    //������
//    printf("%.2f %.2f %.2f", f_max, f_min, f_avg);
//    return  0;
//}

//��������
//#include <stdio.h>
//
//#define SIZE 50
//
//void Insert(int* i_number, int i_size, int i_flag);
//
//int main(void)
//{
//    //����һ������
//    int i_number[SIZE] = { 0 };
//
//    //����һ����������������������ĳ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //��ȡ��������
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //��ȡ��Ҫ�����ֵ
//    int i_flag = 0;
//    scanf("%d", &i_flag);
//
//    //���ò��뺯��
//    Insert(i_number, i_size, i_flag);
//
//    //������
//    for (i_i = 0; i_i < i_size + 1; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}
//
//void Insert(int* i_number, int i_size, int i_flag)
//{
//    //�ж�Ҫ�����λ��
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
//    //Ų����λ
//    int i_temp = 0;
//    for (i_i = i_size; i_i > i_address; i_i--)
//    {
//        i_temp = i_number[i_i];
//        i_number[i_i] = i_number[i_i - 1];
//        i_number[i_i - 1] = i_temp;
//    }
//
//    //��������
//    i_number[i_address] = i_flag;
//
//}

//��֤����
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 20
//
//int main(void)
//{
//    //���������ַ������������������ַ���
//    char c_password_one[SIZE] = { 0 };
//    char c_password_two[SIZE] = { 0 };
//
//    //��ȡ����
//    scanf("%s %s", c_password_one, c_password_two);
//
//    //�ж��Ƿ���ͬ
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

//��ӡ����
//#include <stdio.h>
//
//int main(void)
//{
//    //��������
//    int i_number[10] = { 0 };
//
//    //��ȡ�����ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < 10; i_i++)
//    {
//        scanf("%d", (i_number + i_i));
//    }
//
//    //������
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

//������
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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
//	//����һ�������ñ�ʾѡ�ֵ�����
//	char c_ranking[SIZE] = { 0 };
//
//	//����������Ĵ�����
//	srand((unsigned int)time(NULL));
//
//	while (1)
//	{
//		//��������
//		int i_i = 0;
//		for (i_i = 0; i_i < SIZE; i_i++)
//		{
//			c_ranking[i_i] = 0;
//		}
//
//		//����һ�����������
//		Outcome(c_ranking, SIZE);
//		/*for (i_i = 0; i_i < SIZE; i_i++)
//		{
//			printf("%c ", c_ranking[i_i]);
//		}
//		break;*/
//		//�ж������Ƿ���ȷ
//		int i_flag = 0;
//		i_flag = Judgement(c_ranking, SIZE);
//
//		//������
//		if (i_flag)
//		{
//			//printf("��ȷ��ѡ������Ϊ:\n");
//			for (i_i = 0; i_i < SIZE - 1; i_i++)
//			{
//				printf("%c ", c_ranking[i_i]);
//			}
//			break;
//		}
//		/*else
//		{
//			printf("�´������²°�!");
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

// �������
//#include <stdio.h>
//
//int main(void)
//{
//    //����һ��������������10������
//    int i_number[10] = { 0 };
//
//    //������ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < 10; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //�����ӡ
//    for (i_i = 10; i_i > 0; i_i--)
//    {
//        printf("%d ", i_number[i_i - 1]);
//    }
//    return 0;
//}

//�ж������������͸����ĸ���
//#include <stdio.h>
//
//#define SIZE 10
//
//int main(void)
//{
//    //����һ�����飬����������ֵ
//    int i_number[SIZE] = { 0 };
//
//    //������ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < SIZE; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //���������������͸����ĸ���
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
//    //������
//    printf("positive:%d\n", (SIZE - i_negative));
//    printf("negative:%d\n", i_negative);
//    return  0;
//}


//����������ȥ��
//#include <stdio.h>
//
//void Delete(int* i_number, int i_size, int i_address);
//int Deduplication(int* i_number, int i_size);
//
//int main(void)
//{
//    //�����䳤����ĳ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //�����䳤���飬ֻ��֧��c99�ı�������֧�ֱ䳤���飬�䳤���鲻���Խ��г�ʼ��
//    int i_number[i_size];
//
//    //��ȡ��ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //��ʼȥ��
//    int i_length = 0;
//    i_length = Deduplication(i_number, i_size);
//
//    //������
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//    return  0;
//}
//
////�ж��ظ���ȥ��
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
////ȥ��
//void Delete(int* i_number, int i_size, int i_address)
//{
//    int i_i = 0;
//
//    for (i_i = i_address; i_i < i_size - 1; i_i++)
//    {
//        *(i_number + i_i) = *(i_number + i_i + 1);
//    }
//}

//����ɼ�
//#include <stdio.h>
//
//#define SIZE_X 5 
//#define SIZE_Y 6
//
//int main(void)
//{
//    //����һ����ά�����������ճɼ�
//    float f_number[SIZE_X][SIZE_Y] = { 0 };
//
//    //��ȡ�ɼ�������ƽ����
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
//    //������
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

//��ӡĳλ�õ���ֵ
//#include <stdio.h>
//
//int main(void)
//{
//    //�����䳤��ά����ĳ���
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //�����䳤����,ֻ��֧��c99�ı�������֧�ֱ䳤���飬�䳤���鲻���Գ�ʼ��
//    int i_number[i_size_x][i_size_y];
//
//    //��ȡ��ֵ
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
//    //����һ������������������ҵ�λ��
//    int x = 0;
//    int y = 0;
//    scanf("%d %d", &x, &y);
//
//    printf("%d", i_number[x - 1][y - 1]);
//    return 0;
//}

//������
//#include <stdio.h>
//
//int main(void)
//{
//	//����һ������������ʾ����
//	int i_man = 0;
//
//	//��ʼ�ж�
//	for (i_man = 'A'; i_man < 'E'; i_man++)
//	{
//		if (((i_man != 'A') + ('C' == i_man) + ('D' == i_man) + ('D' != i_man)) == 3)
//		{
//			printf("%c", i_man);
//		}
//	}
//	return  0;
//}

//�������
//#include <stdio.h>
//
//#define SIZE_X 100
//#define SZIE_Y 100
//
//int main(void)
//{
//	//����һ����ά����
//	int i_number[SIZE_X][SZIE_Y] = { 0 };
//
//	//��ȡ���ӡ��������ǵĲ���
//	int i_num = 0;
//	scanf("%d", &i_num);
//
//	//�������������ֵ
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
//	//��ӡ���
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

//���Ͼ���
//#include <stdio.h>
//
//int main(void)
//{
//	//��ȡ���Ͼ���Ĵ�С
//	int i_size = 0;
//	scanf("%d", &i_size);
//
//	//��ӡ���Ͼ���
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

//�ַ�������
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 100
//
//void Levorotation(char* c_string, int i_length, int i_number);
//
//int main(void)
//{
//	//����һ���ַ����鲢��ȡһ���ַ���
//	char c_string[100] = { 0 };
//	scanf("%s", c_string);
//
//	//�����ַ����ĳ���
//	int i_length = 0;
//	i_length = strlen(c_string);
//	//printf("%d\n", i_length);
//
//	//��ȡ��Ҫ�������ַ����ĸ���
//	int i_number = 0;
//	scanf("%d", &i_number);
//
//	//��ʼ����
//	Levorotation(c_string, i_length, i_number);
//
//	//������
//	printf("%s", c_string);
//	return 0;
//}
//
////��������
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

//�ַ�����ת���
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 100
//
//void Levorotation(char* c_string, int i_length, int i_number);
//
//int main(void)
//{
//	//�������������������������ַ���
//	char c_string_one[SIZE] = { 0 };
//	char c_string_two[SIZE] = { 0 };
//	scanf("%s", c_string_one);
//	scanf("%s", c_string_two);
//
//	//���㳤��
//	int i_length = 0;
//	i_length = strlen(c_string_one);
//
//	//��ʼ�ж�
//	int i_flag = 0;
//	int i_i = 0;
//	//��ѭ���ǿ���ÿ������һ���ַ�һ���������ٴ�
//	for (i_i = 0; i_i < i_length; i_i++)
//	{
//		Levorotation(c_string_one, i_length, 1);
//		i_flag = strcmp(c_string_one, c_string_two);
//		if (!i_flag)
//		{
//			printf("�ַ���1���ַ���2����ת�ַ�����\n");
//			break;
//		}
//	}
//
//	if (i_flag)
//	{
//		printf("�ַ���1���ַ���2������ת�ַ�����\n");
//	}
//	return  0;
//}
//
////��������
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

//�����������
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ�䳤��ά����Ĵ�С
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //�����䳤���飬ֻ��֧��c99�ı�������֧�ֱ䳤���飬���䳤���鲻���Գ�ʼ��
//    int i_number[i_size_x][i_size_y];
//
//    //��ȡֵ
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
//    //������
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

//�ж����ֵ��λ��
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ�䳤��ά����Ĵ�С
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //�����䳤���飬ֻ��֧��c99�ı�������֧�ֱ䳤���飬���䳤���鲻���Գ�ʼ��
//    int i_number[i_size_x][i_size_y];
//
//    //��ȡֵ
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
//    //��ȡ���ֵ��λ��
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
//    //������
//    printf("%d %d", i_max_x + 1, i_max_y + 1);
//    return  0;
//}

//�ж�������ά�����Ƿ����
//#include <stdio.h>
//
//int main(void)
//{
//    //��ȡ�䳤��ά����Ĵ�С
//    int i_size_x = 0;
//    int i_size_y = 0;
//    scanf("%d %d", &i_size_x, &i_size_y);
//
//    //���������䳤����,ֻ��֧��c99�ı�������֧�ֱ䳤���飬�䳤���鲻���Գ�ʼ��
//    int i_number_one[i_size_x][i_size_y];
//    int i_number_two[i_size_x][i_size_y];
//
//    //��ȡ�����е�ֵ
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
//    //��ʼ�Ƚ�
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
//    //������
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

//�����к���
//#include<stdio.h>
//int main(void) {
//    int m = 0, n = 0;
//    scanf("%d %d", &m, &n);
//    int s[m][n];
//    //int ss[n][m];//һ��ʼ�����������󣬷��ֺ�������������룬���ĵ�һֱ�ǳ�ʼ�����Ҵ��뷱��,����һ������ķ�ʽ
//    for (int i = 0; i < m; i++) {//��ʼ��
//        for (int j = 0; j < n; j++) {
//            scanf("%d ", &s[i][j]);
//        }
//    }
//    int t = 0;//�任����
//    char flag = 'r';//�ж��л����б�
//    int c1 = 0, c2 = 0;//�任���У��У���
//    int temp = 0;
//    scanf("%d ", &t);
//    while (t) {
//        scanf(" %c %d %d", &flag, &c1, &c2);
//        c1--; c2--;//�������кţ�--֮����������±�ֵ
//        if (flag == 'r') {
//            for (int j = 0; j < n; j++) {
//                temp = s[c2][j];//����c1��c2��
//                s[c2][j] = s[c1][j];
//                s[c1][j] = temp;
//            }
//        }
//
//        if (flag == 'c') {
//            for (int i = 0; i < m; i++) {//����C1��C2��
//                temp = s[i][c2];
//                s[i][c2] = s[i][c1];
//                s[i][c1] = temp;
//            }
//        }
//        t--;
//    }
//    //��ӡ��������
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++)
//            printf("%d ", s[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}

//ͳ��Ŀ���ַ����е�Ŀ���Ӵ��ĸ���
// //ʱ�临�Ӷȹ���
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
//    //����һ���������������ַ���
//    char c_string[SIZE_M] = { 0 };
//    scanf("%s", c_string);
//
//    //�����ȡ���ַ����ĳ���
//    int i_length = 0;
//    i_length = strlen(c_string);
//
//    //��ȡ�ַ�����Ŀ���Ӵ��ĸ���
//    int i_count = 0;
//    i_count = Statistics(c_string, i_length);
//
//    //������
//    printf("%d", i_count);
//
//    return  0;
//}
//
////ͳ��Ŀ���Ӵ��ĸ���
//int Statistics(char* c_string, int i_length)
//{
//    //����һ������������¼��ȡ���Ӵ����±�
//    //int i_address[SZIE_S] = { 0 };
//
//    int i_count = 0;
//    int i_i = 0;
//    int i_j = 0;
//    int i_z = 0;
//    int i_a = 0;
//
//    //��ʼ����
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

//�Ż�
//#include <stdio.h>
//#include <string.h>
//
//#define SIZE 8001
//
//int main(void)
//{
//    //����һ������������ȡĿ���ַ���
//    char c_string[SIZE] = { 0 };
//    scanf("%s", c_string);
//
//    //����Ŀ���ַ����ĳ���
//    int i_length = 0;
//    i_length = strlen(c_string);
//
//    //ͳ��Ŀ���Ӵ��ĸ���
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
//    //������
//    printf("%lld", lli_count);
//    return 0;
//}

//����ȥ�ش�ӡ
//ʱ�临�Ӷ����
//#include <stdio.h>
//
//int Deduplication(int* i_number, int i_size);
//void Delete(int* i_number, int i_size, int i_address);
//void Bubbling_sort(int* i_number, int i_length);
//
//int main(void)
//{
//    //��ȡ�䳤����ĳ���
//    int i_size = 0;
//    scanf("%d", &i_size);
//
//    //�����䳤���飬ֻ��֧��c99�ı�������֧�ֱ䳤���飬�䳤���鲻���Խ��г�ʼ��
//    int i_number[i_size];
//
//    //��ȡ��ֵ
//    int i_i = 0;
//    for (i_i = 0; i_i < i_size; i_i++)
//    {
//        scanf("%d", &i_number[i_i]);
//    }
//
//    //��ʼ���д�ӡ��ȥ�ز���
//    int i_length = 0;
//    i_length = Deduplication(i_number, i_size);
//    //printf("%d\n", i_length);
//
//    //����--ð������
//    Bubbling_sort(i_number, i_length);
//
//    //��ӡ���
//    for (i_i = 0; i_i < i_length; i_i++)
//    {
//        printf("%d ", i_number[i_i]);
//    }
//
//    return  0;
//}
////ȥ���ж�
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
////ɾ��
//void Delete(int* i_number, int i_size, int i_address)
//{
//    int i_i = 0;
//    for (i_i = i_address; i_i < i_size - 1; i_i++)
//    {
//        i_number[i_address] = i_number[i_i + 1];
//    }
//}
////ð������
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

//�Ż�
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
//	//���������������
//	char c_chessboard[SIZE_X][SIZE_Y] = { 0 };
//
//	//��ȡ����
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
//	//��ӡ
//	/*for (i_i = 0; i_i < SIZE_X; i_i++)
//	{
//		for (i_j = 0; i_j < SIZE_Y; i_j++)
//		{
//			printf("%c ", c_chessboard[i_i][i_j]);
//		}
//		printf("\n");
//	}*/
//
//	//�ж�
//	char c_flag = 0;
//	c_flag = Judgment(c_chessboard, SIZE_X, SIZE_Y);
//	//printf("%c\n", c_flag);
//
//	//��ӡ���
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
//	//��ʤ��
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
//	//�Խ�������
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

//BC77-�������в���һ����
//#include <stdio.h>
//
//#define SIZE 50
//
//void Insert(int* i_number, int i_size, int i_flag);
//
//int main(void)
//{
//	//����һ��������������һ����������
//	int i_size = 0;
//	scanf("%d", &i_size);
//	int i_number[SIZE] = { 0 };
//
//	//��ȡ��������
//	int i_i = 0;
//	for (i_i = 0; i_i < i_size; i_i++)
//	{
//		scanf("%d", &i_number[i_i]);
//	}
//
//	//��ȡ��Ҫ�������ֵ
//	int i_flag = 0;
//	scanf("%d", &i_flag);
//
//	//��ʼ����
//	Insert(i_number, i_size, i_flag);
//
//	//������
//	for (i_i = 0; i_i < i_size + 1; i_i++)
//	{
//		printf("%d ", i_number[i_i]);
//	}
//	return  0;
//}
//
////���뺯��
//void Insert(int* i_number, int i_size, int i_flag)
//{
//	int i_i = 0;
//	for (i_i = i_size; i_i > 0; i_i--)
//	{
//		//�����λ����
//		if (i_number[i_i - 1] > i_flag)
//		{
//			i_number[i_i] = i_number[i_i - 1];
//		}//�������������ֵ����ɲ������
//		else
//		{
//			i_number[i_i] = i_flag;
//			break;
//		}
//	}
//
//	//���С��������ֵ��������ֵ
//	if (0 == i_i)
//	{
//		i_number[i_i] = i_flag;
//	}
//}

//С���ָ�����
//#include <stdio.h>
//#include <math.h>
//
//int Judgement(int i_number);
//int Conversion(int i_number, int i_length);
//
//int main(void)
//{
//    //��ȡһ����ֵ
//    int i_number = 0;
//    scanf("%d", &i_number);
//
//    //�������ֵ��λ��
//    int i_length = 0;
//    i_length = Judgement(i_number);
//    //printf("%d\n", i_length);
//
//    //��ʼת��
//    int i_outcome = 0;
//    i_outcome = Conversion(i_number, i_length);
//
//    //������
//    printf("%d", i_outcome);
//    return  0;
//}
//
////����λ��
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
////ת��
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

//�ж�һ�����ǲ��Ƕ�����
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
//	//��ȡһ����ֵ
//	long long int lli_number = 0;
//	scanf("%lld", &lli_number);
//
//	if (lli_number < 10)
//	{
//		printf("��������һ��������!");
//	}
//	else
//	{
//		//�������ֵ��λ��
//		long long int lli_digits = 0;
//		lli_digits = Digits(lli_number);
//		printf("%lld\n", lli_digits);
//
//		//����һ����������������ֵ
//		int i_numbers[SIZE] = { 0 };
//
//		//��ʼ����
//		Insert(i_numbers, lli_number, lli_digits);
//		int i_i = 0;
//		for (i_i = 0; i_i < lli_digits; i_i++)
//		{
//			printf("%d ", i_numbers[i_i]);
//		}
//		printf("\n");
//
//		//�ж��ǲ���һ��������
//		int i_flag = 0;
//		i_flag = Judgement(i_numbers, lli_digits);
//		printf("%d\n", i_flag);
//
//		//������
//		if (i_flag)
//		{
//			printf("������һ��������!\n");
//		}
//		else
//		{
//			printf("��������һ��������!\n");
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

//Ѱ�Ҷ�����
#include <stdio.h>
#include <math.h>

#define SIZE 10000

long long int Digits(long long int i_number);
void Insert(int* i_numbers, long long int i_number, int i_digits);
int Judgement(int* i_numbers, long long int lli_digits);

int main(void)
{
	//��ȡһ����ֵ
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
				//�������ֵ��λ��
				long long int lli_digits = 0;
				lli_digits = Digits(lli_i);
				/*printf("%lld\n", lli_digits);
				Sleep(1000);*/

				//����һ����������������ֵ
				int i_numbers[SIZE] = { 0 };

				//��ʼ����
				Insert(i_numbers, lli_i, lli_digits);
				/*int i_i = 0;
				for (i_i = 0; i_i < lli_digits; i_i++)
				{
					printf("%d ", i_numbers[i_i]);
				}
				printf("\n");*/

				//�ж��ǲ���һ��������
				int i_flag = 0;
				i_flag = Judgement(i_numbers, lli_digits);
				//printf("%d\n", i_flag);

				//������
				if (i_flag)
				{
					printf("%lld:%lld",lli_number, lli_i);
					break;
				}
				/*else
				{
					printf("��������һ��������!\n");
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