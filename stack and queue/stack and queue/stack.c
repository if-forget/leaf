#include"stack.h"
//��ʼ��
void InitStack(ST* ps)
{
	//ps->pa = (STDataType*)malloc(sizeof(STDataType)*4);
	//ps->top = 0;
	//ps->capacity = 4;
	//�����������ʼ����ʽ����������ʱֱ������2����ԭ����������

	ps->pa = NULL;
	ps->top = 0;//���Գ�ʼ��Ϊ0��-1
	//top=0,��ζ��topָ��ջ��Ԫ�ص���һ��
	//top=-1,��ʾtopָ��ջ��Ԫ��
	ps->capacity = 0;
}

//����
void DestoryStack(ST* ps)
{
	assert(ps);

	free(ps->pa);
	ps->pa = NULL;
	ps->capacity = 0;//��Ҫ������
	ps->top = 0;
}

//��ջ
void PushStack(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)//ÿ����ջ�����жϣ�ֻ�������ȵ����ٴ��ڣ��������top����capacity�Ļ������Ծ�ֱ����==�����ж���
	{
		int newcapacity = ps->capacity>0?2 * ps->capacity:4;
		STDataType* temp = (STDataType*)realloc(ps->pa, sizeof(STDataType)*newcapacity);//�ǵ��������Ͳ�Ҫ�����
		if (temp == NULL)
		{
			printf("realloc fail\n");//perror("realloc:");
			exit(-1);
		}
		ps->pa = temp;
		ps->capacity = newcapacity;//��������
	}
		ps->pa[ps->top] = x;
		ps->top++;
}

//��ջ
void PopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps));// assert(ps->top> 0);

	ps->top--;
}

//ջ�����ݸ���
int SizeStack(ST* ps)
{
	assert(ps);

	return ps->top;
}

//��ȡջ��Ԫ��
STDataType TopStack(ST* ps)
{
	assert(ps);
	assert(!EmptyStack(ps)); //assert(ps->top>0);

	return ps->pa[ps->top-1];//��Ϊ��ʼ��ʱtop=0��top-1�ű�ʾջ��
}

//ջ��״̬�Ƿ�Ϊ��
bool EmptyStack(ST* ps)
{
	assert(ps);
	return ps->top == 0;//�������ж��Ƿ�Ϊ0���ں���!EmptyStack���ж��п���֪����Ϊ0Ϊfalse,!falseΪture����ѭ��
}
