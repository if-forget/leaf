#include"stack.h"
//初始化
void InitStack(ST* ps)
{
	//ps->pa = (STDataType*)malloc(sizeof(STDataType)*4);
	//ps->top = 0;
	//ps->capacity = 4;
	//如果是上述初始化方式，后面扩容时直接申请2倍的原有容量即可

	ps->pa = NULL;
	ps->top = 0;//可以初始化为0或-1
	//top=0,意味着top指向栈顶元素的下一个
	//top=-1,表示top指向栈顶元素
	ps->capacity = 0;
}

//销毁
void DestoryStack(ST* ps)
{
	assert(ps);

	free(ps->pa);
	ps->pa = NULL;
	ps->capacity = 0;//不要忘记了
	ps->top = 0;
}

//入栈
void PushStack(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)//每次入栈都会判断，只可能是先等于再大于，如果考虑top大于capacity的话，所以就直接用==条件判断了
	{
		int newcapacity = ps->capacity>0?2 * ps->capacity:4;
		STDataType* temp = (STDataType*)realloc(ps->pa, sizeof(STDataType)*newcapacity);//记得申请类型不要搞错了
		if (temp == NULL)
		{
			printf("realloc fail\n");//perror("realloc:");
			exit(-1);
		}
		ps->pa = temp;
		ps->capacity = newcapacity;//容易忘记
	}
		ps->pa[ps->top] = x;
		ps->top++;
}

//出栈
void PopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps));// assert(ps->top> 0);

	ps->top--;
}

//栈内数据个数
int SizeStack(ST* ps)
{
	assert(ps);

	return ps->top;
}

//获取栈顶元素
STDataType TopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps)); //assert(ps->top>0);

	return ps->pa[ps->top-1];//因为初始化时top=0，top-1才表示栈顶
}

//栈内状态是否为空
bool EmptyStack(ST* ps)
{
	assert(ps);
	return ps->top == 0;//这里是判断是否为0，在后面!EmptyStack的判断中可以知道不为0为false,!false为ture进入循环
}
