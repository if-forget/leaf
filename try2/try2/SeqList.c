#include"SeqList.h"

void SeqListInit(SeqList* ps)
{
	//最直接的方式是直接将所有数据置为空的状态
	ps->pa = NULL;
	ps->size = 0;
	ps->capacity = 0;

	//还有一种方式是先为其申请空间
	//SeqList* temp = (SeqList*)malloc(sizeof(SLDatatype));
	//if (temp== NULL)
	//{
	//	printf("申请空间失败\n");
	//	exit(-1);//直接退出了程序
	//}
	//ps->pa = temp;
	//ps->size = 0;
	//ps->capacity = 4;
}

void SeqListCheckcapacity(SeqList* ps)
{
	assert(ps);
//考虑容量检查情况：未满啥也不干，满了扩充，为保证扩容空间和实际使用相差不大，或是说避免不必要空间浪费，选择在现有容量2倍的方式去申请空间
	//这里我们采用第一种初始化的方式：
	int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
	//该行意思是如果当前容量为0，则先为其申请4个SLDataType型空间大小，若是大于0则按其现有容量的2倍进行扩增
	//定义一个新的容量（因为初始化的capacity=0，当我们要想其以自生2倍扩增时，0是无法实现的
	if (ps->size <= ps->capacity)
	{
		SLDataType* temp = (SLDataType)realloc(ps->pa, sizeof(SLDataType)*newcapacity);//在这里使用realloc，因为其可以让我们的数组元素在一片连续的空间里，而且最后释放空间时，因为是一片连续的空间，我们只要free一次即可

		if (temp == NULL)
		{
			printf("申请空间失败\n");
			exit(-1);
		}
		ps->pa = temp;
		ps->capacity = newcapacity;//这个容易忘记
	}
}

//尾插
void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
//考虑插入情况：已满扩充，未满或空都直接插入
	SeqListCheckcapacity(ps);
//解决了容量问题，只要往后插入就好，
//在该表为空时，ps->pa[ps->size]相当于指向pa[0],那就是从头开始插入
	ps->pa[ps->size ] = x;//ps->size.代表在数组末尾插入（下标从0开始数，size-1为最后一个元素下标）
	ps->size++;

	//SeqListInsert(ps, ps->size, x);
}

//尾删
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
//考虑删除情况：当表为空，数据删除失败，否则则可以删除数据（只要有数据就行）
//因为这个函数一次只能删除一个数据，所以不用担心，一直删除的问题（每次都会判断是否为空，也就是是否还能删除，有没有数据了）
	if (ps->size == 0)
	{
		printf("删除失败，表中无数据可删\n");
		return;
	}

//从数组末尾开始删除，所以直接指向最后一个元素，该元素下标为size-1；
	//ps->pa[ps->size - 1] = 0;//为了避免出现脏数据，但其实也有该位置本来就为0的情况，所以也可以不用这步,如果我们存放的是double或是其他类型，也要做出相应的改变
	ps->size--;

	//SeqListErase(ps,ps->size-1);
}

//头插
void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps);
//在插入数据之前都要记得容量的检查
	SeqListCheckcapacity(ps);
//考虑插入情况：表为空直接插入，不为空，将数据从末尾开始依次后移，直到空出第一个元素的位置（插入的元素x下标为0
	for (int end = ps->size; end >= 1; end--)
	{
		ps->pa[end] = ps->pa[end - 1];//循环直到ps->pa[1]=ps->pa[0];说明已经把原有的size-1个数据已经全部有序往后挪动
	}

	ps->pa[0] = x;
	ps->size++;

	//SeqListInsert(ps, 0, x);
}

//头删
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
//考虑删除情况：该表为空，数据删除失败，不为空，将数据从左到右依次前移（删除下标为0的元素，将后面的元素往前顶替
	if (ps->size == 0)
	{
		printf("删除失败，表中无数据可删\n");
		return;
	}
	
	for (int start = 0; start <= ps->size - 2; start++)
	{
		ps->pa[start] = ps->pa[start + 1];//循环直到ps->pa[ps->size-2]=ps->pa[ps->size-1];这样就把删除后size-1个数往前挪动，直到将最后一个下标为size-1的元素赋给pa[ps->size-2]
	}

	ps->pa[ps->size - 1] = 0;
	ps->size--;

	//SeqListErase(ps, 0);可用这个函数实现
}

void SeqListInsert(SeqList* ps, int pos, SLDataType x)
{
	assert(ps);

	SeqListCheckcapacity(ps);
//考虑插入情况：所给插入位置下标为pos。我们插入的方式往前插入（即原下标为pos的元素往后移
	//pos需要满足大于0且小于等于size，因为顺序表里存放的数据是连续的，因为是动态顺序表，这里不存在空间已满无法插入的情况（会扩容可以避免
	if (pos < 0 || pos >= ps->size + 1)
	{
		printf("位置选择错误，插入失败\n");
		return;
	}

	for (int end = ps->size; end >= pos+1 ; end--)//在尾插时，pos=ps->size,此时end<pos+1
	{
		ps->pa[end] = ps->pa[end - 1];
	}
	
	ps->pa[pos] = x;//尾插情况pos=ps->size可以直接跳出上面的循环
	ps->size++; 
}

void SeqListErase(SeqList* ps, int pos)
{
	assert(ps);

//考虑删除情况：表为空，数据删除失败，删除指定下标为pos的元素，我们将元素从左往右依次往前挪动
//pos应满足大于0小于等于size-1；在这些位置上才有元素可以进行删除操作
	if (pos == ps->size)
	{
		printf("表为空，删除失败\n");
		return;
	}

	if (pos < 0 || pos >= ps->size)
	{
		printf("位置选择错误，删除失败\n");
		return;
	}

	while (pos <= ps->size - 2)
	{
		ps->pa[pos] = ps->pa[pos + 1];
		pos++;//容易忘记，所以在想是不是写for循坏会更好一点？
	}

	ps->size--;
}

//销毁
void SeqListDestory(SeqList* ps)
{
	free(ps->pa);//因为ps->pa指向的是由realloc开辟的一片连续的空间，只要free释放一次即可
	ps->pa = NULL;
	ps->capacity = 0;
	ps->size = 0;
	
}

int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
//考虑寻找情况：从下标为0的位置开始寻找，遍历顺序表，找到相同元素则返回对应下标
	//如果该表为空或没有相同元素，则寻找失败，
	if (ps->size == 0)
	{
		printf("表为空，查找失败\n");
		return -1;
	}

	for (int count = 0; count <= ps->pa[ps->size - 1]; count++)
	{
		if (ps->pa[count] == x)
		{
			printf("找到了，下标为：%d\n", count);
			return count;
		}
	}
	printf("没找到，该表不存在这样的数据\n");
	return -1;
}

void SeqListModify(SeqList* ps, int pos, SLDataType x)
{
	assert(ps);
	if (ps->size == 0||pos >= ps->size||pos<0)
	{
		printf("选择位置有误，修改失败\n");
	}
	ps->pa[pos] = x;
}

//打印
void SeqListPrint(SeqList* ps)
{
	assert(ps);

	for (int num = 0; num <= ps->size - 1; num++)
	{
		printf("%d ", ps->pa[num]);
	}
	printf("\n");//下次再打印才会换行
}