/*


字符串的概念

- 两种定义字符串的格式

1. 利用字符数组+双引号
特点:

- 在底层实际存储的时候，字符串常量还是会转换成字符数组进行存储，以 \0 结尾
- 数组的长度除了字符数量还要加上 \0 
- 字符内容可读可写


*/
#include<stdio.h>
void main()
{
	//方式1
	char a = 'a';
	char arr[] = { 'a', 'b','c' };
	char arr2[] = "abcde";
	//可读
	printf("%s\n", arr2);
	//可写
	arr2[0] = 'A';
	printf("%s\n", arr2);
	//方式2
	char *p = "abcde";
	printf("%s\n", p);//只能读取，不能写入

	char* p1 = "abcde";

	printf("%p\n", p);
	printf("%p\n", p1);//地址一样，不会开辟新内存


}