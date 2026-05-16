// calloc: 申请内存空间，并往空间内存放数据(初始化)
#include<stdio.h>
#include<stdlib.h>
// calloc在malloc的基础上多了一个初始化操作，系统会自动默认为0
void main()
{
	int* p = (int*)calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}


}
