#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void bubble(int shu[], int sz)
{
	int r, j;
	//int flag = 0;     增加一个变量来判断数据是否是按顺序排列的
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
		//if (flag == 0)   如果数据已排好，则不会进入循环，flag的值也不会变成1
		//break;         //这样的话，可以用break直接跳出for循环，不需要再进行下一趟
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
	puts("升序排列：");
	for (i = 0; i < sz; i++)
		printf("shu[%d]=%d\n", i, shu[i]);
	return 0;

}