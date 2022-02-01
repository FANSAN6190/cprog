#include<stdio.h>
void main()
{
    int ar1[5];
    int *pa1, *pa2;
    pa1=&ar1;
    pa2=&ar1[0];
    printf("%p\n",pa1);
    printf("%p\n",pa2);
}