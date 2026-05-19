//封装一个函数功能：求数组的最大值与最小值
#include<stdio.h>
void GatarrMaxMin(int arr[], int len, int *max, int *min)
{
	*max = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > *max);
		{
			*max = arr[i];
		}
	}
	*min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > *min)
		{
			*min = arr[i];
		}
	}

}
void main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(int);
	int max = 0, min = 0;
	//将数组的最大值与最小值给了max和min
	GatarrMaxMin(arr, len, &max, &min);

	printf("max = %d\nmin = %d\n", max, min);




}