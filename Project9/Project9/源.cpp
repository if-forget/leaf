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
//		while(count--)//��������ǡ������±���0��ʼ������ָ��ָ��ĵ�ַӦΪʵ���ֽ���-1
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
//	while (count--)//����������һ���ֽ�һ���ֽڿ���������count--���Դﵽ������Ч��
//	{
//		*(char*)shu1 = *(char*)shu;//���ǵ������������Ͷ�ͨ�ã����Խ�ָ������ǿ��ת����char*
//		shu1 = (char*)shu1 + 1;
//		shu = (char*)shu + 1;//��Ϊǿ��ת������ʱ��Ч������������һ���ֽ�һ���ֽڼ�����󿽱�ʱ����Ҫ����ǿ������ת����char*�ſ��Լ���һ���ֽ�һ���ֽڵĿ���
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
//	 char* cp = (char*)str1;//cpΪ����ֵ���͸�ֵ���β����Ͳ�ͬ����Ҫǿ������ת��
//	while (*cp)
//	{
//		if (*str2 == '\0')
//		{
//			return (char*)str1;
//		}
//		s2 = str2;
//		s1 = cp;
//		while (*s1 && *s2 && (*s2== *s1))
//		{//���ж�����ֻ��*str2== *str1ʱ��������������ַ�ƥ�������ͬʱ��'\0'���������ַ���ʱ�����ǻ��������ѭ�������Խ����ʵĴ���
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')//��������*s2Ϊ'\0'ʱ�����Ǿ������ҵ����ҷ���ָ�벢����������
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;//��*s1δ����Ҳ�����Ϊ'\0��ʱ����ѭ�����ؿ�ָ��
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
//	while (count&&(*dest++ = *sour++))//�����һ��Ϊ0������ѭ��
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)//����ѭ��ʱcount=0�����������ж�ʱ���жϵľ��Ǽ����ֵ�����Ե���Ϊ0��û�н��������������ѭ��
//		{              //���Ϊcount--������ѭ��ʱcount=-1,���������ж�ʱ���ж�δ��1��ֵ������ѭ�����1������ֵΪ0ʱ����ѭ��������ж�ʱ����ѭ������Ҳ�Լ�Ϊ-1
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
	// ��ͬ�ڣ�*p > * q ? (p - q) : (q - p);              
	//*p > * q ? 1 : -1;
	//��ͬ�ڣ�if (*p > *q)
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
//	if (my_strcmp(p, q) > 0)//�����򷵻ش���0����
//	{
//		printf(">");//��һ���ַ�С�ڵڶ���
//	}
//	else if (my_strcmp(p, q))//С���򷵻ش���0����
//	{
//		printf("<");
//	}
//	else
//		printf("=");//��ȷ���0
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
//	//shu1 = shu1 - 1;//��ע�͵ķֱ���shu1ָ���λ��Ҫ-1�õ�ָ��'\0'��λ�ã�
//	//                //�ǵ����������ж��Ƿ�Ϊ'\0'ʱ�ֽ������ԼӲ���
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
////�����Ķ���Ӧ�ü���const��Ƚϰ�ȫ��const char*shu
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
//	const char* p = "I am Ok��";
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

	//a++��д����ͬ�ڣ�
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
	//�����ǣ�
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
//    {     // -2���ڴ��д�ŵĲ�����ʽ��11111111 11111111 11111111 11111110 
//        printf(">");     //�����޷�����������õ��޷��������ò��뵱�޷��Ŵ������Խ��Ϊ������
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
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//pΪָ�룬ָ�����;�����ָ�����㣬����֪����֪pΪ20���ֽڴ�С�Ľṹ��ָ�����������p+1��ζ������һ����СΪ20���ֽڵĽṹ�壬��ָ�����ָ��ĵ�ַΪ0x100014(ʮ������14��ʾ20��
//	printf("%p\n", ((unsigned long)p + 0x1));//0x100001  ָ��pǿ��ת��Ϊ���ͣ���+1��Ϊ0x100001
//	printf("%p\n", ((unsigned int*)p + 0x1));//0x100004
//}
//int main()
//{
//	const char* a[] = { "work","at","alibaba" }; //aΪָ������
//	const char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}
//int main()
//{
//    int a[5][5] = { 1,2,3,4,5,6,7,9,11,22,55,66,67,89,99,32 };
//    int(*p)[4];//pΪ����ָ�룬ָ��һ������4��int��Ԫ�ص�����
//    p =(int(*)[4]) a;//����ά������׵�ַ��ֵ��p��
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    printf("%d %d\n", *(*(p + 4) + 2), p[4][2]);
//    printf("%d %d\n", *(*(p + 2) + 1), p[2][1]);
//    return 0;   //�൱��ָ��-ָ�룬����Ϊ����ַ֮���Ԫ�ظ���
//}
//int main()
//{
//	int a[3][4] = { 1,3,6,5,7,9,2,11,44,77,99,0 };
//	printf("%d ", *a[0]);//1
//	printf("%d ", *(a[0] + 1));//3
//	printf("%d ", **(a + 1));//7
//	printf("%p ", a[0] + 1);//��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%p ", a[1]);//�ڶ��еĵ�ַ
//	printf("%p ", a + 1);//�ڶ��еĵ�ַ
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
//	printf("******��ѡ��������***********\n");
//	printf("*******1��ƴ�������***********\n");
//	printf("*******2����ͨ���*************\n");
//	printf("*******3��ר�����*************\n");
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
//		printf("��д���������");
//		scanf("%d", &a);
//		printf("���趨������");
//		scanf("%f", &b);
//		
//		printf("��ʼ���������\n");
//		manu();
//		scanf("%d", &d);
//		printf("%f\n", p[d]);
//		printf("����һ�Σ�y/n");
//		scanf("%c", &g);
//	} while (g=='y');
//		
//	return 0;
//}
//int main()
//{
//	int i, h;
//	float o, p;
//	printf("��ѡ�����ַ���ʽ:\n");
//
//	printf("1.����     2.���\n");
//	scanf("%d", &h);
//	if (h == 1)
//	{
//		printf("���������ܽ��:\n");
//		scanf("%f", &o);
//		printf("������ַ��������:\n");
//		scanf("%f", &p);
//		for (i = 1; i <= p; i++)
//			printf("��ϲ��������%d�����:���Ϊ:%f\n", i, o / p);
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
//	//��ȡn��2�����е�����λ��ż��λ
//	//0000000000000000000000000000000001010
//	//00000000 00110101 
//	//11000011 00101100
//	//01010000000001010000111001110010
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
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

