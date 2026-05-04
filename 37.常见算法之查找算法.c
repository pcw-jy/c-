/*

二分查找：
1. 数组里面的元素是连续的
2. 每查找一次都会减少一半的查找范围

注意：
1. 如果每次查找的数据index比目标数据小的话，舍弃左边的 min=index+1
2. 如果每次查找的数据index比目标数据大的话，舍弃右边的 max=index-1
3. 如果min>max，那么查找的数据不在数组中

*/
#include<stdio.h>

int FindData(int Eample[], int len, int num)
{

	int min = 0;
	int max = 179;
	while (min <= max)
	{
		//每次折半的下标的数据
		int index = (min + max) / 2;
		if (Eample[index] > num)
		{
			max = index - 1;
		}
		else if (Eample[index] < num)
		{
			min = index + 1;
		}
		else
		{
			return index;
		}
	
	}
	return -1;
}

void main()
{
	int arr[] = { 9, 11, 36, 78, 101, 179, 201 };
	int len1 = sizeof(arr) / sizeof(int);
	int num = 179;
	int res = FindData(arr, len1, num);
	printf("%d\n", res);

}0