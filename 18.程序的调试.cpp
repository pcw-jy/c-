//调试 - 打断点 -》 解决BUG  BUG:语法BUG和逻辑BUG
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
				/*findEnd = 'N';*/
				break
				/*goto OVER; */
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
