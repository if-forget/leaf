#include"SeList.h"

void test()
{
	SeqList* L = (SeqList*)malloc(sizeof(SeqList));
	SeqListInit(L);
	SeqListPushBack(L, 0);
	SeqListPushBack(L, 1);
	SeqListPushBack(L, 2);
	SeqListPrint(L);

	SeqListPopFront(L);
	SeqListPrint(L);

	SeqListPushFront(L, 11);
	SeqListPushFront(L, 22);
	SeqListPrint(L);

	SeqListPopBack(L);
	SeqListPrint(L);

	int pos=SeqListFind(L, 11);
	if (pos != -1)
	{
		SeqListInsert(L, pos, 9);
		SeqListPrint(L);
	}
	SeqListErase(L, 2);
	SeqListPrint(L);
}
//int main()
//{
//	test();
//
//
//	return 0;
//}