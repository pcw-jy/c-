/*

野指针

- 指针指向了未分配的空间或者指向了释放的内存以及没有权限访问的内存

野指针如何形成

1. 指针没有初始化
2. 指针指向的内存空间被释放了
3. 指针越界访问

*/

#include<stdio.h>
#include<stdlib.h>
int* aaa()
{
	int a = 10;
	int* p = &a;
	return p;
}
void main()
{
	int a = 10;
	int *p;//提示未引用（情况1）


	int* p1 = aaa();
	printf("asdcaf");//（把空间释放）
	printf("%d\n", *p1);//(情况2，空间已经被释放了)

	int b = 10;
	int* p2 = &b;
	int* p3 = p2 + 10;
	printf("%d\n", *p3);//(情况3，指针访问越界了)
}
