#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int QDataType;

typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void InitQueue(Queue* pq);
void DestoryQueue(Queue* pq);
void PushQueue(Queue* pq, QDataType x);
void PopQueue(Queue* pq);
QDataType FrontQueue(Queue* pq);
QDataType BackQueue(Queue* pq);
int SizeQueue(Queue* pq);
bool EmptyQueue(Queue* pq);
void InitQueue(Queue* pq)
{
	assert(pq);

	pq->head = NULL;
	pq->tail = NULL;
}

void DestoryQueue(Queue* pq)
{
	assert(pq);


	while (pq->head != NULL)
	{
		QNode* headnext = pq->head->next;
		free(pq->head);
		pq->head = headnext;
	}

	pq->tail = NULL;
	pq->head = NULL;

	//QNode* cur = pq->head;
	//while (cur!= NULL)
	//{
	//	QNode* headnext = cur->next;
	//	free(cur);
	//	cur = headnext;
	//}

	//pq->tail = NULL;
	//pq->head = NULL;
}
void PushQueue(Queue* pq, QDataType x)
{
	assert(pq);

	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode == NULL)
	{
		printf("malloc fail\n");//perror("malloc:");
		exit(-1);
	}

	newNode->next = NULL;
	newNode->data = x;

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newNode;
	}
	else
	{

		pq->tail->next = newNode;
		pq->tail = pq->tail->next;//pq->tail=newNoe;
	}

}

void PopQueue(Queue* pq)
{
	assert(pq);
	assert(!EmptyQueue(pq)); //assert(pq->head != NULL);

	QNode* cur = pq->head->next;
	free(pq->head);
	pq->head = cur;

	if (pq->head == NULL)//容易忽略，当数据已经被删完，free(pq->head)head=NULL，但是tail仍指向原来被free的空间，如果不对tail进行处理，会变成一个野指针
	{
		pq->tail = NULL;
	}
}

QDataType FrontQueue(Queue* pq)
{
	assert(pq);
	assert(!EmptyQueue(pq)); //assert(pq->head != NULL);

	return pq->head->data;
}
QDataType BackQueue(Queue* pq)
{
	assert(pq);
	assert(!EmptyQueue(pq)); //assert(pq->tail != NULL);

	return pq->tail->data;
}
int SizeQueue(Queue* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	int size = 0;
	while (cur != NULL)//注意不是!=pq->tail,这样会少计数一个
	{
		size++;
		cur = cur->next;
	}
	return size;
}
bool EmptyQueue(Queue* pq)
{
	assert(pq);

	return pq->head == NULL;
}
typedef struct
{
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate()
{
	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
	if (obj == NULL)
	{
		perror("malloc fail：");
		exit(-1);
	}
	InitQueue(&obj->q1);
	InitQueue(&obj->q2);
	return obj;
}

void myStackPush(MyStack* obj, int x) {
	if (!EmptyQueue(&obj->q1))//当不为空时才会进入语句
	{
		PushQueue(&obj->q1,x);
	}
	else
	{
		PushQueue(&obj->q2, x);
	}
}

int myStackPop(MyStack* obj) {
	Queue* empty = &obj->q1; //创建指针接收队列，为后面假设并确定空队列提供方便
	Queue* nonempty = &obj->q2;
	if (!EmptyQueue(empty))
	{
		nonempty = &obj->q1;
		empty = &obj->q2;
	}
	while (SizeQueue(nonempty) > 1)
	{
		PushQueue(empty, FrontQueue(nonempty)); 
		PopQueue(nonempty);
	}
	int temp = FrontQueue(nonempty);
	PopQueue(nonempty);
	return temp;
}

int myStackTop(MyStack* obj) {
	if (!EmptyQueue(&obj->q1))
	{
		return BackQueue(&obj->q1);
	}
	else
	{
		return BackQueue(&obj->q2);
	}
}

bool myStackEmpty(MyStack* obj) {
	return EmptyQueue(&obj->q1)&&EmptyQueue(&obj->q2);//当两个队列为空时才为真，有一个队列不为空则为假
}

void myStackFree(MyStack* obj) {
	DestoryQueue(&obj->q1);//先销毁两个队列，注意不是直接free(&obj->q1),这是链表（数据不在连续的空间），需要调用Deatory函数去释放
	DestoryQueue(&obj->q2);
	free(obj);
}

//int main()
//{
//	MyStack*myStack= myStackCreate();
//	myStackPush(myStack, 1);
//	myStackPush(myStack, 2);
//	myStackPush(myStack, 3);
//	myStackPush(myStack, 4);
//	myStackPush(myStack, 5);
//	while (!myStackEmpty(myStack))//有一个队列不为空说明还有数据，！false可以进入循环
//	{
//		printf("%d ", myStackTop(myStack));
//		myStackPop(myStack);
//	}
//
//	return 0;
//
//}