/*
跳转控制语句
- 分为break、continue和goto语句
- break语句- 跳出当前循环或switch语句，结束循环或switch语句执行
- continue语句- 作用于循环中，结束当前本次循环，进行下一次循环
- goto语句- 无条件转移
*/
//
//#include<stdio.h>
//int main()

	/*for (int a = 0; a < 10; a++)
	{
		if (a == 4)
			continue;
		printf("%d\n", a);
	}*/

	//嵌套
	//for (int a = 0; a < 3; a++)
	//{
	//	for (int b = 1; b < 4; b++)
	//	{
	//		printf("%d", b);
	//	}
	//	printf("%d\n", a);
	//}


	/*char findEnd = 'Y';
	for (int a = 0; a < 3; a++)
	{

		for (int b = 0; b < 4; b++)
		{
			if (a == 1 && b == 1)
			{
				findEnd = 'N';
				break;
			}
		}
		if (findEnd == 'N')
			break;
	
	}*/
	//问题：若有好几个嵌套，则需要很多个break标签，太复杂，则需doto来解决

#include<stdio.h>
int main()
{ 
	char findEnd = 'Y';
	for (int a = 0; a < 3; a++)
	{

		for (int b = 0; b < 4; b++)
		{
			if (a == 1 && b == 1)
			{
				//findEnd = 'N';
				goto OVER;
			}
			printf("%d\n", a * 4 + b);
		}
		/*if (findEnd == 'N')
			break;*/
	}
	OVER:
		printf("over");


		return 0;

}
