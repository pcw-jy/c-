/*  
生成区间随机数的公式：rand()%[(尾+1)-头]+头  
1——50
100——200
32——98

*/
#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		int res = rand() % 67 + 32;
		printf(" % d\n", res);
	}

}