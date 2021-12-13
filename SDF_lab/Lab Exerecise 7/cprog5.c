/*Write a C program to print the sum of the square of n natural numbers. The sum of squares of first 'n' natural no`s- 1^2+2^2+3^2+.....+n^2=n*(n+1)*(2n+1)/6*/
#include<stdio.h>
void main()
{
   int n,a=0;
   printf("enter the number=");
   scanf("%d",&n);
   for(n;n>=1;n=n-1)
    {
       a=a+(n*n);

    }
    printf("%d \n",a);

}
