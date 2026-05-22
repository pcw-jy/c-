#include<stdio.h>
void main()
{
	int a = 0;
	int *p = &a;
	printf("%p\n", p); //00000087743FF914
	p++;//偏移一个int类型的字节（四字节）,偏移量看字节
	printf("%p\n", p); //00000087743FF918
		

}