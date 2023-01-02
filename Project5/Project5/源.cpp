#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int ret(int n)
//{ 
//	if (n>0)
//		return n * ret(n-1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a=ret(n);
//	printf("%d\n", a);
//	return 0;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int t = 0;
//
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//
//	//最小公倍数 = m*n/最大公约数;
//
//	return 0;
//}
int find(int shu[], int a,int c)
{
	int left = 0;
	int right = a-1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (shu[mid] < c)
		{
			left = mid + 1;
		}
		else if (shu[mid] > c)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int shu[] = {1,2,3,4,5,6,7,8,9};
	int a = sizeof(shu) / sizeof(shu[0]);
	int c;
	puts("请输入要查找的数：");
	scanf("%d", &c);
	int b = find(shu, a,c);
	if (b == -1)
		printf("找不到！");
	else
		printf("找到了！该数下标为%d", b);
	return 0;

}
//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
////extern void print(int);
//int main()
//{
//	int num = 1997;
//	print(num);
//	return 0;
//}


//int word(char *p)
//{
//	if (*p != '\0')
//		return 1+word(p+1);
//	else
//		return 0;
//}
//int main()
//{
//	int b;
//	char a[] = "what are you doing?";
//	b = word(a);
//	printf("%d", b);
//	return 0;
//}