#include"stack.h"
#include"Queue.h"

void TestStack()
{
	ST L;
	InitStack(&L);
	printf("%d\n", SizeStack(&L));
	PushStack(&L, 1);
	PopStack(&L);
	PushStack(&L, 2);
	PushStack(&L, 3);
	PushStack(&L, 4);
	
	while(!EmptyStack(&L))
	{
		printf("%d ", TopStack(&L));
		PopStack(&L);//后进先出（相对栈而底言）不能遍历
	}
	printf("\n");

}

void TestQueue()
{
	Queue q;
	InitQueue(&q);
	PushQueue(&q, 1);
	PushQueue(&q, 2);
	PushQueue(&q, 3);
	PushQueue(&q, 4);
	PushQueue(&q, 5);
	PushQueue(&q, 6);
	
	while (!EmptyQueue(&q))
	{
		printf("%d ", FrontQueue(&q));
		PopQueue(&q);
	}
	DestoryQueue(&q);
	
}
int main()
{
	TestStack();
	//TestQueue();
	return 0;
}