#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int i,j;
	int shu[7] = { 0 };
	for (i = 0; i < 7; i++)
	{
		do {
			shu[i] = rand() % 9;
			for (j = 0; j < i; j++)
			{
				if (shu[i] == shu[j])
					break;
			}
		} while (i > j);
		printf("%3d", shu[i]);
	}
	return 0;
}


//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <10; j++)
//		{
//			printf("%2d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i,j;
//	int a[3][2] = { {12,44},{55,77},{33,88} };
//	int sum=0;
//	for (i = 0; i< 3; i++)
//		for (j = 0; j < 2; j++)
//			sum += a[i][j];
//	puts("�ɼ�Ϊ��");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 2; j++)
//			printf("%3d", a[i][j]);
//		puts("\n");
//	}
//	printf("�ܳɼ�Ϊ:%d", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int a[5] = { 0 };
//	srand(time(NULL));
//	int b = rand() % 10;
//	int c;
//	do {
//		puts("������һ������");
//		scanf("%d", &c);
//		a[i++] = c;
//		count++;
//		if (b != c)
//			printf("�´��ˣ��������\n");
//		else
//			break;
//	} while (b != c&&count<5);
//	if (count == 5)
//		puts("��λ���������!!");
//	printf("���Ϊ��%d\n", b);
//	puts("����ļ�¼��");
//	for (i = 0; i < count; i++)
//		printf("%d\n", a[i]);
//	return 0;
//}