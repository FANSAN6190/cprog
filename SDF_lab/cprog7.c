//Write a program for computing factorial N (N!)
#include<stdio.h>
void main()
{
    int N,a,n=1;
    printf("Enter the number=");
    scanf("%d",&N);
    a=N;
    while (n<a)
    {
        N=N*n;
        n=n+1;
    }
    printf("Factorial of N=!N= %d",N);
}
