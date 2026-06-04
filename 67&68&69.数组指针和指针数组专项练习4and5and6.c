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
    //Çó
    printf("%d\n", *(*(pp + 1) + 2));
    printf("%d\n", *(*(p + 1) + 2));
    printf("%d\n", *(p[2] - 3));
}