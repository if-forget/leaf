#include"SList.h"

void test()
{
	SL* pList = NULL;

	SLNodePushBack(&pList, 11);
	SLNodePrint(pList);//记得直接传指针，不用加&

	SLNodePushFront(&pList, 22);
	SLNodePushFront(&pList, 77);
	SLNodePushFront(&pList, 33);
	SLNodePrint(pList);

	SLNodePopBack(&pList);
	SLNodePrint(pList);

	SLNodePopFront(&pList);
	SLNodePrint(pList);

	SL*pos= SLNodeFind(pList, 22);
	if (pos != NULL)
	{
		SLNodeInsertBefore(&pList,pos,1);
		SLNodePrint(pList);
		SLNodeInsertAfter(pos,71);
		SLNodePrint(pList);
		SLNodeErase(&pList,pos);
		SLNodePrint(pList);
	}

	SLDestory(&pList);
	SLNodePrint(pList);
}
int main()
{
	test();

	return 0;
}