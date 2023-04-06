#pragma once
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


