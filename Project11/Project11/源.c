#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void bubble(int shu[], int sz)
{
	int r, j;
	//int flag = 0;     ����һ���������ж������Ƿ��ǰ�˳�����е�
	for (r = 0; r < sz - 1; r++)
	{
		for (j = 0; j < sz - 1 - r; j++)
		{
			if (shu[j] > shu[j + 1])
			{
				int c;
				c = shu[j];
				shu[j] = shu[j + 1];
				shu[j + 1] = c;
				//flag = 1;
			}
		}
		//if (flag == 0)   ����������źã��򲻻����ѭ����flag��ֵҲ������1
		//break;         //�����Ļ���������breakֱ������forѭ��������Ҫ�ٽ�����һ��
	}


}
int main()
{
	int shu[11];
	int i, sz;
	for (i = 0; i < 11; i++)
	{
		printf("shu[%d]=", i);
		scanf("%d", &shu[i]);
	}
	sz = sizeof(shu) / sizeof(shu[0]);
	puts("\n");
	bubble(shu, sz);
	puts("�������У�");
	for (i = 0; i < sz; i++)
		printf("shu[%d]=%d\n", i, shu[i]);
	return 0;

}