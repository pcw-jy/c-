/*
跳转控制语句
- 分为break、continue和goto语句
- break语句- 跳出当前循环或switch语句，结束循环或switch语句执行
- continue语句- 作用于循环中，结束当前本次循环，进行下一次循环
- goto语句- 无条件转移
*/


#include<stdio.h>
int main()
{
	/*for (int a = 0; a < 10; a++)
	{
		if (a == 4)
			continue;
		printf("%d\n", a);
	}*/
	for (int a = 0; a < 3; a++)
	{
		for (int b = 1; b < 4; b++)
			printf("%d", b);
		printf("%d\n", a);
	}
	
return 0;
}
