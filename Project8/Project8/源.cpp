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
//	printf("����ʼ���о�����%.lf��\n", (double)c / CLOCKS_PER_SEC);
//	return 0;
//}
	//#define _CRT_SECURE_NO_WARNINGS 1;
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//
//
//
//int fib(int n, int* count)                             //쳲��������еĵݹ�ʵ��
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		(*count)++;                                    //����Ĵ���
//		return fib(n - 1, count) + fib(n - 2, count);  //�����count��ָ�����������Ҫ&����main�����еĲ�һ����main�����е�count�����ͱ���
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
//	printf("������\n");
//	do                                                  //�������
//	{
//		int count = 0;
//		scanf("%d", &n);
//		if (n)
//		{
//			double start = GetTickCount();              //Windows�ṩ�ĺ�������ȡ���Կ��������ڵ�ʱ�䣬��λ�Ǻ���
//			ret = fib(n, &count);
//			double end = GetTickCount();                //ͨ������ʱ�������ȷ�����Լ����õ�ʱ��
//			printf("fib(%d) = %d ��ʱ = %.1lf�� ������� = %d ��\n", n, ret, (end - start) / 1000, count);
//		}
//	} while (n);                                         //����0����ѭ��
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
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}
//int* remind()
//{
//	int a = 1;//�ֲ�������һ�����˺����������ٸñ���
//	return &a;
//}
//int main()
//{
//	//int a = 7;
//	//int* p;//1��ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	//*p = 1;//�����pΪҰָ�룬��ָ�����һ����ַ��ֵ����̫�ɿ�
//
//	//int a[3] = { 0 };
//	//int* p = a;
//	//int i = 0;
//	//for (i = 0; i < 7; i++ )
//	//	*(p++) = 1;//2��ָ��Խ����ʣ�����ѭ���ļ����ᳬ������Ĵ�С
//
//	int* p = remind();//3��ָ��ָ���ѱ��ͷŵĿռ�
//	*p = 0;//��Ȼ�з��ص�ַ������Ϊ�ñ����ѱ����٣��ռ䱻�ջأ��õ�ַ�Ѿ�����ԭ�������ĵ�ַ��
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
//	int count = 0;//����
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
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
//	b b1 = { "�ҽ�����",2019 };//һ��������ʼ��
//	//b b2;//������������ȶ����������ֵ�ᱨ��˵���ʽ�����ǿ��޸ĵ���ֵ��
//	//b2.name = "�ҽ�������";
//	//b2.time = 20190;
//	//������ٳ�ʼ���Ļ���������
//	b b3;
//	strcpy(b3.name, "�ҽ�����ѽ��");//����ǵ�Ҫ��strcpy�������������ɼ����ӷ���
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
//}animal;//��struct animal����������Ϊ��animal�������animal�����ͣ�
//struct nature
//{
//	char animal[7];
//	int age;
//	short tree;
//	struct book g5;
//} g1, g2, g3;//����������ȫ�ֵĽṹ������������Ǵ����ı�����
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
//	struct nature g;//�ֲ��Ľṹ�����
//	//animal g��//��typedef��������������������ṹ�����
//	struct nature g4 ={"С��",3,11 };//���������ͬʱ��ʼ����Ҫ���սṹ�嶨��ı���˳������ֵ��һһ��Ӧ��δ��ֵ��Ĭ��Ϊ0
//	struct nature b = {"Сè",2,7,{"c����",'2019'} };
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
//	//int* p;δ��ʼ����Ĭ��Ϊ���ֵ(ָ��һ�������ַ��
//	//*p=7; ������ֵ�����У���Ϊû�г�ʼ��
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
//	//10000000 00000000 00000000 00001010 ԭ��
//	//11111111 11111111 11111111 11110110 ����
//	//Oxff ff ff f6 ʮ������
//	//��Ϊ��С�˴洢ģʽ����˳��Ϊ f6 ff ff ff
//	char* r = (char*)&a;
//	printf("%d\n", a);
//	int* y = &a;
//	printf("%p\n", r);
//	printf("%p\n", r + 1);//ָ��������һ���ֽ� -char*
//	printf("%p\n", y);
//	printf("%p\n", y + 1);//ָ���������ĸ��ֽ� -int*
//	*r = 0;
//	//��Ϊchar*rֻ�ܷ���һ���ֽ����Ե�һ���ֽ�f6����ֵΪ0
//	//��� 00 ff ff ff
//	printf("%d", a); 
//	//11111111 11111111 11111111 00000000 ����
//	//10000000 00000000 00000001 00000000 ԭ�� %d��ӡ-100000000=-128
//	return 0;
//	
//}
//int check_sys()
//{
//	int i = 1;
//	//00000000 00000000 00000000 00000001 ��������
//	//Ox00 00 00 01 ʮ������
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)  // ��ΪС�ˣ���λ�ŵ��͵�ַ
//	{        // ��洢��ʽΪ 01 00 00 00
//		printf("С��\n"); //���Ե�һ���ֽڣ�01����ֵ1������1��
//	}
//	else //��Ϊ��ˣ���λ�ŵ��ߵ�ַ 
//	{   //�洢��ʽΪ 00 00 00 01  ���Ե�һ���ֽ�(00)��ֵ0 (����0��
//		printf("���\n");
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
//}//a+b���㣬ab�ֱ���������
//a 00000000 00000000 00000000 00000100
//b 00000000 00000000 00000000 00000101
//  00000000 00000000 00000000 00001001 -a+b���ý��
// ��c=00001001 �ضϺ�Ľ��
// ��Ϊa+b��������Ϊint�ͺ��ָ�ֵ��c��char�ͣ�
// �������������ʽת��������������⣨char��(a+b)
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
//	//10000000000000000000000000000001 ԭ��
//	//11111111111111111111111111111111 ����
//	int b = a << 1;
//	//11111111111111111111111111111110 ���ƺ�
//	//00000000000000000000000000000010 ԭ�� %d��ӡ��ʮ������ -2
//	int c = a >> 1;
//	//11111111111111111111111111111111 ���ƺ����󲹷���λ1��
//	//10000000000000000000000000000001 ԭ�� %d��ӡ��ʮ������ -1
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