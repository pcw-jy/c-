#include <stdio.h>

//遍历数组的元素并进行输出打印
//数组作为函数的参数，传递是一个地址（空间）  址传递
//数组作为函数的参数，要给出一个数组长度len作为函数的形参
//并且这个len必须在外面（主函数）计算

/*
重点：
1. 数组作为函数的参数，传递是一个地址（空间）  址传递,跟值传递，数据的传递不一样
2. 数组作为函数的参数，要给出一个数组长度len作为函数的形参
并且这个len必须在外面（主函数）计算，不能在被调函数里面去计算机，只能在主调函数里面去计算
*/

void MyArr(int Eample[], int len)//空间-> 存放实参数组的首地址功能
{
    //int len = sizeof(Eample) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", Eample[i]);
    }
    /*printf("%p\n", Eample);*/

    //printf("%d\n", sizeof(Eample));//4字节
}

void Add(int a, int b)//值传递
{

}

void main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    /*printf("%d\n", sizeof(arr));*/
    int len = sizeof(arr) / sizeof(int);
    /*int len = sizeof(arr) / sizeof(int);
    printf("%d\n", len);*/
    MyArr(arr, len);
}
