#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void manu()
{
	printf("******************************\n");
	printf("********** 1、play  **********\n");
	printf("********** 2、exit  **********\n");
	printf("******************************\n");
}
void choose(int x)
{
	extern int number;
	switch (x)
	{
	case 1:
		printf("游戏开始！你将有10次机会进行猜选。\n");
		break;
	case 2:
		printf("再进行一次选择：\n");
		break;
	default:
		printf("输入错误，请重新输入：\n");
		break;
	}
		
}

void evaluate(int number, int end)
{
		if (number < end)
			printf("猜小了！\n");
		else if (number > end)
			printf("猜大了！\n");
		else
			printf("猜中了！！\n");
}

int main()
{
	int decision, number, end;
	int ramind = 10;
	srand(time(NULL));
	end = 1 + rand() % 100;
	
	do {
		manu();
		printf("请输入：");
		scanf("%d", &decision);
		choose(decision);
	} while (decision != 1);
	
	do
	{
		printf("请输入一个数：");
		scanf("%d", &number);
		evaluate(number,end);
		ramind--;
		printf("你还有%d次机会\n", ramind);
		if (ramind == 0)
			break;
	} while (number != end);
		printf("结果是:%d", end);
	return 0;

}