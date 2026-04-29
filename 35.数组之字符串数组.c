#include<stdio.h>
int main()
{

	char arr[] = { 'h', 'e', 'l', 'l', 'o' };

	char arr1[] = { "hello" };

	char arr2[5] = { 'h', 'e', 'l', 'l' };
	char arr3[5] = { 'h', 'e', 'l', 'l', 'o'};//²»ÊÇ×Ö·û´®

	printf("%s -- %s\n", arr2, arr3);

	char arr4[] = "hello";
	char arr5[] = "hel\0lo";
	printf("%s\n", arr4);
	printf("%s\n", arr5);


	return 0;
}