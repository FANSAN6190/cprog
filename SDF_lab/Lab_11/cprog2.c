/*Write a program to swap two values where input and output statements are in calling
(main) function.*/
#include<stdio.h>
int inp(int x,int y);
void main()
{
    int x,y;
    printf("Enter the Number x=");
    scanf("%d",&x);
    printf("Enter the Number y=");
    scanf("%d",&y);
    inp(x,y);
}
int inp(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("new values of \n x=%d \n y=%d ",x,y);
}

