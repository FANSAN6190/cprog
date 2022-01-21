
#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a=10,b=30;
    swap(&a,&b);
    printf("\n%d %d",a,b);
}
void swap(int *x,int *y){
    *x= *x + *y;
    *y= *x - *y;
    *x= *x - *y;
    printf("%d %d",*x,*y);
}