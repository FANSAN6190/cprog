#include<stdio.h>
void main()
{
    int c1,c2,c3,y;
    printf("Enter the year : ");
    scanf("%d",&y);
    c1=y%4==0;
    c2=y%400==0;
    c3=y%100!=0;
    switch (c1&&c2&&c3)
    {
    case (1):
        printf("%d is a Leap Year",y);
        break;
    case (0):
        printf("%d is not a leap year",y);
        break;
    }
}