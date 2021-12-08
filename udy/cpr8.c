//convert minutes to years and days
#include<stdio.h>
void main()
{
    double min,d,y;
    printf("Enter the numberof minutes ");
    scanf("%lf",&min);
    d=min/(24*60);
    y=d/365;
    printf("\n%lf minutes=%lf Days \n %lf minutes=%lf years",min,d,min,y);
} 