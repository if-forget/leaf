#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void manu()
{
	printf("******************************\n");
	printf("********** 1��play  **********\n");
	printf("********** 2��exit  **********\n");
	printf("******************************\n");
}
void choose(int x)
{
	extern int number;
	switch (x)
	{
	case 1:
		printf("��Ϸ��ʼ���㽫��10�λ�����в�ѡ��\n");
		break;
	case 2:
		printf("�ٽ���һ��ѡ��\n");
		break;
	default:
		printf("����������������룺\n");
		break;
	}
		
}

void evaluate(int number, int end)
{
		if (number < end)
			printf("��С�ˣ�\n");
		else if (number > end)
			printf("�´��ˣ�\n");
		else
			printf("�����ˣ���\n");
}

int main()
{
	int decision, number, end;
	int ramind = 10;
	srand(time(NULL));
	end = 1 + rand() % 100;
	
	do {
		manu();
		printf("�����룺");
		scanf("%d", &decision);
		choose(decision);
	} while (decision != 1);
	
	do
	{
		printf("������һ������");
		scanf("%d", &number);
		evaluate(number,end);
		ramind--;
		printf("�㻹��%d�λ���\n", ramind);
		if (ramind == 0)
			break;
	} while (number != end);
		printf("�����:%d", end);
	return 0;

}