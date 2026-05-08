/*

冒泡排序：是一种基于交换的内部比较类排序算法，属于稳定排序、原地排序。
通过逐趟对序列中相邻元素进行两两比较，若逆序则交换，使每一趟排序中
将当前未排序区间的极值元素逐步“上浮”至未排序区间的末尾，如同气泡上浮，故名冒泡排序。

*/
#include<stdio.h>
void main()
{

	int arr[] = { 10, 5, 23, 43, 17 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//第一轮
	for (int i = 0; i < len - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;


		}
	}
	
	//第二轮
	for (int i = 0; i < len - 2; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;


		}
	}
	//第三轮
	for (int i = 0; i < len - 3; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;


		}
	}
	//第四轮
	for (int i = 0; i < len - 4; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;


		}
	}
	//遍历排序后的数组
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
	//用循环嵌套来解决
	for (int j = 0; j < len - 1; j++)
	{
		for (int i = 0; i < len - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;


			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
