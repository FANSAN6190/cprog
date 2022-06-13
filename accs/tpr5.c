#include<stdio.h>
void main()
{
    int t[]={1,2,3,4,5};
    int *p,*q,*r;
    p=t;
    q=(p+1);
    r=(p+2);
    printf("\n%d%d%d\n",*p,*q,*r);
}