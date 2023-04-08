#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* pa;
	int top;
	int capacity;
}ST;

void InitStack(ST* ps);
void DestoryStack(ST* ps);
void PushStack(ST* ps, STDataType x);
void PopStack(ST* ps);
int SizeStack(ST* ps);
STDataType TopStack(ST* ps);
bool EmptyStack(ST* ps);

void InitStack(ST* ps)
{
	//ps->pa = (STDataType*)malloc(sizeof(STDataType)*4);
	//ps->top = 0;
	//ps->capacity = 4;
	//如果是上述初始化方式，后面扩容时直接申请2倍的原有容量即可

	ps->pa = NULL;
	ps->top = 0;//可以初始化为0或-1
	//top=0,意味着top指向栈顶元素的下一个
	//top=-1,表示top指向栈顶元素
	ps->capacity = 0;
}

//销毁
void DestoryStack(ST* ps)
{
	assert(ps);

	free(ps->pa);
	ps->pa = NULL;
	ps->capacity = 0;//不要忘记了
	ps->top = 0;
}

//入栈
void PushStack(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)//每次入栈都会判断，只可能是先等于再大于，如果考虑top大于capacity的话，所以就直接用==条件判断了
	{
		int newcapacity = ps->capacity > 0 ? 2 * ps->capacity : 4;
		STDataType* temp = (STDataType*)realloc(ps->pa, sizeof(STDataType) * newcapacity);//记得申请类型不要搞错了
		if (temp == NULL)
		{
			printf("realloc fail\n");//perror("realloc:");
			exit(-1);
		}
		ps->pa = temp;
		ps->capacity = newcapacity;//容易忘记
	}
	ps->pa[ps->top] = x;
	ps->top++;
}

//出栈
void PopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps));// assert(ps->top> 0);

	ps->top--;
}

//栈内数据个数
int SizeStack(ST* ps)
{
	assert(ps);

	return ps->top;
}

//获取栈顶元素
STDataType TopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps)); //assert(ps->top>0);

	return ps->pa[ps->top - 1];//因为初始化时top=0，top-1才表示栈顶
}

//栈内状态是否为空
bool EmptyStack(ST* ps)
{
	assert(ps);
	return ps->top == 0;//这里是判断是否为0，在后面!EmptyStack的判断中可以知道不为0为false,!false为ture进入循环
}

typedef struct {
	ST s1;//将s1固定为入数据时的栈
	ST s2;//s2则是出栈和取队列首元素的栈
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	if (obj == NULL)
	{
		perror("malloc fail：");
		exit(-1);
	}
	InitStack(&obj->s1);
	InitStack(&obj->s2);
	return obj;
}

void myQueuePush(MyQueue* obj, int x) {
	if ((EmptyStack(&obj->s1) || EmptyStack(&obj->s1)) && EmptyStack(&obj->s1))
	{//这个逻辑判断的意思：在栈中有数据的前提下，s1栈为空，则进入
		while (SizeStack(&obj->s2) > 0)//满足if进入（s1为空且s2不为空），所以将s2中的数据倒入s1
		{
			PushStack(&obj->s1, TopStack(&obj->s2));
			PopStack(&obj->s2);
		}

	}
	PushStack(&obj->s1, x);//s1作为插入数据时的栈插入数据
	//如果问为什么不直接插入：在有数据（两栈至少一栈不为空的前提下），考虑到栈为先进后出原则，所以要先把数据倒入到另一个栈，再倒回来才可以与队列中的数据排列相同，当然，在一开始没有进行相关数据操作的前提下，s1中的数据顺序符合队列形式可以直接插入
	//总的规律就是，在有内容的前提下，s1为空，s2导入，再入数据。s1不为空，直接入
	//如：s1：1 2 3 4  （不为空） 直接入 x
	//    s2：4 3 2 1  s1：空，先把数据导入s1：1 2 3 4 再插入x
}

int myQueuePop(MyQueue* obj) {

	while (SizeStack(&obj->s1) >0)//s2作为出数据的栈，这个循环条件的意思是
	{
		PushStack(&obj->s2, TopStack(&obj->s1));
		PopStack(&obj->s1);
	}
	if (EmptyStack(&obj->s1))
	{
		return -1;
	}
	int ret = TopStack(&obj->s2);
	PopStack(&obj->s2);
	
	return ret;
}

int myQueuePeek(MyQueue* obj) {

	while (SizeStack(&obj->s1) > 0)
	{
		PushStack(&obj->s2, TopStack(&obj->s1));
		PopStack(&obj->s1);
	}
	return TopStack(&obj->s2);//s2作为倒入数据的栈，其栈顶元素同队列出队的元素吻合
}

bool myQueueEmpty(MyQueue* obj) {
	return  EmptyStack(&obj->s1)&& EmptyStack(&obj->s2);
}

void myQueueFree(MyQueue* obj) {
	DestoryStack(&obj->s1);
	DestoryStack(&obj->s2);
	free(obj);
}

int main(){
	MyQueue* myqueue = myQueueCreate();
	myQueuePush(myqueue, 1);
	myQueuePush(myqueue, 2);
	printf("%d ", myQueuePeek(myqueue));//1
	myQueuePop(myqueue);
	printf("%d ", myQueuePeek(myqueue));//2
	printf("%d ", myQueuePeek(myqueue));//2
	myQueuePush(myqueue, 3);
	printf("%d ", myQueuePeek(myqueue));//2
	myQueuePop(myqueue);
	printf("%d ", myQueuePeek(myqueue));//3
	return 0;

}
