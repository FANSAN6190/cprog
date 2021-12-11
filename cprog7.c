//Write a C program to convert a given number of days into months and days
#include<stdio.h>
void main()
{
    int d,y,m;
    printf("Enter the number of days=");
    scanf("%d",&d);
    m=d/30;
    y=d/365;
    printf("\nMonths in %d days=%d \nYears in %d days=%d ",d,m,d,y);

}
