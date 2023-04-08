//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<assert.h>
//
//typedef int STDataType;     //重定义数据类型
//typedef struct Stack
//{
//	STDataType* data;
//	int top;                //栈顶
//	int capacity;           //容量
//}Stack;
// void StackInit(Stack* ps);                         // 1.初始化栈 
//
// void StackPush(Stack* ps, STDataType x);           // 2.入栈 
//
// void StackPop(Stack* ps);                          // 3.出栈 
//
// STDataType StackTop(Stack* ps);                    // 4.获取栈顶元素 
//
// int StackSize(Stack* ps);                          // 5.获取栈中有效元素个数 
//
// bool StackEmpty(Stack* ps);                        // 6.检测栈是否为空
//
// void StackDestroy(Stack* ps);                      // 7.销毁栈 
//
//void StackInit(Stack* ps)     // 1.初始化栈 
//{
//	assert(ps);
//
//	ps->data = NULL;
//	ps->capacity = 0;
//	ps->top = 0;     //初始值是－1或0都可以，但是初始值不同，后期的操作不同
//
//}
//
//void StackPush(Stack* ps, STDataType x)     // 2.入栈 
//{
//	assert(ps);
//
//	if (ps->capacity == ps->top)     //扩容
//	{
//		int newcapacity = ps->capacity > 0 ? 2 * ps->capacity : 4;     //考虑容量为0的情况
//		STDataType* tmp = (STDataType*)realloc(ps->data, sizeof(STDataType) * newcapacity);
//		if (tmp == NULL)     //考虑扩容失败
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
//void StackPop(Stack* ps)     // 3.出栈
//{
//	assert(ps);
//	assert(!StackEmpty(ps));     //考虑栈空
//
//	ps->top--;
//}
//
//STDataType StackTop(Stack* ps)     // 4.获取栈顶元素 
//{
//	assert(ps);
//	assert(!StackEmpty(ps));     //考虑栈空
//
//	return ps->data[ps->top - 1];
//}
//
//int StackSize(Stack* ps)     // 5.获取栈中有效元素个数 
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//bool StackEmpty(Stack* ps)         // 6.检测栈是否为空
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//void StackDestroy(Stack* ps)     // 7.销毁栈 
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
//	Stack stpush;     //使用两个栈模拟实现队列
//	Stack stpop;      //一个栈入数据，另一个出数据
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
//	if (StackEmpty(&obj->stpop))     //判断出数据栈是否为空
//	{
//		while (!StackEmpty(&obj->stpush))     //将入数据栈的数据压入出数据栈
//		{
//			StackPush(&obj->stpop, StackTop(&obj->stpush));
//			StackPop(&obj->stpush);
//		}
//	}
//
//	int ret = StackTop(&obj->stpop);
//	StackPop(&obj->stpop);     //出数据
//	return ret;
//}
//
//int myQueuePeek(MyQueue* obj)
//{
//	if (StackEmpty(&obj->stpop))     //判断出数据栈是否为空
//	{
//		while (!StackEmpty(&obj->stpush))     //将入数据栈的数据压入出数据栈
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