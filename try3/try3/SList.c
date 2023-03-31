#include"SList.h"

SL* BugSLNode(SLDataType x)
{
	SL* newNode = (SL*)malloc(sizeof(SL));
	if (newNode == NULL)
	{
		printf("����ռ�ʧ��\n");
		return NULL;
	}

	newNode->data = x;
	newNode->next = NULL;
	return newNode;

}
void SLNodePushBack(SL** pplist, SLDataType x)
{
   SL*newNode=BugSLNode(x);

	if (*pplist == NULL)
	{
		*pplist = newNode;
	}
	else
	{
		SL* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newNode;
	}
}
void SLNodePushFront(SL** pplist, SLDataType x)
{
	SL* newNode = BugSLNode(x);

	newNode->next = *pplist;
	*pplist = newNode;

}

void SLNodePopBack(SL** pplist)
{
	if (*pplist == NULL)
	{
		printf("��Ϊ�գ�ɾ��ʧ��\n");
		return;
	}
	else if((*pplist)->next==NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SL* prev = *pplist;
		SL* tail = *pplist;

		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		free(tail);
		tail = NULL;
		prev->next = NULL;
	}

}

void SLNodePopFront(SL** pplist)
{
	if (*pplist == NULL)
	{
		printf("��Ϊ�գ�ɾ��ʧ��\n");
		return;
	}
	
	SL* cur = (*pplist)->next;
	free(*pplist);
	*pplist = cur;
}

void SLNodeInsertBefore(SL** pplist, SL*pos, SLDataType x)
{
	SL* newNode = BugSLNode(x);

	if (pos == *pplist)
	{
		//newNode pos
		newNode->next = pos;
		*pplist = newNode;//�����������
	}
	else
	{
		SL* cur = *pplist;

		while (cur->next != pos)
		{
			cur = cur->next;
		}
		cur->next = newNode;
		newNode->next = pos;
	}
	
}

void SLNodeInsertAfter(SL* pos, SLDataType x)
{
	
	if (pos == NULL)
	{
		printf("λ�ô��󣬲���ʧ��\n");
		return;
	}

	SL* newNode = BugSLNode(x);
	newNode->next = pos->next;
	pos->next = newNode;

}
void SLNodeErase(SL** pplist, SL* pos)
{
	if (pos == NULL)
	{
		printf("λ������ɾ��ʧ��\n");
		return;
	}
	if (*pplist == NULL)
	{
		printf("��Ϊ�գ�ɾ��ʧ��\n");
		return;
	}
    if (pos == *pplist)
	{
		free(*pplist);
		*pplist = NULL;
		return;
	}
	
	SL* posprev = *pplist;
	while (posprev->next != pos)
	{
		posprev = posprev->next;
	}
	posprev->next = pos->next;
	free(pos);
	pos = NULL;

}

SL* SLNodeFind(SL* plist, SLDataType x)
{
	if (plist == NULL)
	{
		printf("��Ϊ�գ���ѯʧ��\n");
		return NULL;
	}
	else
	{
		SL* temp = plist;
		while (temp->data != x)
		{
			temp = temp->next;
		}
		return temp;
	}
	printf("û�ҵ�\n");
	return NULL;
}

void SLDestory(SL** pplist)
{
	//��ͷ��ʼfree
	SL* start = *pplist;
	while ((*pplist) != NULL)
	{
		(*pplist) = (*pplist)->next;
		free(start);
		start = *pplist;
	}
}
void SLNodePrint(SL* plist)//ֻ�Ǵ�ӡ�����ı�����ֵ�����ö���ָ�����β�
{

	SL* cur = plist;
	while (cur!= NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");//���һ��Ԫ��nextָ��NULL��
}