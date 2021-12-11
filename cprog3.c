//Write program that takes 3 digit number as an input. Program should compute and display the sum of digits in a number
#include<stdio.h>
void main()
{-
    int n,rem,sum=0;
    printf("Enter the three digit number=");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
}

