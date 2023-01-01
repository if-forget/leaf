#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void end(int a)
{ 
	int i = 0;
	int r=1;
	while (r <= a)
	{
		for(i=0;i<r;i++)
		{
			putchar('*');
		}
		r++;
	    puts("\n");
	}
}
int main()
{
	    int a;
		puts("你想要几颗星？请输入一个数：\n");
		scanf("%d", &a);
		do {
			if (a % 10 != 0)
				a = a % 10;
			else
				break;
		} while (a > 10);
		end(a);
		return 0;
}
//int value()
//{
//	int temp;
//	do {
//		puts("请输入一个正整数：");
//		scanf("%d", &temp);
//		 if (temp <=0)
//			puts("请重新输入：");
//	} while (temp <= 0);
//	return temp;
//}
//void reverse(int a)
//{
//	int c=0;
//	while (a != 0)
//	{
//		c = a % 10;
//		a= a/10;
//		printf("%d", c);
//	}
//}
//int main()
//{
//	int a = value();
//	printf("初值：%d\n", a);
//	printf("翻转后：");
//	reverse(a);
//	return 0;
//}