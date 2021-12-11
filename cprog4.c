//Write a C program to print the sum of n natural numbers. The sum of first 'n' natural no`s- 1+2+3+.....+n=n*(n+1)/2
#include<stdio.h>
void main()
{
   int n,a=0,i=0;
   printf("enter the number=");
   scanf("%d",&n);
   for(n;n>=1;n=n-1)
    {
       a=a+n;
       i=1+1;
    }
    printf("%d \n",a);
    printf("%d",i);

}
