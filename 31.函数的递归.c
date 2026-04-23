//函数之间是同等级的，不能嵌套定义
//函数的递归：一个函数自身调用自身
//求n个数的阶乘
int Mys(int n)
{
	if (n == 1)
		return 1;
	else
	{
		return n * Mys(n - 1);
	}


	return;
}
#include<stdio.h>
void main()
{
	printf("%d\n", Mys(10));


}