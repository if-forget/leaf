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
		puts("����Ҫ�����ǣ�������һ������\n");
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
//		puts("������һ����������");
//		scanf("%d", &temp);
//		 if (temp <=0)
//			puts("���������룺");
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
//	printf("��ֵ��%d\n", a);
//	printf("��ת��");
//	reverse(a);
//	return 0;
//}