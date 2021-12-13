/*If a four-digit number is input through the keyboard. Write a C program to obtain the sum of the first 
and last digit of this number.*/
#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("Enter the Number=");
    scanf("%d",&n);
    sum=sum+n%10;
    while (n>0)
    {
        rem=n%10;
        n=n/10;
    }
    sum=sum+rem;
    printf("Sum=%d",sum);
  
}
