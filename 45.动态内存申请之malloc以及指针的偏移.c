/*

内存分配

- malloc: 申请内存空间，内存连续（在堆区）
- calloc: 申请内存空间，并往空间内存放数据(初始化)
- realloc: 修改申请内存空间的大小
- free: 释放内存空间
以上四个函数头文件在stdlib.h

*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	//参数：我们所需要申请的内存区域大小，单位是字节
	malloc(100);// 申请100字节的空间
	int *p = malloc(sizeof(int) * 7);// 申请7个int类型所需的空间并赋值给p
	//给内存空间进行初始化
	for (int i = 0; i < 10; i++)
	{
		//指针的偏移
		*(p + i) = i;//每次循环偏移四个字节

	}
	//但以上初始化是40个字节，而前面申请了28字节，会报错


}