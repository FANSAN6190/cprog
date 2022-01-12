/*Write a program to swap two values where input and output statements are in calling
(main) function.*/
#include<stdio.h>
int x,y;
void main()
{
    printf("Enter the values=");
        scanf("%d %d",&x,&y);
        swap();
        printf("New values of x=%d \ny=%d",x,y);
}
int swap(){
    x=x+y;
    y=x-y;
    x=x-y;
}
