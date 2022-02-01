#include<stdio.h>
int swap(int *x,int *y);
void main()
{
    int a,b;
    printf("Enter the Number = ");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
}
int swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("new value %d %d",*x,*y);
    return *x,*y;
}
