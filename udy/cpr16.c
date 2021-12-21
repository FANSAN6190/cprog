//Array
#include<stdio.h>
void main()
{
    int num[10];
    int sum=0,i;
    float a;
    for (i=0;i<10; ++i)
    {
    printf("\nEnter the Marks in subject %d=",i+1);
    scanf("%d",&num[i]);
    sum=sum+num[i];
    }
    for (i=0;i<10; ++i){
        printf("\n%d",num[i]);
    }
    a=sum/10;
    printf("\nAverage marks=%f",a);
}