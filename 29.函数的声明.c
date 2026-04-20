#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算器加法
//函数功能 —— 加法
//封装：两个整数相加

void ABC();

int Add(int num1, int num2) //形式上参考的数据，没有具体实际的值
{
	return num1 + num2;
}
void main()
{
	//Add(10, 20); // 10和20是实参 实参是有实际参考的数据
	//int d = Add(10, 20);
	//printf("%d\n", d);
	//也可以手动输入需要计算的数
	int a, b;
	scanf("%d%d", &a, &b);
	int d = Add(a, b);
	printf("d=%d\n", d);

	//若要循环
	//
	//  while (1) 
	//  {
	//	  scanf("%d%d", &a, &b);
	//	  int d = Add(a, b);
	//	  printf("d=%d\n", d);
	//  }
	// 这样能实现计算机式的循环计算
	ABC(); //定义函数在主函数后面，编译时显示ABC未定义,若想在后面定义，需要在main函数前定义

}

void ABC()
{
	printf("ABC\n");
}