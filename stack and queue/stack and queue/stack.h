#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* pa;
	int top;
	int capacity;
}ST;

void InitStack(ST*ps);
void DestoryStack(ST* ps);
void PushStack(ST* ps, STDataType x);
void PopStack(ST* ps);
int SizeStack(ST* ps);
STDataType TopStack(ST* ps);
bool EmptyStack(ST* ps);


