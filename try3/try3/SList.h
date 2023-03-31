#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SL;


void SLNodePrint(SL* plist);
void SLNodePushBack(SL** pplist,SLDataType x);
void SLNodePushFront(SL** pplist,SLDataType x);
SL* BugSLNode(SLDataType x);
void SLNodePopBack(SL** pplist);
void SLNodePopFront(SL** pplist);
void SLNodeInsertBefore(SL** pplist, SL* pos, SLDataType x);
void SLNodeInsertAfter(SL* pos, SLDataType x);
void SLNodeErase(SL** pplist, SL*pos);
SL* SLNodeFind(SL* plist, SLDataType x);
void SLDestory(SL** plist);