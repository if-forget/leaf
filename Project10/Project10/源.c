#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>

//int main()
//{
//	char p[] = "I am hungry!";
//	int i = sizeof(p);
//	int a = 0;
//	FILE* pf = fopen("Project111.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for(a=0;a<i;a++)
//	{
//		fputc(p[a], pf);
//	}
//	
//	printf("%d\n", feof(pf));//������feofû�����壬һ�㶼����0������������ݣ�һ��Ͷ�ȡ����һ��ʹ�ã����º�fgetc����һ��,�᷵��1
//
//	int n = fgetc(pf);
//	while (!feof(pf))//��δ��ȡ����ʱ����0
//	{
//		printf("%c", n);
//		n = fgetc(pf);
//	}
//	if (ferror(pf))//��ⷵ��EOF��ԭ���Ƿ�����Ϊ���ֶ�ȡ����
//	{
//		printf("\nI/O error when reading\n");
//	}
//	else if (feof(pf))//��ⷵ���Ƿ���Ϊ��ȡ��������EOF
//	{
//		printf("\nEnd of file reached successfully\n");
//	}
//	
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int a = 10000;//00000000 00000000 00100111 00010000
//	FILE* pf = fopen("Project111.txt", "r");
//	fwrite(&a, 4, 1, pf);//����wд����ٶ�����������
//	fread(&a, 4, 1, pf);
//	fprintf(stdout, "%d", a);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//}
//int main()
//{
//	FILE* pf = fopen("Project111.txt", "r");//�����������I am not happy now��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int file = fgetc(pf);
//	printf("%c\n", file);
//	int n = ftell(pf);//�鿴ƫ����
//	printf("%d\n", n);//1,��ʱָ��ָ����һ���ַ�
//
//	rewind(pf);//��ָ��ص���ʼλ�ã����������ִ���ʼ��ʼ��ӡ
//	while ((file = fgetc(pf)) != EOF)
//	{
//		printf("%c", file);
//	}
//
//	fseek(pf,-1, SEEK_CUR);//��ָ��ָ��ǰλ�ÿ�ʼ��ƫ����Ϊ-1���ַ�
//	file = fgetc(pf);
//	printf("\n%c", file);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct bo
//{
//	char a[11];
//	int c;
//	float d;
//};
//int main()
//{
//	struct bo b = { "today",1,3.3};
//	char buffer[99] = { 0 };//���ַ�������Ϣд��buffer
//	struct bo temp = { 0 };//���ոյ��ַ������������ṹ�������
//	sprintf(buffer, "%s %d %f", b.a, b.c, b.d);
//	printf("%s\n",buffer);
//	//��buffer�ַ����л�ԭ��һ���ṹ�����
//	sscanf(buffer, "%s %d %f", temp.a, &(temp.c), &(temp.d));
//	printf("%s %d %f", temp.a, temp.c, temp.d);//��Ȼ������Ľ����ͬ���������ӡ�ĸ�ʽ��%s %d %f�������������ַ�����ʽ
//	return 0;
//}
//int main()
//{
//	char shu[11] = { 0 };
//	FILE* pf = fopen("Project111.c", "r");//��Ȼ������r������������wд�������r��ȡ
//		if (pf == NULL)
//		{
//			perror("fopen");
//			return 1;
//		}
//	//д�ļ�
//	fputs("yes!",pf);
//	fgets(shu,9,pf);
//	printf("%s\n",shu);
//	return 0;
//
//}
//int main()
//{
//	int n=fgetc(stdin);
//	printf("%c", n);
//	n=fgetc(stdin);
//	printf("%c", n);
//	n=fgetc(stdin); 
//	printf("%c", n);
//	n=fgetc(stdin);
//	printf("%c", n);
//	return 0;
//}
//int main()
//{
//	FILE*pf=fopen("Project111.c", "w");
//	//FILE* pf= fopen("Project111.c", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�//����"w"д�ļ�
//	fputc('h',pf );
//	fputc('a', pf);
//	fputc('h', pf); 
//	fputc('a', pf);
//	fputc('h', pf);
//	fputc('a', pf);
//    //���ļ�����"r"
//	//int n = fgetc(pf);
//	//printf("%c", n);
//	//n = fgetc(pf);
//	//printf("%c", n);
//	//n = fgetc(pf);
//	//printf("%c", n);
//    //�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct c
//{
//	int a;
//	int*b;
//};
//int main()
//{
//	struct c* p= (struct c*)malloc(sizeof(struct c));//Ϊ�ṹ���Աa��b���ٿռ�
//	if (p == NULL)
//		return 1;
//	p->a = 10;
//	p->b= (int*)malloc(10*sizeof(int));//Ϊb����һ���ڴ�տռ�
//	if (p->b == NULL)
//		return 1;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->b[i] = i;
//	}
//	int*p1= (struct c*)realloc(p->b,10 * sizeof(int));//�ǵ�������Ϊp->b��չ�ռ䣬��Ϊint*��
//	if (p1)//ÿ�ο����ö�̬�ڴ濪�ٺ���ʱ��Ҫ���ж�һ���Ƿ�Ϊ��ָ��
//	{
//		p->b = p1;
//	}
//	free(p->b);//�ͷ�ʱҪ���ͷ�Ϊp->b���ٵĿռ䣬
//	p->b = NULL;
//	free(p);//���ͷ�Ϊ��Ա���󿪱ٵĿռ䣬��Ϊ������ͷ�����ռ�Ļ����Ҳ�������Ϊp->b�Ŀռ�
//	p = NULL;
//	return 0;
//}
/*int main()
{
	int* p = (int*)realloc(NULL, 100);
}*/

//int main()
//{
//	int* a = calloc(10,4);
//	int* b = realloc(a, 100);
//	if (b != NULL)
//	{
//		a = b;
//	}
//	free(a);
//	a = NULL;
//	return 0;
//}
//void aaa(int** b)
//{
//	*b = *b + 1;
//	**b = 17;
//	printf("%p\n", *b);
//}
//int main()
//{
//	int a[3] = { 11,22,77 };
//	int* b = a;
//	printf("%p %p\n", b, &a);
//	aaa(&b);
//	printf("%d %d\n", a[1], *b);//17  17
//	printf("%p", b);
//	return 0;
//}
//char* GetMemory(char* p)
//{
//	return p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	str= GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////���淽���ȼ��ڣ�
//// void GetMemory(char** p)
////{
////	 *p = (char*)malloc(100);
////}
//// void Test(void)
////{
////	char* str = NULL;
////  GetMemory(&str);
////	strcpy(str, "hello world");
////	printf(str);
////}
//
//int main()
//{
//	Test();
//	return 0;
//}
//struct boo
//{
//	char* name;
//	int quantity;
//}g,g1;
//int main()
//{
//	g.name = "СС";
//	g.quantity = 97;
//	printf("%s %d\n", g.name, g.quantity);
//	g1.name = (char*)malloc(4);
//	strcpy(g1.name, "���");
//	g1.quantity = 17;
//	//strcpy(g1.name, "���");//error
//	printf("%s %d", g1.name, g1.quantity);
//	g1.name = NULL;
//	free(g1.name);
//	return 0;
//}
//enum b
//{
//	exit,
//	add,
//	sub,
//	mul,
//	dev
//
//};
//int main()
//{
//	//enum b a = exit;
//	//printf("%d",a);
//	char n;
//	scanf("%s", &n);
//	switch (n)
//	{
//	case exit:
//		break;
//	case add:
//		break;
//	case sub:
//		break;
//	case mul:
//		break;
//	case dev:
//		break;
//	}
//	return 0;
//}
//int refer()
//{
//	union c
//	{
//		char x;
//		int y;
//	}b;
//	b.y = 1;
//	//b.x = 1;//����ͨ����b.x��ֵΪ1���жϣ���Ϊx����ռ��һ���ֽڣ����丳ֵ��û�б����������ǣ��������ֻΪ1��û�вο���ֵ
//	return b.x;//����ǿ������ת��Ҳ���ԣ�int�����㹻�洢char�����е�����
//}
//int main()
//{
//	int a = refer();
//	if (a)//ֻ��0��1���ֿ���
//	{
//		printf("С��");
//	}
//	else
//		printf("���");
//	return 0;
//	
//}
//union a
//{
//	char b[7];
//	int c;
//};
//int main()
//{
//	printf("%d", sizeof(union a));//8
//
//}
//union book
//{
//	char name;
//	int price;
//};
//int main()
//{ 
//	union book c1,c2;
//	union book c ={97};
//	printf("%s %d\n", &(c.name), c.price); 
//	c1.name = "65"; 
//	c1.price = 66; 
//	printf("%s %d\n", &(c1.name), c1.price);
//	c2.name = "66";
//	c2.price = 65; 
//	printf("%s %d", &(c2.name), c2.price);
//	return 0;
//}
//enum color
//{
//	red,
//    green,//����Ķ���ö�����Ϳ��ܵ�ȡֵ
//    blue,
//};
//int main()
//{
//	//enum color c = 2;//error������Ҫ��ö�����͵Ŀ���ȡֵȥ��ֵ
//	enum color c = blue;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ���
//}

//struct book
//{
//	char name;
//	int price;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct book, name));
//	printf("%d\n", offsetof(struct book ,price));
//	return 0;
//}
//#pragma pack(8)
//struct student
//	{
//		char name[7];
//		int age;
//		float height;
//	}s1;
//#pragma pack()
//struct a
//{
//	char b;
//	int c;
//	char d[3];
//}e[4],*p =e;
//int main()
//{
//	struct a r1;
//	printf("%p\n", &r1.c);//r1.c��������int��&r1.c��������int*
//	printf("%p\n", &r1);//r1�ǽṹ��a���ͣ�&r1��a*����
//	scanf("%d", &r1.c);
//	scanf("%s", &r1.b);
//	printf("%d %s", r1.c, &r1.b);
//	scanf("%s",&(e[2].b));//�ȼ���e[2].d;��Ϊd���ַ��������������൱�������׵�ַ
//	scanf("%d",&(p+2)->c);//�ȼ���( &(*(p + 2)).c)
//	scanf("%d",( &(*(p + 2)).c));
//	printf("%s %d", &(*(p+2)).b, p[2].c);
//	return 0;
//}
//struct student
//{
//	char name[7];
//	int age;
//	float height;
//}s1;
//struct q
//{
//	char a;
//	int  c;
//	struct student* s;
//}s2;
//int main()
//{
//	printf("%d\n", sizeof(s1));//16
//	printf("%d\n", sizeof(s1));//16
//}

//struct student
//{
//	char name[7];
//	int age;
//	struct student* s;
//	float height;
//}s1 = { "��һ",17,"�Ҳ���",180.1};
//int main()
//{
//	struct student* s3 = &s1;
//	printf("%s\n%s\n%s\n",(char*)(s1.s),(char*)((*s3).s),(char*)(s3->s));
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("log.txt","a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__,i);
//			
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#define CASE break;case
//#define MAX  11;
//int main()
//{
//	int n = 0;
//	scanf("%s", &n);
//	switch (n)
//	{
//	case 0:
//		printf("wo");
//	CASE 1:
//	    printf("ni");
//	CASE 2:
//	if (n > 0)
//		n=MAX;
//	else//��Ϊǰ����������� n=MAX;�Ϳ����;
//		printf("haha");
//	}
//	return 0;
//}
//#define A 2+2
//#define B 3+3
//#define C A*B
//#define D (A)*(B)
//int main()
//{
//	printf("%d\n", C);
//	//A*B=2+2*3+3=11
//	printf("%d\n", D);
//	//(A)*(B)=(2+2)*(3+3)=24
//	return 0;
//}y
//#define print(x) printf("the value of "#x" is %d\n",x);
//#define print1(x,y) printf("the value of "#x" is " y "\n",x);
//int main() 
//{
//	int a = 11;
//	float b = 7.9f;
//	printf("hello world\n");
//	printf("hello ""world\n");//�Լ����Լӿո�˫����ֻ��ֶδ�ӡ��Ҫ�Լ��ֶ����
//	printf("the value of a is %d\n", a);
//	//�ȼ��룺print��a��
//	print(a);
//	//#x���� "x",��#ʱ����������滻��ֵ��
//	//("the value of " "a" "is %d\n",a)
//	print1(b,"%f");
//	//("the value of" "b" " is " "%f" "\n", b)
//	//������˫���ŰѴ�ӡ�����ݷֶ��������hello world 
//	return 0;
//
//}
//#define ADD_TO_SUM(num, value)  sum##num += value;
//
//int main()
//{
//	int sum5 = 11;
//	ADD_TO_SUM(5, 10);
//	//�����ǣ���sum5����10.
//	printf("%d",sum5);
//	return 0;
//}
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int a = 7;
//	int b = 9;
//	int m = MAX(a++, b++);
//	//���滻���( (a++) > (b++) ? (a++) : (b++) )
//	//a<b,�������b++����������ִ�У�����Ϊb+1=10�����жϴ�С��ʱ��b++��ֵ��Ϊ���Ǻ�����Ҫ���õ�ֵ��
//	printf("%d %d %d\n", a, b, m);//8 11 10
//	//a=a+1=8���ж����С���Ϊ8������++�ĸ����ã�������aΪ7��ԭֵ�жϴ�С�����a�Լ�Ϊ8
//	//��Ϊa<b.�����ʺú����a++û��ִ�У�a��Ϊ֮���8��b++�����ú�ִ�У����Ľ��Ϊb=b+1=10+1=11
//	return 0;
//}
//#define A 11
//int main()
//{
//	printf("%d\n", A);
//#undef A 19
//	printf("%d\n", A);
//	return 0;
//}
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int a = 11;
//	int b = 1;
//#ifdef MAX 
//	printf("what!\n");
//#endif
//#if 0
//	printf("No!\n");
//#elif 11>1
//	printf("when!\n");
//#else
//	printf("yes!\n");
//#endif
//	return 0;
//
//}
#define m 11
int main()
{
#if defined(u)
    #ifdef OP1
	    printf("dao\n");
    #endif//#ifdef OP1����
    #ifdef OP2
	    printf("bu\n");
    #endif//#ifdef OP2����
#elif defined(m)
    #ifdef OP2
	    printf("wo\n");
    #endif//#ifdef OP2����
        printf("yes!");
#endif//#elif defined(m)����
        return 0;
}
