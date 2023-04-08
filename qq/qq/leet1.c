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
	//�����������ʼ����ʽ����������ʱֱ������2����ԭ����������

	ps->pa = NULL;
	ps->top = 0;//���Գ�ʼ��Ϊ0��-1
	//top=0,��ζ��topָ��ջ��Ԫ�ص���һ��
	//top=-1,��ʾtopָ��ջ��Ԫ��
	ps->capacity = 0;
}

//����
void DestoryStack(ST* ps)
{
	assert(ps);

	free(ps->pa);
	ps->pa = NULL;
	ps->capacity = 0;//��Ҫ������
	ps->top = 0;
}

//��ջ
void PushStack(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)//ÿ����ջ�����жϣ�ֻ�������ȵ����ٴ��ڣ��������top����capacity�Ļ������Ծ�ֱ����==�����ж���
	{
		int newcapacity = ps->capacity > 0 ? 2 * ps->capacity : 4;
		STDataType* temp = (STDataType*)realloc(ps->pa, sizeof(STDataType) * newcapacity);//�ǵ��������Ͳ�Ҫ�����
		if (temp == NULL)
		{
			printf("realloc fail\n");//perror("realloc:");
			exit(-1);
		}
		ps->pa = temp;
		ps->capacity = newcapacity;//��������
	}
	ps->pa[ps->top] = x;
	ps->top++;
}

//��ջ
void PopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps));// assert(ps->top> 0);

	ps->top--;
}

//ջ�����ݸ���
int SizeStack(ST* ps)
{
	assert(ps);

	return ps->top;
}

//��ȡջ��Ԫ��
STDataType TopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps)); //assert(ps->top>0);

	return ps->pa[ps->top - 1];//��Ϊ��ʼ��ʱtop=0��top-1�ű�ʾջ��
}

//ջ��״̬�Ƿ�Ϊ��
bool EmptyStack(ST* ps)
{
	assert(ps);
	return ps->top == 0;//�������ж��Ƿ�Ϊ0���ں���!EmptyStack���ж��п���֪����Ϊ0Ϊfalse,!falseΪture����ѭ��
}

typedef struct {
	ST s1;//��s1�̶�Ϊ������ʱ��ջ
	ST s2;//s2���ǳ�ջ��ȡ������Ԫ�ص�ջ
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	if (obj == NULL)
	{
		perror("malloc fail��");
		exit(-1);
	}
	InitStack(&obj->s1);
	InitStack(&obj->s2);
	return obj;
}

void myQueuePush(MyQueue* obj, int x) {
	if ((EmptyStack(&obj->s1) || EmptyStack(&obj->s1)) && EmptyStack(&obj->s1))
	{//����߼��жϵ���˼����ջ�������ݵ�ǰ���£�s1ջΪ�գ������
		while (SizeStack(&obj->s2) > 0)//����if���루s1Ϊ����s2��Ϊ�գ������Խ�s2�е����ݵ���s1
		{
			PushStack(&obj->s1, TopStack(&obj->s2));
			PopStack(&obj->s2);
		}

	}
	PushStack(&obj->s1, x);//s1��Ϊ��������ʱ��ջ��������
	//�����Ϊʲô��ֱ�Ӳ��룺�������ݣ���ջ����һջ��Ϊ�յ�ǰ���£������ǵ�ջΪ�Ƚ����ԭ������Ҫ�Ȱ����ݵ��뵽��һ��ջ���ٵ������ſ���������е�����������ͬ����Ȼ����һ��ʼû�н���������ݲ�����ǰ���£�s1�е�����˳����϶�����ʽ����ֱ�Ӳ���
	//�ܵĹ��ɾ��ǣ��������ݵ�ǰ���£�s1Ϊ�գ�s2���룬�������ݡ�s1��Ϊ�գ�ֱ����
	//�磺s1��1 2 3 4  ����Ϊ�գ� ֱ���� x
	//    s2��4 3 2 1  s1���գ��Ȱ����ݵ���s1��1 2 3 4 �ٲ���x
}

int myQueuePop(MyQueue* obj) {

	while (SizeStack(&obj->s1) >0)//s2��Ϊ�����ݵ�ջ�����ѭ����������˼��
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
	return TopStack(&obj->s2);//s2��Ϊ�������ݵ�ջ����ջ��Ԫ��ͬ���г��ӵ�Ԫ���Ǻ�
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
