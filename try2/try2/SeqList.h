#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h> 
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* pa;//指针指向的数据是什么类型，就用什么类型定义
	int size;
	int capacity;
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDataType x);
void SeqListPopBack(SeqList* ps);
void SeqListCheckcapacity(SeqList* ps);
void SeqListPushFront(SeqList* ps, SLDataType x);
void SeqListPopFront(SeqList* ps);
void SeqListInsert(SeqList* ps, int pos, SLDataType x);
void SeqListErase(SeqList* ps, int pos);
void SeqListDestory(SeqList* ps);
int SeqListFind(SeqList* ps, SLDataType x);
void SeqListModify(SeqList* ps, int pos, SLDataType x);

