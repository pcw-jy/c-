#include<stdio.h>
#include<math.h>
int main()
{
	double a = sqrt(25.0);//平方根
	double b = floor(3.7);//浮点数取小
	double c = ceil(3.7);//浮点数取大
	double d = fabs(3.7);//取绝对值
	printf("%lf %lf %lf %lf\n", a, b, c, d);
	//函数指针数组定义以及调用
	double(*p)(double) = sqrt;
	printf("%lf\n", p(25));
	double (*arr[4])(double) = { sqrt, floor, ceil, fabs };
	for (int i = 0; i < 4; i++)
	{
		printf("%lf\n", arr[i](25.0f));
	}



	return 0;
}