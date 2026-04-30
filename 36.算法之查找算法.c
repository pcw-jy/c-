/*

	24 15 16 86 44 85 35
	1.遍历数组，做判断
	2.


*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//查找数据
int FindDate(int Eampie[], int len, int num)
{

	for (int i = 0; i < len; i++)
	{

		if (Eampie[i] == num)
		{
			return i;
		}

	}
	return -1;
}
void main()
{	
	int num1;
	int arr[] = { 24, 15, 16, 86, 44, 85, 35 };
	int len1 = sizeof(arr) / sizeof(len1);
	printf("请输入您查找的数字：");
	scanf("%d", &num1);
	int index = FindDate(arr, len1, num1);
	printf("位置为%d\n", index);
}
