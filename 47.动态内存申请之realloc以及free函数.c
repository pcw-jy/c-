//realloc：修改修改申请内存空间的大小
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* p = (int*)calloc(10, sizeof(int));
	//扩容
	int* pl = (int*)realloc(p, 10 * sizeof(int)); //将p扩容10个int类型的数据
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", *(p + i));
	}
	free(pl);

}