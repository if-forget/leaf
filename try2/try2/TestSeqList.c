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
	printf("********0���˳�                1����ʼ��  ***********************\n");
	printf("********2��ͷ��    3��ͷɾ     4��ָ��λ�ò���  *****************\n");
	printf("********5��β��    6��βɾ     7��ָ��λ��ɾ��  *****************\n");
	printf("********8������                9���޸�     **********************\n");
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
		printf("���������ѡ��");
		scanf("%d", &option);
		
		switch (option)
		{
		case 0:
			break;
		case 1:
			SeqListInit(&g1);
			break;
		case 2:
			printf("������Ҫ���������,��-1������");
			do
			{
				scanf("%d", &x);
				if (x != -1)//�����Ų������-1
				{
				     SeqListPushFront(&g1,x);
				}
			} while (x != -1);
			SeqListPrint(&g1);
			break;
		case 3:
			printf("������Ҫ��������ݣ�");
			scanf("%d", &x);
			SeqListPopFront(&g1);
			SeqListPrint(&g1);
			break;
		case 4:
			printf("������ָ����λ�ú����ݣ�");
			scanf("%d %d",&pos, &x);
			SeqListInsert(&g1,pos,x);
			SeqListPrint(&g1);
			break;
		case 5:
			printf("������Ҫ��������ݣ�");
			scanf("%d", &x);
			SeqListPushBack(&g1, x);
			SeqListPrint(&g1);
			break;
		case 6:
			SeqListPopBack(&g1);
			SeqListPrint(&g1);
			break;
		case 7:
			printf("������ָ��λ�ã�");
			scanf("%d %d", &pos, &x);
			SeqListErase(&g1,pos);
			SeqListPrint(&g1);
			break;
		case 8:
			printf("������Ҫ���ҵ����ݣ�");
			scanf("%d", &x);
			SeqListFind(&g1, x);
			SeqListPrint(&g1);
			break;
		case 9:
			printf("������ָ��λ�ú����ݣ�");
			scanf("%d %d", &pos,&x);
			SeqListModify(&g1,pos, x);
			SeqListPrint(&g1);
			break;
		default:
			printf("�����������������\n");
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