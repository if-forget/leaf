#include"Queue.h"

void InitQueue(Queue* pq)
{
	assert(pq);

	pq->head = NULL;
	pq->tail = NULL;
}

void DestoryQueue(Queue* pq)
{
	assert(pq);

	
	while (pq->head!= NULL)
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
void PushQueue(Queue* pq,QDataType x)
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

	if (pq->head == NULL)//���׺��ԣ��������Ѿ���ɾ�꣬free(pq->head)head=NULL������tail��ָ��ԭ����free�Ŀռ䣬�������tail���д�������һ��Ұָ��
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

	int size = 0;
	QNode* cur = pq->head;
	while (cur!= NULL)//ע�ⲻ��!=pq->tail,�������ټ���һ��
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