#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include <stdio.h>
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<errno.h>
#include <ctype.h>
int my_memcmp(const void* p, const void* q, int n)
{
	char* p1 = (char*)p;
	char* q1 = (char*)q;

	while (n--)
	{
		if (*p1!=*q1)
			return  *p1 - *q1;
		p1++;
		q1++;
	}
	return 0;
}
int main()
{
	char shu[] = "haobuxiangqiaole";
	char shu1[] = "haohaoqiaoba";
	int ret=my_memcmp(shu, shu1, 3);
	if (ret > 0)
	{
		printf(">");
	}
	else if (ret)
	{
		printf("<");
	}
	else
	{
		printf("=");
	}
	return 0;
}
//int main()
//{
//	int shu[11] = { 0 };
//	memset(shu, 1, 16);
//	return 0;
//}
//void* my_memmove(void* dest, const void* shu, int count)
//{
//	void* start = dest;//char* start = (char*) shu1;
//	if (dest< shu)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)shu;
//			dest = (char*)dest + 1;
//			shu = (char*)shu + 1;
//		}
//	}
//	else
//	{
//		while(count--)//很巧妙的是。数组下标是0开始，所以指向指向的地址应为实际字节数-1
//		{
//			*((char*)dest + count) = *((char*)shu + count);
//		}
//	}
//	
//	return start;
//}
//int main()
//{
//	int shu[] = { 1,2,33,77,99 };
//	my_memmove(shu+1, shu, 12);
//	return 0;
//}
//void* my_memcpy(void* shu1, const void* shu, int count)
//{
//	void* start = shu1;//char* start = (char*) shu1;
//	while (count--)//拷贝过程中一个字节一个字节拷贝，所以count--可以达到计数的效果
//	{
//		*(char*)shu1 = *(char*)shu;//考虑到所有数组类型都通用，所以将指针类型强制转换成char*
//		shu1 = (char*)shu1 + 1;
//		shu = (char*)shu + 1;//因为强制转换是临时的效果，所以在以一个字节一个字节继续向后拷贝时，还要进行强制类型转换成char*才可以继续一个字节一个字节的拷贝
//	}
//	return start;
//}
//int main()
//{
//	int shu[] = { 1,2,33,77,99 };
//	int shu1[12] = { 0 };
//	my_memcpy(shu1, shu, 12);
//	return 0;
//}
//int main()
//{
//	FILE* pf;
//	pf = fopen("txt1.txt", "r");
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));
//	//errno: Last error number
//	perror("fopen");
//	return 0;
//}
//int main()
//{
//	const char *shu = "19191919.11.22/19";
//	char temp[111];
//	strcpy(temp, shu);
//	const char* p = "./";
//	char*ps=strtok(temp, p);
//	//while (ps != NULL)
//	//{
//	//	printf("%s\n", ps);
//	//	ps=strtok(NULL, p);
//	//}
//	for (ps; ps != NULL; ps=strtok(NULL, p))
//	{
//		printf("%s\n", ps);
//	}
//	return 0;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	 char* cp = (char*)str1;//cp为返回值，和赋值的形参类型不同，需要强制类型转换
//	while (*cp)
//	{
//		if (*str2 == '\0')
//		{
//			return (char*)str1;
//		}
//		s2 = str2;
//		s1 = cp;
//		while (*s1 && *s2 && (*s2== *s1))
//		{//当判断条件只有*str2== *str1时，我们如过遇到字符匹配过程中同时以'\0'结束的两字符串时，还是会继续进入循环，造成越界访问的错误
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')//当查找至*s2为'\0'时，我们就算是找到，且返回指针并结束查找了
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;//当*s1未查出且查找至为'\0‘时跳出循环返回空指针
//
//
//}
//int main()
//{
//	char shu[] = "wogaizenmebanaaa";
//	char shu1[] = "zenmeban";
//	printf("%s ", my_strstr(shu, shu1));
//	return 0;
//}
//int my_strncmp1(char* first, char* last, int count)
//{
//	int x = 0;
//	if (!count)
//	{
//		return 0;
//	}
//	for (; x < count; x++)
//	{
//		if (*first == 0 || *first != *last)
//		{
//			return(*(unsigned char*)first - *(unsigned char*)last);
//		}
//		first += 1;
//		last += 1;
//	}
//}
//int my_strncmp(char* shu, char* shu1, int count)
//{
//	while (count)
//	{
//		if (*shu == *shu1&&*shu==0)
//		{
//			return 0;
//		}
//		shu++;
//		shu1++;
//		count--;
//		 if (*shu != *shu1)
//		{
//			 return *shu - *shu1;
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char shu[] = "haha";
//	char shu1[] = "haxixi";
//	printf("%d ", my_strncmp(shu, shu1, 4));
//	return 0;
//}
//char* my_strncpy(char* shu2, char* shu1, int count)
//{
//	char* p = shu2;
//	while (*shu2)
//	{
//		shu2++;
//	}
//	while (count--)
//	{
//		if ((*shu2++ = *shu1++)==0)
//			return p;
//	}
//		*shu2 = '\0';
//		return p;
//}
//int main()
//{
//	char shu1[23];
//	char shu2[33];
//	strcpy(shu1, "That's tree!");
//	strcpy(shu2, "look!");
//	my_strncpy(shu2, shu1, strlen(shu1));
//	printf("%s ", shu2);
//	
//}
//char*  my_strncpy(char* dest, char* sour, int count)
//{
//	char* p = dest;
//	while (count&&(*dest++ = *sour++))//如果有一方为0则跳出循环
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)//跳出循环时count=0，进入条件判断时，判断的就是减后的值，所以当减为0后，没有进入而是立马跳出循环
//		{              //如果为count--，跳出循环时count=-1,进入条件判断时先判断未减1的值，进入循环后减1，所以值为0时还在循环体里，再判断时跳出循环，但也自减为-1
//			*dest++ = '\0';
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	char shu[] = "what?";
//	char shu1[] = "I!";
//	my_strncpy(shu,shu1,4);
//	printf("%s", shu);
//	return 0;
//}

//int my_strcmp(const char* p, const char* q)
//{
//	while (*p == *q)
//	{
//		if (*p == '\0')
//			return 0;
//		p++;
//		q++;
//	}
//	return *p - *q;
	// 等同于：*p > * q ? (p - q) : (q - p);              
	//*p > * q ? 1 : -1;
	//等同于：if (*p > *q)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return -1;
	//}
//}               
	/*if (*p && *q)
	{
		while (*p==*q)
		{
			++p;
			++q;
		}
		return 0;
	}
	if (*p)
	{
		return p - q;
	}
	else
		return q - p;
}*/
//int main()
//{
//	const char* p = "why";
//	const char* q = "when";
//	if (my_strcmp(p, q) > 0)//大于则返回大于0的数
//	{
//		printf(">");//第一个字符小于第二个
//	}
//	else if (my_strcmp(p, q))//小于则返回大于0的数
//	{
//		printf("<");
//	}
//	else
//		printf("=");//相等返回0
//	return 0;
//}
//int main()
//{
//	const char* p = "why";
//	const char* q = "when";
//	if (strcmp(p, q) > 0)
//	{
//		printf(">");
//	}
//	else if (strcmp(p, q))
//	{
//		printf("<");
//	}
//	else
//		printf("=");
//	return 0;
//}
//char* my_strcat(char* shu1,const char* shu)
//{
//	char* p = shu1;
//	//while (*shu1++)
//	//	;
//	//shu1 = shu1 - 1;//和注释的分别是shu1指向的位置要-1得到指向'\0'的位置，
//	//                //记得在条件里判断是否为'\0'时又进行了自加操作
//	while (*shu1)
//	{
//		shu1++;
//	}
//	while (*shu1++ = *shu++)
//		;
//	return p;
//}
//int main()
//{
//	char shu1[37] = "haha ! ";
//	printf("%s ", my_strcat(shu1,"but i think you're right." ));
//	//const char* shu = "but i think you're right.";
// //   char shu1[37] = "haha ! ";
//	//printf("%s ", my_strcat(shu1, shu));
//	return 0;
//}

//char* my_strcpy(char*shu, char*shu1)
////拷贝的对象应该加上const会比较安全，const char*shu
//{
//	assert(shu && shu1);
//	char* p = shu1;
//	while (*shu1++ = *shu++)
//		;
//	return p;
//}
//int main()
//{
//	char shu[] = "what?";
//	char shu1[] = "I don't know!";
//	my_strcpy(shu,shu1);
//	printf("%s ", shu1);
//	return 0;
//}
//int main()
//{
//	const char* p = "I am Ok！";
//	const char* p2 = "today";
//	strcpy(p, p2);
//	printf("%s ", p);
//	return 0;
//}
//int factorial(int n)
//{
//    int result = 1;
//    while (n > 1)
//    {
//        result *= n;
//        n -= 1;
//    }
//    return result;
//}
//int main()
//{
//    int a = 11; 
//    printf("%d ", factorial(a));
//    return 0;
//}
//void convert(char* a, int n)
//{
//	int i;
//	printf("\n%p", a);
//	if ((i = n / 10) != 0)
//		convert(a + 1, i);
//	//if ((i = n / 10) != 0)
//	//	convert(a++, i);
//	*a = n % 10 + '0';

	//a++的写法等同于：
	//int i;
	//printf("\n%p", a);
	//if ((i = n / 10) != 0)
	//{
	//	convert(a, i);
	//	a++;
	//}
	//*a = n % 10 + '0';

//}

//int main()
//{
//	int number;
//	char str[10] = " ";
//	scanf("%d", &number);
//	convert(str, number); 
//	printf("\n");
//	puts(str);
//	return 0;
//}

//int my_strlen1(char* shu)
//{
//	if (*shu)
//	{
//	   return 1 + my_strlen1(shu+1);
//	}
//	return 0;
	//或者是：
	//if (*shu != '\0')
	//	return 0;
	//else
	//	return 1 + my_strlen1(shu + 1);
//}
//int main()
//{
//	char shu[] = "I am Ok!";
//	printf("%d ", my_strlen1(shu));
//	return 0;
//}
//int main()
//{
//	char shu[] = {'w','a' };
//	char shu1[] = { "what are you doing?" };
//	strcpy(shu1, shu);
//	printf("%s ", shu1);
//	return 0;
//}
//int main()
//{
//    if (strlen("ab") - strlen("abcd") > 0)//2-4=-2
//    {     // -2在内存中存放的补码形式：11111111 11111111 11111111 11111110 
//        printf(">");     //两个无符号数相减，得到无符号数，该补码当无符号处理。所以结果为其正数
//    }
//    else
//    {
//        printf("<");
//    }
//    return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//p为指针，指针类型决定了指针运算，由已知条件知p为20个字节大小的结构体指针变量，所以p+1意味着跳过一个大小为20个字节的结构体，即指针最后指向的地址为0x100014(十六进制14表示20）
//	printf("%p\n", ((unsigned long)p + 0x1));//0x100001  指针p强制转化为整型，则+1变为0x100001
//	printf("%p\n", ((unsigned int*)p + 0x1));//0x100004
//}
//int main()
//{
//	const char* a[] = { "work","at","alibaba" }; //a为指针数组
//	const char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}
//int main()
//{
//    int a[5][5] = { 1,2,3,4,5,6,7,9,11,22,55,66,67,89,99,32 };
//    int(*p)[4];//p为数组指针，指向一个具有4个int型元素的数组
//    p =(int(*)[4]) a;//将二维数组的首地址赋值给p，
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    printf("%d %d\n", *(*(p + 4) + 2), p[4][2]);
//    printf("%d %d\n", *(*(p + 2) + 1), p[2][1]);
//    return 0;   //相当于指针-指针，所得为两地址之间的元素个数
//}
//int main()
//{
//	int a[3][4] = { 1,3,6,5,7,9,2,11,44,77,99,0 };
//	printf("%d ", *a[0]);//1
//	printf("%d ", *(a[0] + 1));//3
//	printf("%d ", **(a + 1));//7
//	printf("%p ", a[0] + 1);//第一行第二个元素的地址
//	printf("%p ", a[1]);//第二行的地址
//	printf("%p ", a + 1);//第二行的地址
//		return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(a[0] + 1));
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a[3]));
//	return 0;
//}
//void manu()
//{
//	printf("******请选择红包类型***********\n");
//	printf("*******1、拼手气红包***********\n");
//	printf("*******2、普通红包*************\n");
//	printf("*******3、专属红包*************\n");
//}
//float ping(int a, int b)
//{
//	
//	srand(time(NULL));
//	float d = rand() % b;
//	if (d = b && a > 0)
//	{
//		d = 0.0;
//	}
//	return d;
//}
//float pu(int a, int b)
//{
//	return (float)(b / a);
//}
//float zhuan(int a, int b)
//{
//	return b;
//}
//int main()
//{
//	int a,d;
//	char g;
//	float b ;
//	int c = 0;
//	float(*p[4])(int,int) = { NULL,ping,pu,zhuan};
//	do {
//		manu();
//		
//		printf("填写红包个数：");
//		scanf("%d", &a);
//		printf("请设定单个金额：");
//		scanf("%f", &b);
//		
//		printf("开始抢红包啦！\n");
//		manu();
//		scanf("%d", &d);
//		printf("%f\n", p[d]);
//		printf("再来一次？y/n");
//		scanf("%c", &g);
//	} while (g=='y');
//		
//	return 0;
//}
//int main()
//{
//	int i, h;
//	float o, p;
//	printf("请选择红包分发形式:\n");
//
//	printf("1.均分     2.随机\n");
//	scanf("%d", &h);
//	if (h == 1)
//	{
//		printf("请输入红包总金额:\n");
//		scanf("%f", &o);
//		printf("请输入分发红包个数:\n");
//		scanf("%f", &p);
//		for (i = 1; i <= p; i++)
//			printf("恭喜你抢到第%d个红包:金额为:%f\n", i, o / p);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 11;//1011
//	int i = 0;
//	int j = 0;
//	int c[32] = { 0 };
//	int* p = c;
//	int sum=0;
//	for (i = 0; i < 32; i++)
//	{
//		int d = a % 2;
//		printf("%d ", d);
//		c[i] = a % 2;
//		sum+=d * (int)pow(2,i);
//		a /= 2;
//		
//	}
//	printf("\n");
//	sum = sum >>0; //0101;
//	printf("%d\n", sum);
//	for(i = 0; i < 32; i++)
//	{
//		printf("%d ", sum % 2);
//		sum /= 2;
//	}
//	puts("\n");
//	printf("%d ",sum);
//	for (i =31; i>0; i-=2)
//	{
//		printf("%d ", (sum >> i) & 1 );
//	}
//	int* left = p;
//	int* right = p + i - 1;
//	while (left<right)
//	{
//		int temp =*left;
//		*left=*right;
//		*right= temp;
//		left++;
//		right--;
//	}
//	for (j = 0; j < 32; j++)
//	{
//		printf("%d ", c[j]);
//	}
//


	/*for (j = 0; j < 32; j++)
	{
		int c = (a>> j)&1;
		printf("%d ",c );
//	}*/
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的2进制中的奇数位和偶数位
//	//0000000000000000000000000000000001010
//	//00000000 00110101 
//	//11000011 00101100
//	//01010000000001010000111001110010
//	int i = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

