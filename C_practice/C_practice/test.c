#define _CRT_SECURE_NO_WARNINGS 1
//1.
//#include<stdio.h>
//
//int main(void)
//{
//	printf("Kaiyue Chen\n");
//	printf("Kaiyue\nChen\n");
//	printf("Kaiyue Chen\n");
//	return 0;
//}

//2.
//#include<stdio.h>
//
//int main(void)
//{
//	printf("陈凯越北京市石景山区石景山南宫！");
//	return 0;
//}

//3.将年龄换算成天数
//#include<stdio.h>
//
//int main(void)
//{
//	
//	int age = 0;
//	printf("请输入你的年龄：");
//	scanf("%d",&age);
//
//	printf("%d", age * 365);
//
//	return 0;
//}

//4.
//#include<stdio.h>
//
//void jolly();
//void deny();
//
//int main(void)
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//
//	return 0;
//}
//
//void jolly()
//{
//	printf("For he's a jolly good fellow!\n");
//}
//
//void deny()
//{
//	printf("Which nobody can deny!\n");
//}

//5.
//#include<stdio.h>
//
//void br();
//void ic();
//
//int main(void)
//{
//	br();
//	printf(",");
//	ic();
//	printf("\n");
//
//	br();
//	printf("\n");
//	ic();
//	return 0;
//}
//
//void br()
//{
//	printf("Brazil,Russia");
//}
//
//void ic()
//{
//	printf("India,China");
//}

//6.
//#include<stdio.h>
//
//int main(void)
//{
//	int toes = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &toes);
//
//	printf("toes = %d\n", toes);
//	printf("toes * 2 = %d\n", toes * 2);
//	printf("toes * toes = %d\n", toes * toes);
//	return  0;
//}

//7.
//#include<stdio.h>
//
//void Smile();
//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 3; i > 0; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			Smile();
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//void Smile()
//{
//	printf("smile!");
//}

//8.
//#include<stdio.h>
//
//int main(void)
//{
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//
//    return  0;
//}

//9.
#include<stdio.h>

int main(void)
{
    int number = 0;
    scanf("%d", &number);

    printf("%#O ", number);
    printf("%#X\n", number);
    return  0;
}