#include<stdio.h>
#include<stdlib.h>
void Swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void Swap1(void* p1, void* p2, int len)
{

	char* num1 = (char*)p1;
	char* num2 = (char*)p2;
	int temp = 0;
	for (int i = 0; i < len; i++)
	{
		temp = *num1;
		*num1 = *num2;
		*num2 = temp;

		num1++;
		num2++;
	}


	/*int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;*/
}
void main()
{

	int a = 10;
	int b = 20;
	Swap(&a, &b);
	printf("%d\n%d\n", a, b);//值传递
	//在Swap中，如果a， b的类型换成short等其他类型，就不能完成值传递
	//但在Swap1中用void类型写函数就没有上述问题

}