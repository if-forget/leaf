//#include<stdio.h>
//#include<stdlib.h>


//
//void rotate(int* nums, int numsSize, int k) 
//{
//	int shu[] = { 0 };
//}
//void reverse(int* nums, int left, int right)
//{
//
//	while (left < right)
//	{
//		int temp = 0;
//		temp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = temp ;
//		left++;
//		right--;
//
//		//for (int i = 0; i <= 8; i++)
//		//{
//		//	printf("%d ", nums[i]);
//		//}
//		//printf("\n");
//	}
//	//printf("\n");
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//	if (k >= numsSize)
//	{
//		k %= numsSize;
//	}
//	
//	
//	reverse(nums, 0, numsSize-k-1);
//	reverse(nums, numsSize - k, numsSize - 1);
//	reverse(nums, 0, numsSize-1);
//}
//
//int  main()
//{
//	int nums[9] = { 0,1,2,3,4,5,6,7,8 };
//	int numsSize = 9;
//	rotate(nums, numsSize, 3);
//	for (int i = 0; i <= 8; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	printf("\n");
//	return 0;
//}

//void rotate(int* nums, int numsSize, int k)
//{
//	int left = numsSize - k - 1;
//	int right = numsSize - k;
//
//	for (int i = 0; i <= left-1; i++)
//	{
//		int temp = 0;
//		temp = nums[i];
//		nums[i] = nums[left];
//		nums[left] = temp;
//		left--;
//
//		for (int k = 0; k <= 6; k++)
//		{
//			printf("%d ", nums[k]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for (int j = 0; j<= right - 1; j++)
//	{
//		int temp = 0;
//		temp = nums[right];
//		nums[right] = nums[numsSize-1];
//		nums[numsSize-1] = temp;
//		
//		for (int k = 0; k <= 6; k++)
//		{
//			printf("%d ", nums[k]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int nums[7] = { 1,2,3,4,5,6,7 };
//	rotate(nums, 7, 3);
//	printf("\n");
//	for (int k = 0; k <= 6; k++)
//	{
//		printf("%d ", nums[k]);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int nums[9] = { 0,3,8,1,4,7,2,6,9 };
//	int x = 0;
//	for (int j = 0; j <= 8; j++)
//	{
//		x ^= nums[j];
//		printf("%d ", x);
//	}
//	printf("\n%d\n", x);
//
//	for (int i = 0; i <= 9; i++)
//	{
//		x ^= i;
//		printf("%d ", x);
//	}
//
//	printf("\n%d", x);
//	return 0;
//}
//int missingNumber(int* nums, int numsSize)
//{
//    int temp = 0;
//    for (int i = 0; i < numsSize - 1; i++)//ȷ������������Ԫ�ظ���-1�ˣ��������һ��Ԫ�أ�����Ԫ�ض�����д�С�Ƚϵ��жϣ�ǰ��Ԫ�ض��ź������һ��ֱ�Ӳ��뼴�ɣ�
//    {
//        for (int j = 0; j <numsSize - i-1; j++)//ÿһ�˶���Ѹ��������ȷ��������ÿһ����ܺõĴ������񣨼���������ȷ�����λ�ã�ȷ��λ�ã�����ÿ��Ϊһ�����Ĵ�����⣬���ǿ��ԺܺõĶ��ã�������Ҳ�ǵݼ����Ƶ�
//        {
//            if (nums[j] > nums[j + 1])
//            {
//                temp = nums[j];
//                nums[j] = nums[j + 1];
//                nums[j + 1] = temp;
//            }
//    //Ҫ�ǵ�ð�������ԭ����ǣ�ÿ���������Ҳ��ص���Ԫ�رȽϴ�С��
//    //һ�˱Ƚ���������ȷ����������������ұߣ����������
//   
//        }
//    }
//    for (int k = 0; k <= numsSize - 1; k++)
//    {
//        if (nums[k+1] - nums[k] != 1)
//        {
//            return nums[k] + 1;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int shu[9] = { 0,4,7,2,5,8,3,1,6 };
//    int  numsSize = sizeof(shu) / sizeof(shu[0]);
//    int i = missingNumber(shu, numsSize);
//    if (i != -1)
//    {
//        printf("%d",i);
//    }
//    return 0;
//}
