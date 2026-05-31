#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}

	};
	printf("%p\n",arr);
	printf("%p\n",&arr[0][0]);
	printf("%p\n", &arr + 1);//偏移24个字节，上面二维数组的长度

	//数组指针
	//定义一个数组指针， 指向大小为3的数组
	int (*p)[3] = arr;
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%d\n", *(*p + i));
		}
		p++;
	}
}