//封装一个功能：更改变量的值
#include<stdio.h>
void Swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;

}
void Swap1(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
void main()
{
	int a = 10;
	int b = 20;

	Swap(a, b);
	printf("a=%d b=%d\n", a, b);
	//发现a，b的值没有互换，原因如下：
	// Swap 函数里交换的只是形参  num1  和  num2  这两个局部副本变量，主函数里的  a  和  b  根本没被修改，所以交换失败。
	//通过指针可以成功
	Swap(&a, &b);
	printf("a=%d b=%d", a, b);
	//Swap是值传递
	//Swap1是址传递
}