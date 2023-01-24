//#include<time.h>
//#include<stdio.h>
//#include <stdlib.h>
//#include<Windows.h>
//int sleep(unsigned long x)
//{
//	clock_t c1 = GetTickCount(), c2;
//	do {
//		if ((c2 = clock()) == (clock_t)-1)
//			return 0;
//	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
//	return 1;
//}
//int main()
//{
//	int i;
//	clock_t c;
//	for (i = 10; i > 0; i--) {
//		printf("\r%2d", i);
//		fflush(stdout);
//		sleep(1000);
//	}
//	printf("\r\afire!!\n");
//	c = GetTickCount();
//	printf("程序开始运行经过了%.lf秒\n", (double)c / CLOCKS_PER_SEC);
//	return 0;
//}
	//#define _CRT_SECURE_NO_WARNINGS 1;
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//
//
//
//int fib(int n, int* count)                             //斐波那契数列的递归实现
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		(*count)++;                                    //计算的次数
//		return fib(n - 1, count) + fib(n - 2, count);  //这里的count是指针变量，不需要&，和main函数中的不一样，main函数中的count是整型变量
//	}
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//
//	printf("请输入\n");
//	do                                                  //多次输入
//	{
//		int count = 0;
//		scanf("%d", &n);
//		if (n)
//		{
//			double start = GetTickCount();              //Windows提供的函数，获取电脑开机到现在的时间，单位是毫秒
//			ret = fib(n, &count);
//			double end = GetTickCount();                //通过两段时间相减，确定电脑计算用的时间
//			printf("fib(%d) = %d 用时 = %.1lf秒 计算次数 = %d 次\n", n, ret, (end - start) / 1000, count);
//		}
//	} while (n);                                         //遇到0跳出循环
//
//
//
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include <stdio.h>
#include <cassert>
#include <stdio.h>
int main()
{
	int n = 9;
	int x = 0;
	int y = 0, a;
	//scanf("%d", n);
	for (y = 2*n; y > 0; y -=1)
	{
		for (x =0; x <2*n; x+=1)
		{
			char ch = (y - 2 * x)>0 ? '!': '*';
			putchar(ch);
		}
		printf("\n");
	}
	return 0;
}




//*
//**
//****
//*****
//******
//*******
//********
//*********
//**********
//void print(int* p,int i)
//{
//
//	/*while (i--)
//	{
//		printf("%d ", *p++);
//	}*/
//	/*int j = 0;
//	for(j=0;j<i;j++)
//	printf("%d %d ", p[j],  *(p + j));*/
//}
//int main()
//{
//	int shu[] = { 1,2,3,54,67,74 };
//	int i=sizeof(shu) / sizeof(shu[0]);
//	print(shu,i);
//	return 0;
//}
//void reverse( char* p,int n)
//{
//    char* left=p;
//	char* right = p + n - 2;
//	char temp;
//	
//	while (left<right)
//	{
//		temp= *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n", p);
//}
//int main()
//{
//	char shu[] = "abcdefg";
//	int n = sizeof(shu) / sizeof(shu[0]);
//	reverse(shu,n);
//	printf("%s", shu);
//	return 0;
//}
//void reverse(char* p)
//{
//
//	char* temp=p;
//	char c ;
//	while (*temp++!= '\0')
//	{
//		;
//	}
//	temp = temp - 2;
//	while (p<temp)
//	{
//		c = *p;
//		*p = *temp;
//		*temp  = c;
//		p++;
//		temp--;
//	}
//}
//int main()
//{
//	char shu[] = "abcdefg";
//	reverse(shu);
//	printf("%s",shu);
//	return 0;
//}
//int compar(const void* x, const void* y)
//{
//	return (*(int*)x - *(int*)y);
//}
//void swap(void* x, void* y,int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char temp = *((char*)x + i);
//		*((char*)x+i )= *((char*)y+i);
//		*((char*)y+i) = temp;
//	}
//	
//
//}
//void bubble(void* shu, int num, int size, int(*compar)(const void* ,const void* ))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num; i++)
//	{
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (compar((char*)shu+j*size,(char*)shu+(j+1)*size)> 0)
//			{
//				swap((char*)shu + j * size, (char*)shu + (j + 1) * size, size);
//
//			}
//		}
//		
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int shu[] = {11,33,77,3,5,1,11,99,79,31,57 };
//	int num = sizeof(shu) / sizeof(shu[0]);
//	//qsort(shu,num, sizeof(shu[0]),compar);
//	//具体的qsort函数的实现，我们用冒泡的思想去模拟一下：
//	bubble(shu,num , sizeof(shu[0]), compar);
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", shu[i]);
//	}
//	return 0;
//}

//void manu()
//{
//	printf("********************************\n");
//	printf("******1、加法    2、减法********\n");
//	printf("********************************\n");
//	printf("******3、乘法    4、除法********\n");
//	printf("********************************\n");
//	printf("**********0、退出 **************\n");
//
//}
//int add(int a, int b)
//{
//	return (a + b);
//}
//int sub(int a, int b)
//{
//	return (a - b);
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int dev(int a, int b)
//{
//	return a / b;
//}
////void cala(int(*(*p)[5])(int , int ),int input)
////{
////	int a = 0;
////	int b = 0;
////	
////	printf("请输入两个数：");
////	scanf("%d %d", &a, &b);
////	printf("%d\n",(*p)[input](a, b));
////}
//void cala1(int(*p)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", p(a, b));
//}
//int main()
//{
//	int input = 0;
//	int(*p1[5])(int, int) = { NULL,add,sub,mul,dev };
//	do {
//		manu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//cala(&p1,input);
//			cala1(add);
//			break;
//		case 2:
//			//cala(&p1,input);
//			cala1(sub);
//			break;
//		case 3:
//			//cala(&p1,input);
//			cala1(mul);
//			break;
//		case 4:
//			//cala(&p1,input);
//			cala1(dev);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请再次选择\n");
//		}
//	} while (input);
//
//	return 0;
//}
//void manu()
//{
//	printf("********************************\n");
//	printf("******1、加法    2、减法********\n");
//	printf("********************************\n"); 
//	printf("******3、乘法    4、除法********\n");
//	printf("********************************\n");
//	printf("**********0、退出 **************\n");
//
//}
//int add(int a, int b)
//{
//	return (a + b);
//}
//int sub(int a,int b)
//{
//	return (a - b);
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int dev(int a, int b)
//{
//	return a/b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int input = 0;
//	int(*p[5])(int, int) = {NULL,add,sub,mul,dev};
//	int(*(*p1)[5])(int, int) = &p;
//	do {
//		manu();
//		printf("请选择：");
//    	scanf("%d", &input);
//		if (input>0 && input <= 4)
//		{
//			printf("请输入两个数：");
//			scanf("%d %d", &a, &b);
//			printf("%d\n",(*p1)[input](a, b));
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请再次选择\n");
//		}
//		
//	} while (input);
//	
//	return 0;
//}
//int factorial(int*a)
//{
//	int i, j;
//	int sum, temp;
//	for (i = 1,sum=0; i <= *a; i++)
//	{
//		for (j = 1,temp=1; j <= i; j++)
//		{
//			temp *=j;	
//		}
//		sum += temp;
//	}
//	return sum;
//	
//}
//int main()
//{
//	int a=0;
//	int(*p)(int*) = factorial;
//	int(*p1)(int*) = &factorial;
//	scanf("%d", &a);
//	printf("%p %p\n", factorial, &factorial);
//	printf("%p %p\n", *p, *p1);
//	printf("%p %p\n", p, p1);
//	printf("%d\n", factorial(&a));
//	printf("%d %d\n", (*p)(&a),(*p1)(&a));
//	printf("%d %d\n", p(&a),p1(&a));
//	return 0;
//}
//int main()
//{
//	int a[] = { 11,22,55,7 };
//	int b[] = { 1,7,9 };
//	int* p[2] = { a,b };
//	printf("%d %d ", *p[0], *p[1]);
//	return 0;
//}
//int main()
//{
//	int shu[3] = { 11,33,77 };
//	int* p = shu;
//	int(*p1)[3] = &shu;
//	printf("%d\n", *p);
//	printf("%d ", **p1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char shu[][7] = { "today","is","sunday" };
//	const char* p[] = { "today","is","sunday" };
//	for (i = 0; i < 3; i++)
//	{
//		printf("%c %c ",*p[i],*(*(p+i)));
//	}	
//	puts("\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%c", *shu[i]);
//	}
//	return 0;
//}


	
//void print(int*(*p)[2])
//{
//	int i = 0;
//	int j = 0;
//	printf("%d %d\n", ***p, ***(p + 1));
//	puts("\n");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d %d ", **(*(p + i) + j), **(p[i] + j));
//		}
//		puts("\n");
//	}
//}
//int main()
//{
//	int shu11[4] = { 11,33,77,99 };
//	int* shu[2][2] = { {&shu11[0],&shu11[1]},{&shu11[2],&shu11[3]} };
//		print(shu);
//		return 0;
//}
//int main()
//{
//	int shu[5] = { 1,2,3,4,5 };
//	int* p=shu;
//	while(p<&shu[5])	
//	{
//		*p++ = 9;   
//	}
//	for (p = &shu[0]; p< &shu[5];p++)
//	{
//	printf("%d ", *p);
//	}
//	return 0;
//}
// char* copy(char* a,const char* b)
//{
//	 char* c = NULL;
//	 assert(a != NULL);
//	 assert(b != NULL);//记得加#include <cassert>
//	 //assert(c != NULL);
//	// 该效果等同于：
//	 if (c==NULL)
//	 {
//		 puts("a=NULL");
//		 abort();
//	 }
//	
//	 char* adress = a;
//	while (*a++ = *b++)
//	{
//		;
//	}//当跳出循环时，指针a指向的位置是'\0'的位置，
//	return adress;//所以要创建一个指针变量储存首地址
//}
//int main()
//{
//	char shu[] = "what day is it today?";
//	char shu11[] = "tomorrow";
//	printf("%s %s\n", copy(shu, shu11), shu11);
//	return 0;
//}


//int main()
//{
//	char* p =(char*)malloc(12 * sizeof(int));
//	if (p != NULL)
//	{
//		strcpy(p, "sunday");
//		*p = 'r';
//		printf("%s", p);
//	}
//	
//	return 0;



	//char a = 'r';
	//char b = 'y';
	//const char* p1 = &a;
	//p1 = &b;
	//printf("%c",*p1);
	/*const char* p = "sunday";
	p = "we";
	printf("%s", p);*/

	

//}
//void print(int(*p)[5], int x, int y)
//{
//	int i;
//	int j=0;
//	printf("%d %d %d", **p, **(p + 1), **(p + 2));
//	//for (i = 0; i < x; i++)
//	//{
//	//	for (j = 0; j < y; j++)
//	//	{
//	//		//printf("%d  %d  %d  %d\n", *(*(p + i) + j),(*(p+i))[j],*(p[i]+j),p[i][j]);
//	//	
//	//	}
//	//}
//}
//int main()
//{
//	int shu[3][5] = { {1,2,3,4,5},{6,7,8,9,0},{1,1,1,5,7} };
//	print(shu,3,5);
//	return 0;
//}
////int main()
//{
//	int shu[4] = { 0,2,3,4 };
//	int(*p)[4] = &shu;
//	printf("%d %d %d\n", (*p)[2],*(*p+2),**p);
//	/*但一般都这样写：*/
//	/*int* p = shu;*/
//	/*printf("%d %d\n",*(p+2),p[2]);*/
//	return 0;
//}
//int main()
//{
//	/*char shu1[] = "we!";
//	char* shu[2] = { &shu1[0],&shu1[1]};*/
//	char a = 'w';
//	char b = 'e';
//	char* shu[2] = { &a,&b };
//	char* (*p)[2] = &shu;
//	printf("%c %c\n", *(*p)[0], *(*p)[1]);
//	/*char* (*p)[2] = &shu;
//	printf("%c %c\n", *(*p)[0], *(*p)[1]);*/
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 123;
//	int* a= &i;
//	int** b = &a;//int**b创建的是二级指针只能用一级指针赋值
//	int*** c = &b;//和上面一样原理，该变量只能存放二级指针地址
//	printf("%d %d %d\n", *a, **b, ***c);
//	printf("%p %p %p\n", a, *b,**c);
//	printf("%p %p\n", b, *c);
//}
//int main()
//{
//	int shu[5] = { 1,2,3,4,5};
//	int* p;
//	for (p = &shu[5]; p > &shu[0];)
//	{
//		*--p = 0;
//		
//		printf("%d\n", *p);
//	}
//	return 0;
//}
//int count(char* shu)
//{
	//char* start = shu;
	/*char* end = shu;
	while (*end != '\0')*/

	/*char* start = shu;
	char* end = shu;
	while (*shu++ != '\0')
		end++;
	return end - shu;*///start;
	//该效果等同于如下代码：
	//int shu1[16]={0};
	//printf("%d",&shu[15]-&shu[0]);
//}
//int main()
//{
//	char shu[] = "today is sunday!";
//	int a = count(shu);
//	int shu1[4] = { 0,12,22,11 };
//	printf("%d\n",shu1[3]-shu1[2]);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;   //重点在调试的过程中观察内存的变化。
//	*pi = 0;   //重点在调试的过程中观察内存的变化。
//	return 0;
//}

//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	
//	return p - s;
//}
//int main()
//{
//	char b[12] ="hhhhgggggR";
//	char* p = b;
//	char* s = b;
//	int a= my_strlen(s);
//	printf("%d\n", a);
//	printf("%p %p %p %p\n",&b[9], &p[9], p + 9, b + 9);//打印结果相同
//	printf("%c %c %c %c", b[9],p[9],*(p+9),*(b+9));//打印结果相同
	//我们可以知道除了用数组访问还可以用指针去访问元素
	//如上代码为例
	//&b[i]=p+i  所表示的地址相同且与i一一对应
	//b[i]=p[i]=*(p+i)  所表示的数组元素相同且i一一对应
//}
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int* remind()
//{
//	int a = 1;//局部变量，一旦出了函数将会销毁该变量
//	return &a;
//}
//int main()
//{
//	//int a = 7;
//	//int* p;//1、指针未初始化，默认为随机值
//	//*p = 1;//这里的p为野指针，会指定随机一个地址赋值，不太可控
//
//	//int a[3] = { 0 };
//	//int* p = a;
//	//int i = 0;
//	//for (i = 0; i < 7; i++ )
//	//	*(p++) = 1;//2、指针越界访问，随着循环的继续会超过数组的大小
//
//	int* p = remind();//3、指针指向已被释放的空间
//	*p = 0;//虽然有返回地址，但因为该变量已被销毁，空间被收回，该地址已经不是原来变量的地址了
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	short s=0;
//	int a = 10;
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(s = a + 1));
//	printf("%d\n", s);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//
//}
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = (a > b ? a : b, a = a + 2, b = 1);
//	printf("%d %d %d\n", a, b, c);
//	while (c = a, b = a + b, c > b)
//		printf("y");
//	return 0;
//}

//typedef struct book
//{
//	char name[13];
//	int time;
//}b;
//int main()
//{
//	b b1 = { "我叫书名",2019 };//一般这样初始化
//	//b b2;//如果你是这样先定义再逐个赋值会报错（说表达式必须是可修改的左值）
//	//b2.name = "我叫书名吗？";
//	//b2.time = 20190;
//	//定义后再初始化的话可以如下
//	b b3;
//	strcpy(b3.name, "我叫书名呀！");//数组记得要用strcpy，如果不用详情可见链接方法
//	b3.time = 20190;
//
//	printf("%s %d\n", b1.name, b1.time);
//	printf("%s %d\n", b3.name, b3.time);
//	return 0;
//
//
//}
//typedef struct animal
//{
//	char animal;
//	int age;
//	short tree;
//}animal;//把struct animal的类型名改为了animal（这里的animal是类型）
//struct nature
//{
//	char animal[7];
//	int age;
//	short tree;
//	struct book g5;
//} g1, g2, g3;//创建的三个全局的结构体变量（这里是创建的变量）
//void print(struct nature b1, struct nature* p)
//{
//	printf("%d\n", b1.age);
//	printf("%s\n", b1.g5.name);
//	printf("%d\n", (*p).age);
//	printf("%s\n", (*p).g5.name);
//	printf("%d\n", p->age);
//	printf("%s\n", p->g5.name);
//}
//int main()
//{
//	struct nature g;//局部的结构体变量
//	//animal g；//被typedef重命名后可以这样创建结构体变量
//	struct nature g4 ={"小狗",3,11 };//定义变量的同时初始化，要按照结构体定义的变量顺序来赋值，一一对应，未赋值则默认为0
//	struct nature b = {"小猫",2,7,{"c语言",'2019'} };
//	print(b,&b); //ji
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	int count = 0;
//	int i;
//	for (i = 0; i <32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//int* p;未初始化，默认为随机值(指向一个任意地址）
//	//*p=7; 这样赋值不可行，因为没有初始化
//	int b[10] = { 0 };
//	int* c = b;
//	int i = 0;
//	for (i = 0; i <= 15; i++)
//	{
//		*(c+i) = i;
//		printf("%d\n", *(c+i));
//	}
//	return 0;
//}
//int main()
//{
//	int* p = NULL;
//	char* a = NULL;
//	double* b = NULL;
//	float* d = NULL;
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(d));
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//#include <stdio.h>
//	void test1(int arr[])
//	{
//		printf("%d\n", sizeof(arr));//(2)
//	}
//	void test2(char ch[])
//	{
//		printf("%d\n", sizeof(ch));//(4)
//	}
//	int main()
//	{
//		int arr[10] = { 0 };
//		char ch[10] = { 0 };
//		printf("%d\n", sizeof(arr));//(1)
//		printf("%d\n", sizeof(ch));//(3)
//		test1(arr);
//		test2(ch);
//		return 0;
//	}
////int main()
//{
//	int a = -10;
//	//10000000 00000000 00000000 00001010 原码
//	//11111111 11111111 11111111 11110110 补码
//	//Oxff ff ff f6 十六进制
//	//因为是小端存储模式所以顺序为 f6 ff ff ff
//	char* r = (char*)&a;
//	printf("%d\n", a);
//	int* y = &a;
//	printf("%p\n", r);
//	printf("%p\n", r + 1);//指针跳过了一个字节 -char*
//	printf("%p\n", y);
//	printf("%p\n", y + 1);//指针跳过了四个字节 -int*
//	*r = 0;
//	//因为char*r只能访问一个字节所以第一个字节f6被赋值为0
//	//变成 00 ff ff ff
//	printf("%d", a); 
//	//11111111 11111111 11111111 00000000 补码
//	//10000000 00000000 00000001 00000000 原码 %d打印-100000000=-128
//	return 0;
//	
//}
//int check_sys()
//{
//	int i = 1;
//	//00000000 00000000 00000000 00000001 二进制数
//	//Ox00 00 00 01 十六进制
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)  // 若为小端，低位放到低地址
//	{        // 则存储形式为 01 00 00 00
//		printf("小端\n"); //所以第一个字节（01）的值1（返回1）
//	}
//	else //若为大端，低位放到高地址 
//	{   //存储形式为 00 00 00 01  所以第一个字节(00)的值0 (返回0）
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -i - 1;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	
//	system("pause");
//	
//	return 0;
//}
//int main()
//{//
//	char a = 128;
//	char b = -3; 
//	char c = -128;
//	printf("%d %u\n", a, a);
//	printf("%d %u\n", b, b);
//	printf("%d %u", c, c);
//	return 0;
//	
//}//11111101
//int main()
//{
//	char a = 4;//00000100
//	char b = 5;//00000101
//	char c;
//	printf("%d", sizeof(c = a + b));
//}//a+b运算，ab分别整型提升
//a 00000000 00000000 00000000 00000100
//b 00000000 00000000 00000000 00000101
//  00000000 00000000 00000000 00001001 -a+b所得结果
// 但c=00001001 截断后的结果
// 因为a+b整型提升为int型后又赋值给c（char型）
// 所以这里存在隐式转换，可以这样理解（char）(a+b)
//int main()
//{
//	char c = 1; 
//	printf("%u  %u\n", sizeof(c),c);
//	printf("%u  %u\n", sizeof(+c),+c);
//	printf("%u  %u\n", sizeof(-c),-c);
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("a=%d a=%u",a,a);
//	return 0;
//}
//  
//int main()
//{
//	int a = -5;   
//	char c = a << 1;
//	printf("%d %u", c, c);                               
//}
//int main()
//{
//	int a = 77;
//	int i=1;
//	int count=0;
//	int c=1;
//	do
//	{
//		if ( a ^ (c << i++))
//			count++;
//	}while (i++ <= sizeof(a));
//	printf("%d", count);
//	return 0;
//
//
//
//	
//}
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001 原码
//	//11111111111111111111111111111111 补码
//	int b = a << 1;
//	//11111111111111111111111111111110 左移后
//	//00000000000000000000000000000010 原码 %d打印该十进制数 -2
//	int c = a >> 1;
//	//11111111111111111111111111111111 右移后（往左补符号位1）
//	//10000000000000000000000000000001 原码 %d打印该十进制数 -1
//	printf("b=%d c=%d\n",b, c);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

		//int i = 0, a = 0, b = 2, c = 3, d = 4;
		////i = a++ && ++b && d++;
		//i = a++||++b||d++;
		//printf("a = %d b = %d c = %d d = %d\n", a, b, c, d);
//		return 0;
//}
	//double a = 5 /2.0;
	//printf("%d", a);
	///*int a = -1;
	//int b = a >> 1;
	//printf("%d", b);*/