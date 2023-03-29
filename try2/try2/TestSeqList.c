#include"SeqList.h"

//void TestSeqList()
//{
//	SeqList g;
//	SeqListInit(&g);
//
//	SeqListPushBack(&g, 11);
//	SeqListPushBack(&g, 33);
//	SeqListPushBack(&g, 99);
//	SeqListPushBack(&g, 77);
//	SeqListPrint(&g);
//
//	SeqListPushFront(&g, 22);
//	SeqListPushFront(&g, 0);
//	SeqListPushFront(&g, 67);
//	SeqListPrint(&g);
//
//	SeqListPopFront(&g);
//	SeqListPrint(&g);
//
//	SeqListPopBack(&g);
//	SeqListPrint(&g);
//
//	SeqListInsert(&g, 2, 3);
//	SeqListInsert(&g, 4, 7);
//	SeqListPrint(&g);
//
//	SeqListErase(&g, 4);
//	SeqListErase(&g, 2);
//	SeqListPrint(&g);
//
//	int i=SeqListFind(&g, 11);
//	if (i != -1)
//	{
//		SeqListInsert(&g, i, 3);
//		SeqListPrint(&g);
//		SeqListErase(&g, i);
//		SeqListPrint(&g);
//	}
//
//	SeqListModify(&g, 0, 2);
//	SeqListPrint(&g);
//
//	SeqListDestory(&g);
//	SeqListPrint(&g);
//}

void manu()
{
	printf("*****************************************************************\n");
	printf("********0、退出                1、初始化  ***********************\n");
	printf("********2、头插    3、头删     4、指定位置插入  *****************\n");
	printf("********5、尾插    6、尾删     7、指定位置删除  *****************\n");
	printf("********8、查找                9、修改     **********************\n");
	printf("*****************************************************************\n");
}
void test()
{
	SeqList g1;
	SeqListInit(&g1);
	int option = 0;
	int x = 0;
	int pos = 0;

	do {
		manu();
		printf("请输入你的选择：");
		scanf("%d", &option);
		
		switch (option)
		{
		case 0:
			break;
		case 1:
			SeqListInit(&g1);
			break;
		case 2:
			printf("请输入要插入的数据,以-1结束：");
			do
			{
				scanf("%d", &x);
				if (x != -1)//这样才不会存入-1
				{
				     SeqListPushFront(&g1,x);
				}
			} while (x != -1);
			SeqListPrint(&g1);
			break;
		case 3:
			printf("请输入要插入的数据：");
			scanf("%d", &x);
			SeqListPopFront(&g1);
			SeqListPrint(&g1);
			break;
		case 4:
			printf("请输入指定的位置和数据：");
			scanf("%d %d",&pos, &x);
			SeqListInsert(&g1,pos,x);
			SeqListPrint(&g1);
			break;
		case 5:
			printf("请输入要插入的数据：");
			scanf("%d", &x);
			SeqListPushBack(&g1, x);
			SeqListPrint(&g1);
			break;
		case 6:
			SeqListPopBack(&g1);
			SeqListPrint(&g1);
			break;
		case 7:
			printf("请输入指定位置：");
			scanf("%d %d", &pos, &x);
			SeqListErase(&g1,pos);
			SeqListPrint(&g1);
			break;
		case 8:
			printf("请输入要查找的数据：");
			scanf("%d", &x);
			SeqListFind(&g1, x);
			SeqListPrint(&g1);
			break;
		case 9:
			printf("请输入指定位置和数据：");
			scanf("%d %d", &pos,&x);
			SeqListModify(&g1,pos, x);
			SeqListPrint(&g1);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (option != 0);
	SeqListDestory(&g1);
}


int main()
{
    //TestSeqList();
	test();
	return 0;
}