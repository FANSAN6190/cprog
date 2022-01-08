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
    int a,b,c;
    for(a=0,b=1;c<=n;c=a+b){
        printf("0 1 %d ",c);
        a=c;
    }
}