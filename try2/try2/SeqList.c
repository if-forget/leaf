#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	//��ֱ�ӵķ�ʽ��ֱ�ӽ�����������Ϊ�յ�״̬
	ps->pa = NULL;
	ps->size = 0;
	ps->capacity = 0;

	//����һ�ַ�ʽ����Ϊ������ռ�
	//SeqList* temp = (SeqList*)malloc(sizeof(SLDatatype));
	//if (temp== NULL)
	//{
	//	printf("����ռ�ʧ��\n");
	//	exit(-1);//ֱ���˳��˳���
	//}
	//ps->pa = temp;
	//ps->size = 0;
	//ps->capacity = 4;
}

void SeqListCheckcapacity(SeqList* ps)
{
	assert(ps);
//����������������δ��ɶҲ���ɣ��������䣬Ϊ��֤���ݿռ��ʵ��ʹ�����󣬻���˵���ⲻ��Ҫ�ռ��˷ѣ�ѡ������������2���ķ�ʽȥ����ռ�
	//�������ǲ��õ�һ�ֳ�ʼ���ķ�ʽ��
	int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	//������˼�������ǰ����Ϊ0������Ϊ������4��SLDataType�Ϳռ��С�����Ǵ���0��������������2����������
	//����һ���µ���������Ϊ��ʼ����capacity=0��������Ҫ����������2������ʱ��0���޷�ʵ�ֵ�
	if (ps->size <= ps->capacity)
	{
		SLDataType* temp = (SLDataType)realloc(ps->pa, sizeof(SLDataType)*newcapacity);//������ʹ��realloc����Ϊ����������ǵ�����Ԫ����һƬ�����Ŀռ����������ͷſռ�ʱ����Ϊ��һƬ�����Ŀռ䣬����ֻҪfreeһ�μ���

		if (temp == NULL)
		{
			printf("����ռ�ʧ��\n");
			exit(-1);
		}
		ps->pa = temp;
		ps->capacity = newcapacity;//�����������
	}
}

//β��
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
//���ǲ���������������䣬δ����ն�ֱ�Ӳ���
	SeqListCheckcapacity(ps);
//������������⣬ֻҪ�������ͺã�
//�ڸñ�Ϊ��ʱ��ps->pa[ps->size]�൱��ָ��pa[0],�Ǿ��Ǵ�ͷ��ʼ����
	ps->pa[ps->size ] = x;//ps->size.����������ĩβ���루�±��0��ʼ����size-1Ϊ���һ��Ԫ���±꣩
	ps->size++;

	//SeqListInsert(ps, ps->size, x);
}

//βɾ
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
//����ɾ�����������Ϊ�գ�����ɾ��ʧ�ܣ����������ɾ�����ݣ�ֻҪ�����ݾ��У�
//��Ϊ�������һ��ֻ��ɾ��һ�����ݣ����Բ��õ��ģ�һֱɾ�������⣨ÿ�ζ����ж��Ƿ�Ϊ�գ�Ҳ�����Ƿ���ɾ������û�������ˣ�
	if (ps->size == 0)
	{
		printf("ɾ��ʧ�ܣ����������ݿ�ɾ\n");
		return;
	}

//������ĩβ��ʼɾ��������ֱ��ָ�����һ��Ԫ�أ���Ԫ���±�Ϊsize-1��
	//ps->pa[ps->size - 1] = 0;//Ϊ�˱�����������ݣ�����ʵҲ�и�λ�ñ�����Ϊ0�����������Ҳ���Բ����ⲽ,������Ǵ�ŵ���double�����������ͣ�ҲҪ������Ӧ�ĸı�
	ps->size--;

	//SeqListErase(ps,ps->size-1);
}

//ͷ��
void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps);
//�ڲ�������֮ǰ��Ҫ�ǵ������ļ��
	SeqListCheckcapacity(ps);
//���ǲ����������Ϊ��ֱ�Ӳ��룬��Ϊ�գ������ݴ�ĩβ��ʼ���κ��ƣ�ֱ���ճ���һ��Ԫ�ص�λ�ã������Ԫ��x�±�Ϊ0
	for (int end = ps->size; end >= 1; end--)
	{
		ps->pa[end] = ps->pa[end - 1];//ѭ��ֱ��ps->pa[1]=ps->pa[0];˵���Ѿ���ԭ�е�size-1�������Ѿ�ȫ����������Ų��
	}

	ps->pa[0] = x;
	ps->size++;

	//SeqListInsert(ps, 0, x);
}

//ͷɾ
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
//����ɾ��������ñ�Ϊ�գ�����ɾ��ʧ�ܣ���Ϊ�գ������ݴ���������ǰ�ƣ�ɾ���±�Ϊ0��Ԫ�أ��������Ԫ����ǰ����
	if (ps->size == 0)
	{
		printf("ɾ��ʧ�ܣ����������ݿ�ɾ\n");
		return;
	}
	
	for (int start = 0; start <= ps->size - 2; start++)
	{
		ps->pa[start] = ps->pa[start + 1];//ѭ��ֱ��ps->pa[ps->size-2]=ps->pa[ps->size-1];�����Ͱ�ɾ����size-1������ǰŲ����ֱ�������һ���±�Ϊsize-1��Ԫ�ظ���pa[ps->size-2]
	}

	ps->pa[ps->size - 1] = 0;
	ps->size--;

	//SeqListErase(ps, 0);�����������ʵ��
}

void SeqListInsert(SeqList* ps, int pos, SLDataType x)
{
	assert(ps);

	SeqListCheckcapacity(ps);
//���ǲ����������������λ���±�Ϊpos�����ǲ���ķ�ʽ��ǰ���루��ԭ�±�Ϊpos��Ԫ��������
	//pos��Ҫ�������0��С�ڵ���size����Ϊ˳������ŵ������������ģ���Ϊ�Ƕ�̬˳������ﲻ���ڿռ������޷����������������ݿ��Ա���
	if (pos < 0 || pos >= ps->size + 1)
	{
		printf("λ��ѡ����󣬲���ʧ��\n");
		return;
	}

	for (int end = ps->size; end >= pos+1 ; end--)//��β��ʱ��pos=ps->size,��ʱend<pos+1
	{
		ps->pa[end] = ps->pa[end - 1];
	}
	
	ps->pa[pos] = x;//β�����pos=ps->size����ֱ�����������ѭ��
	ps->size++; 
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);

//����ɾ���������Ϊ�գ�����ɾ��ʧ�ܣ�ɾ��ָ���±�Ϊpos��Ԫ�أ����ǽ�Ԫ�ش�������������ǰŲ��
//posӦ�������0С�ڵ���size-1������Щλ���ϲ���Ԫ�ؿ��Խ���ɾ������
	if (pos == ps->size)
	{
		printf("��Ϊ�գ�ɾ��ʧ��\n");
		return;
	}

	if (pos < 0 || pos >= ps->size)
	{
		printf("λ��ѡ�����ɾ��ʧ��\n");
		return;
	}

	while (pos <= ps->size - 2)
	{
		ps->pa[pos] = ps->pa[pos + 1];
		pos++;//�������ǣ����������ǲ���дforѭ�������һ�㣿
	}

	ps->size--;
}

//����
void SeqListDestory(SeqList* ps)
{
	free(ps->pa);//��Ϊps->paָ�������realloc���ٵ�һƬ�����Ŀռ䣬ֻҪfree�ͷ�һ�μ���
	ps->pa = NULL;
	ps->capacity = 0;
	ps->size = 0;
	
}

int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
//����Ѱ����������±�Ϊ0��λ�ÿ�ʼѰ�ң�����˳����ҵ���ͬԪ���򷵻ض�Ӧ�±�
	//����ñ�Ϊ�ջ�û����ͬԪ�أ���Ѱ��ʧ�ܣ�
	if (ps->size == 0)
	{
		printf("��Ϊ�գ�����ʧ��\n");
		return -1;
	}

	for (int count = 0; count <= ps->pa[ps->size - 1]; count++)
	{
		if (ps->pa[count] == x)
		{
			printf("�ҵ��ˣ��±�Ϊ��%d\n", count);
			return count;
		}
	}
	printf("û�ҵ����ñ���������������\n");
	return -1;
}

void SeqListModify(SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	if (ps->size == 0||pos >= ps->size||pos<0)
	{
		printf("ѡ��λ�������޸�ʧ��\n");
	}
	ps->pa[pos] = x;
}

//��ӡ
void SeqListPrint(SeqList* ps)
{
	assert(ps);

	for (int num = 0; num <= ps->size - 1; num++)
	{
		printf("%d ", ps->pa[num]);
	}
	printf("\n");//�´��ٴ�ӡ�Żỻ��
}