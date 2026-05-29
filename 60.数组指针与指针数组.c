/*

数组指针和指针数组

- 指针数组概念：数组里面的元素都是指针
- 指针数组的作用：更加方便操作多个数组 以及多个数组里面的数据
- 指针数组的定义格式：
 类型说明符 *指针名[数组大小]; 
 
*/
#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

void main()
{
    // 整数数组（班级1、班级2、班级3）
    int arr[] = { 1, 2, 3, 4, 5 };
    int arr1[] = { 1, 2, 3, 4, 5, 6 };
    int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };

    // 计算每个数组的长度
    int len = sizeof(arr) / sizeof(int);    // 5
    int len1 = sizeof(arr1) / sizeof(int); // 6
    int len2 = sizeof(arr2) / sizeof(int); // 7

    // 存储每个数组长度的数组
    int arrData[] = { len, len1, len2 };

    // 指针数组：每个元素都是int*类型的指针，指向上面的数组
    int* b[] = { arr, arr1, arr2 };
    // 二级指针，指向指针数组的首地址
    int** pp = b;

    // 外层循环：遍历3个班级（3个数组）
    for (int j = 0; j < 3; j++)
    {
        // 内层循环：遍历当前班级的所有元素
        for (int i = 0; i < arrData[j]; i++)
        {
            // *pp 表示当前班级数组的首地址，+i 表示取第i个元素
            printf("%d\t", *(*pp + i));
        }
        printf("\n"); // 每个班级打印完换行
        pp++;         // 指向下一个班级数组的首地址
    }
}
