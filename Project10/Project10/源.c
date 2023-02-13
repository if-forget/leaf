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
//	printf("%d\n", feof(pf));//单独用feof没有意义，一般都返回0代表后面有内容，一般和读取函数一起使用，如下和fgetc函数一起,会返回1
//
//	int n = fgetc(pf);
//	while (!feof(pf))//当未读取结束时返回0
//	{
//		printf("%c", n);
//		n = fgetc(pf);
//	}
//	if (ferror(pf))//检测返回EOF的原因，是否是因为出现读取错误
//	{
//		printf("\nI/O error when reading\n");
//	}
//	else if (feof(pf))//检测返回是否因为读取结束返回EOF
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
//	fwrite(&a, 4, 1, pf);//先用w写入后再读的这里我是
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
//	FILE* pf = fopen("Project111.txt", "r");//里面的内容是I am not happy now！
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
//	int file = fgetc(pf);
//	printf("%c\n", file);
//	int n = ftell(pf);//查看偏移量
//	printf("%d\n", n);//1,这时指针指向下一个字符
//
//	rewind(pf);//让指针回到起始位置，所以下面又从起始开始打印
//	while ((file = fgetc(pf)) != EOF)
//	{
//		printf("%c", file);
//	}
//
//	fseek(pf,-1, SEEK_CUR);//让指针指向当前位置开始算偏移量为-1的字符
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
//	char buffer[99] = { 0 };//把字符串的信息写入buffer
//	struct bo temp = { 0 };//将刚刚的字符串存放在这个结构体变量中
//	sprintf(buffer, "%s %d %f", b.a, b.c, b.d);
//	printf("%s\n",buffer);
//	//从buffer字符串中还原出一个结构体变量
//	sscanf(buffer, "%s %d %f", temp.a, &(temp.c), &(temp.d));
//	printf("%s %d %f", temp.a, temp.c, temp.d);//虽然和上面的结果相同，但这里打印的格式是%s %d %f，而上面则是字符串形式
//	return 0;
//}
//int main()
//{
//	char shu[11] = { 0 };
//	FILE* pf = fopen("Project111.c", "r");//虽然这里是r，但我是先用w写完后再用r读取
//		if (pf == NULL)
//		{
//			perror("fopen");
//			return 1;
//		}
//	//写文件
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
//	//写文件//先用"w"写文件
//	fputc('h',pf );
//	fputc('a', pf);
//	fputc('h', pf); 
//	fputc('a', pf);
//	fputc('h', pf);
//	fputc('a', pf);
//    //读文件，用"r"
//	//int n = fgetc(pf);
//	//printf("%c", n);
//	//n = fgetc(pf);
//	//printf("%c", n);
//	//n = fgetc(pf);
//	//printf("%c", n);
//    //关闭文件
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
//	struct c* p= (struct c*)malloc(sizeof(struct c));//为结构体成员a和b开辟空间
//	if (p == NULL)
//		return 1;
//	p->a = 10;
//	p->b= (int*)malloc(10*sizeof(int));//为b开辟一块内存空空间
//	if (p->b == NULL)
//		return 1;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->b[i] = i;
//	}
//	int*p1= (struct c*)realloc(p->b,10 * sizeof(int));//记得这里是为p->b扩展空间，其为int*型
//	if (p1)//每次开辟用动态内存开辟函数时都要再判断一下是否为空指针
//	{
//		p->b = p1;
//	}
//	free(p->b);//释放时要先释放为p->b开辟的空间，
//	p->b = NULL;
//	free(p);//再释放为成员对象开辟的空间，因为如果先释放这个空间的话将找不到后面为p->b的空间
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
////上面方法等价于：
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
//	g.name = "小小";
//	g.quantity = 97;
//	printf("%s %d\n", g.name, g.quantity);
//	g1.name = (char*)malloc(4);
//	strcpy(g1.name, "大大");
//	g1.quantity = 17;
//	//strcpy(g1.name, "大大");//error
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
//	//b.x = 1;//不能通过给b.x赋值为1来判断，因为x本就占这一个字节，且其赋值后没有被其他数覆盖，所以输出只为1，没有参考价值
//	return b.x;//不用强制类型转换也可以，int类型足够存储char数据中的内容
//}
//int main()
//{
//	int a = refer();
//	if (a)//只有0或1两种可能
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
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
//    green,//里面的都是枚举类型可能的取值
//    blue,
//};
//int main()
//{
//	//enum color c = 2;//error，我们要用枚举类型的可能取值去赋值
//	enum color c = blue;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异
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
//	printf("%p\n", &r1.c);//r1.c的类型是int，&r1.c的类型是int*
//	printf("%p\n", &r1);//r1是结构体a类型，&r1是a*类型
//	scanf("%d", &r1.c);
//	scanf("%s", &r1.b);
//	printf("%d %s", r1.c, &r1.b);
//	scanf("%s",&(e[2].b));//等价于e[2].d;因为d是字符数组数组名，相当于数组首地址
//	scanf("%d",&(p+2)->c);//等价于( &(*(p + 2)).c)
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
//}s1 = { "张一",17,"我不信",180.1};
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
//	else//因为前面有两条语句 n=MAX;和空语句;
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
//	printf("hello ""world\n");//自己可以加空格，双引号只会分段打印，要自己手动间隔
//	printf("the value of a is %d\n", a);
//	//等价与：print（a）
//	print(a);
//	//#x代表 "x",有#时，不会把其替换成值，
//	//("the value of " "a" "is %d\n",a)
//	print1(b,"%f");
//	//("the value of" "b" " is " "%f" "\n", b)
//	//就是用双引号把打印的内容分段输出，如hello world 
//	return 0;
//
//}
//#define ADD_TO_SUM(num, value)  sum##num += value;
//
//int main()
//{
//	int sum5 = 11;
//	ADD_TO_SUM(5, 10);
//	//作用是：给sum5增加10.
//	printf("%d",sum5);
//	return 0;
//}
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int a = 7;
//	int b = 9;
//	int m = MAX(a++, b++);
//	//先替换变成( (a++) > (b++) ? (a++) : (b++) )
//	//a<b,所以输出b++，先引用再执行，所以为b+1=10（在判断大小的时候b++的值即为我们后来需要引用的值）
//	printf("%d %d %d\n", a, b, m);//8 11 10
//	//a=a+1=8，判断完大小后变为8，后置++的副作用，先引用a为7的原值判断大小，最后a自加为8
//	//因为a<b.所以问好后面的a++没有执行，a仍为之间的8而b++先引用后执行，最后的结果为b=b+1=10+1=11
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
    #endif//#ifdef OP1配套
    #ifdef OP2
	    printf("bu\n");
    #endif//#ifdef OP2配套
#elif defined(m)
    #ifdef OP2
	    printf("wo\n");
    #endif//#ifdef OP2配套
        printf("yes!");
#endif//#elif defined(m)配套
        return 0;
}
