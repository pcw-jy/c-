//随机函数 ——》伪随机数
// 线性同余方程求随机数
// 用之前要导入<stdlib.h>头文件
//int num1 = (a * num0 + 43) % 50 -->  int num1 = rand()
//int num0: 种子 ->  srand()

#include<stdio.h>
#include<stdlib.h>
void main()
{

	srand(10);
	int num1 = rand();
	printf("%d\n", num1);
}
