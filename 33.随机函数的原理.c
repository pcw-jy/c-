#include <stdio.h>
#include <stdlib.h> 
#include<time.h>
//不能固定一个值，每次运行种子的值都需要发生改变，而时间每刻都会改变
int main()
{
    srand(5);
    //改变种子
    for (int i = 0; i < 10; i++)
    {
        int num1 = rand();
        printf("%d\n", num1);
    }
     
    //获取当前时间    原型
    //形参：所获取到的当前时间需不需要被存储
    //NULL:空
    //显示的是 1970.1.1 0：0：0  c语言诞生到现在的时间（秒）
    long long res;//8字节
    res = (time(NULL)); 
    printf("%lld\n", res);


    srand(time(NULL));
    //改变种子
    for (int i = 0; i < 10; i++)
    {
        int num1 = rand();
        printf("%d\n", num1);
    }


    return 0;
}
//随机数生成完之后就固定了，再次生成仍是那些数，原因是种子没变