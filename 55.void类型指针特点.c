/*

void类型指针

- 特点: void没有任何类型，可以接受任意类型指针记录的内存地址
- void没有任何类型，可以接受任意类型指针记录的内存地址
- void类型的指针无法获取变量里面的数据，也不能进行加减乘除的任何运算
- 作用: 让代码更具通用性

*/
#include<stdio.h>
#include<stdlib.h>
void main()
{

	int a = 10;
	short b = 20;
	

	int* p = &a;
	short* p1 = &b;

	printf("%d\n", *p);//可以获取数据

	//指针进行初始化必须类型一致

	void* p3 = p1;//void没有任何类型，可以接受任意类型指针记录的内存地址
	printf("%d\n", *p3);//不能打印，报错了
	printf("%d\n", *p3 + 1); //也不能偏移

}