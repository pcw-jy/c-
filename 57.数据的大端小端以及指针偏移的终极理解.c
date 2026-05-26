#include<stdio.h>
#include<stdlib.h>
void main()
{	
	//数据存储形式
	//大端和小端存储
	/*小端模式（Little-Endian）
低字节放低地址，高字节放高地址
日常电脑、手机、x86 CPU 全是小端
​
大端模式（Big-Endian）
高字节放低地址，低字节放高地址
网络协议、单片机、部分嵌入式常用*/
	int m = 0xabcda0b0;
	printf("%p\n", &m);
	
	short* pshort = (short*)&m;
	printf("%x\n", *pshort);
	printf("%p\n", &m);
	printf("%p\n", pshort);
	pshort++;
	printf("%x\n", *pshort);
	printf("%p\n", pshort);




}