//WAP to generate a Fibonacci series.
#include<stdio.h>
int fibb(int n);
void main()
{
    int n;
    printf("Enter the Number=");
    scanf("%d",&n);
    fibb(n);
}
int fibb(int n){
    int a,b,c=0;
    printf("0 1 ");
    for(a=0,b=1;b<n;c++){
        a=a+b;
        b=a+b;
        b<=n?printf("%d %d ",a,b):printf(" ");
        c++;
    }
    printf("\nNumber of Elements=%d",c++);
}