#include<stdio.h>
int main()
{


	int arr[] = { 1, 2, 3, 4, 5, 6};


	printf("%p\n", arr); //0000002DEE6FFA88(加不加&号地址输出都一样),首个数据的地址为整个数组的地址，数组名就是这个数组的地址  
	//重新运行地址改变，因为运行后内存自动释放，再次运行重新分配地址
	printf("%p\n", &arr[0]);//此数组内整数数据的地址加4字节就是下一个整数数据的地址
	printf("%p\n", &arr[1]);

	//求数组元素个数公式：总长度/数据类型占用的字节个数
	printf("数组个数=%d\n", sizeof(arr) / sizeof(arr[0]));

	return 0;
}