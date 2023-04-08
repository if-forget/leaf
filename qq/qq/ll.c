//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<assert.h>
//
//typedef int STDataType;     //�ض�����������
//typedef struct Stack
//{
//	STDataType* data;
//	int top;                //ջ��
//	int capacity;           //����
//}Stack;
// void StackInit(Stack* ps);                         // 1.��ʼ��ջ 
//
// void StackPush(Stack* ps, STDataType x);           // 2.��ջ 
//
// void StackPop(Stack* ps);                          // 3.��ջ 
//
// STDataType StackTop(Stack* ps);                    // 4.��ȡջ��Ԫ�� 
//
// int StackSize(Stack* ps);                          // 5.��ȡջ����ЧԪ�ظ��� 
//
// bool StackEmpty(Stack* ps);                        // 6.���ջ�Ƿ�Ϊ��
//
// void StackDestroy(Stack* ps);                      // 7.����ջ 
//
//void StackInit(Stack* ps)     // 1.��ʼ��ջ 
//{
//	assert(ps);
//
//	ps->data = NULL;
//	ps->capacity = 0;
//	ps->top = 0;     //��ʼֵ�ǣ�1��0�����ԣ����ǳ�ʼֵ��ͬ�����ڵĲ�����ͬ
//
//}
//
//void StackPush(Stack* ps, STDataType x)     // 2.��ջ 
//{
//	assert(ps);
//
//	if (ps->capacity == ps->top)     //����
//	{
//		int newcapacity = ps->capacity > 0 ? 2 * ps->capacity : 4;     //��������Ϊ0�����
//		STDataType* tmp = (STDataType*)realloc(ps->data, sizeof(STDataType) * newcapacity);
//		if (tmp == NULL)     //��������ʧ��
//		{
//			perror("realloc:");
//			return;
//		}
//		ps->data = tmp;
//		ps->capacity = newcapacity;
//	}
//
//	ps->data[ps->top] = x;
//	ps->top++;
//}
//
//void StackPop(Stack* ps)     // 3.��ջ
//{
//	assert(ps);
//	assert(!StackEmpty(ps));     //����ջ��
//
//	ps->top--;
//}
//
//STDataType StackTop(Stack* ps)     // 4.��ȡջ��Ԫ�� 
//{
//	assert(ps);
//	assert(!StackEmpty(ps));     //����ջ��
//
//	return ps->data[ps->top - 1];
//}
//
//int StackSize(Stack* ps)     // 5.��ȡջ����ЧԪ�ظ��� 
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//bool StackEmpty(Stack* ps)         // 6.���ջ�Ƿ�Ϊ��
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//void StackDestroy(Stack* ps)     // 7.����ջ 
//{
//	assert(ps);
//
//	free(ps->data);
//	ps->data = NULL;
//	ps->capacity = 0;
//	ps->top = 0;
//}
//
//typedef struct
//{
//	Stack stpush;     //ʹ������ջģ��ʵ�ֶ���
//	Stack stpop;      //һ��ջ�����ݣ���һ��������
//} MyQueue;
//
//
//MyQueue* myQueueCreate()
//{
//	MyQueue* myQueue = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&myQueue->stpush);
//	StackInit(&myQueue->stpop);
//	return myQueue;
//}
//
//void myQueuePush(MyQueue* obj, int x)
//{
//	StackPush(&obj->stpush, x);
//}
//
//int myQueuePop(MyQueue* obj)
//{
//	if (StackEmpty(&obj->stpop))     //�жϳ�����ջ�Ƿ�Ϊ��
//	{
//		while (!StackEmpty(&obj->stpush))     //��������ջ������ѹ�������ջ
//		{
//			StackPush(&obj->stpop, StackTop(&obj->stpush));
//			StackPop(&obj->stpush);
//		}
//	}
//
//	int ret = StackTop(&obj->stpop);
//	StackPop(&obj->stpop);     //������
//	return ret;
//}
//
//int myQueuePeek(MyQueue* obj)
//{
//	if (StackEmpty(&obj->stpop))     //�жϳ�����ջ�Ƿ�Ϊ��
//	{
//		while (!StackEmpty(&obj->stpush))     //��������ջ������ѹ�������ջ
//		{
//			StackPush(&obj->stpop, StackTop(&obj->stpush));
//			StackPop(&obj->stpush);
//		}
//	}
//	return StackTop(&obj->stpop);
//}
//
//bool myQueueEmpty(MyQueue* obj)
//{
//	return StackEmpty(&obj->stpush) && StackEmpty(&obj->stpop);
//}
//
//void myQueueFree(MyQueue* obj)
//{
//	StackDestroy(&obj->stpush);
//	StackDestroy(&obj->stpop);
//	free(obj);
//}
//
//int main() {
//	MyQueue* myqueue = myQueueCreate();
//	myQueuePush(myqueue, 1);
//	myQueuePush(myqueue, 2);
//	printf("%d ", myQueuePeek(myqueue));//1
//	myQueuePop(myqueue);
//	printf("%d ", myQueuePeek(myqueue));//2
//	printf("%d ", myQueuePeek(myqueue));//2
//	myQueuePush(myqueue, 3);
//	printf("%d ", myQueuePeek(myqueue));//2
//	myQueuePop(myqueue);
//	printf("%d ", myQueuePeek(myqueue));//3
//	return 0;
//
//}
///**
// * Your MyQueue struct will be instantiated and called as such:
// * MyQueue* obj = myQueueCreate();
// * myQueuePush(obj, x);
//
// * int param_2 = myQueuePop(obj);
//
// * int param_3 = myQueuePeek(obj);
//
// * bool param_4 = myQueueEmpty(obj);
//
// * myQueueFree(obj);
//*/