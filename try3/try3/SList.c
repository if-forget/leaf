#include"SList.h"

SL* BugSLNode(SLDataType x)
{
	SL* newNode = (SL*)malloc(sizeof(SL));
	if (newNode == NULL)
	{
		printf("申请空间失败\n");
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
		printf("表为空，删除失败\n");
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
		printf("表为空，删除失败\n");
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
		*pplist = newNode;//这个容易忘记
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
		printf("位置错误，插入失败\n");
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
		printf("位置有误，删除失败\n");
		return;
	}
	if (*pplist == NULL)
	{
		printf("表为空，删除失败\n");
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
		printf("表为空，查询失败\n");
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
	printf("没找到\n");
	return NULL;
}

void SLDestory(SL** pplist)
{
	//从头开始free
	SL* start = *pplist;
	while ((*pplist) != NULL)
	{
		(*pplist) = (*pplist)->next;
		free(start);
		start = *pplist;
	}
}
void SLNodePrint(SL* plist)//只是打印，不改变现有值，不用二级指针做形参
{

	SL* cur = plist;
	while (cur!= NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");//最后一个元素next指向NULL；
}