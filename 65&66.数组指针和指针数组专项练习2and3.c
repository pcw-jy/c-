#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n[3][4] =
    {
        {1,2,3,4},
        {8,7,6,5},
        {9,10,11,12},
    };
    int (*pn)[4] = n;
    int* p[3] = { n[1],n[0],n[2] };
    int** pp = p;
    //Çó£º
    printf("%p\n", *pp++);
    printf("%d\n", *p[1]++);
}
