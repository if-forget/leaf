#include"SeList.h"

void SeqListInit(SeqList* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListDestroy(SeqList* ps)
{
	free(ps->a);
	ps->a = NULL;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (int i = 0; i <= ps->size - 1; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListCheckcapacity(SeqList* ps)
{
	if (ps->size >= ps->capacity)
	{
		int newcapacity = ps->capacity > 0 ? 2 * ps->capacity : 4;
		SLDateType* pos = (SLDateType*)realloc(ps->a, sizeof(SLDateType) * newcapacity);
		if (pos == NULL)
		{
			printf("����ռ�ʧ��\n");
			exit(-1);
		}
		ps->a = pos;
		ps->capacity = newcapacity;
	}

	
}
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	SeqListCheckcapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	SeqListCheckcapacity(ps);
	for (int i=ps->size; i>=1; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	for (int i = 0; i <= ps->size - 2; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
void SeqListPopBack(SeqList* ps)
{
	if (ps->size == 0)
	{
		printf("û�����ݿ�ɾ\n");
		return;
	}
	ps->a[ps->size - 1] = 0;
	ps->size--;
}

// ˳������
int SeqListFind(SeqList* ps, SLDateType x)
{
	for (int i = 0; i <= ps->size - 1; i++)
	{
		if (ps->a[i] == x)
		{
			printf("�ҵ��ˣ��±�Ϊ��%d\n", i);
			return i;
		}

	}
	return -1;
}
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	SeqListCheckcapacity(ps);
	for (int i = ps->size; i>= pos + 1; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, int pos)
{
	if (ps->size == 0)
	{
		printf("û�����ݿ�ɾ\n");
		return;
	}
	if (pos < 0 && pos >= ps->size)
	{
		printf("λ��ѡ������,ɾ��ʧ��\n");
		return;
	}
	while (pos <= ps->size - 2)
	{
		ps->a[pos] = ps->a[pos + 1];
		pos++;
	}
	ps->size--;
}