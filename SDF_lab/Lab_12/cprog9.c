//WAP to determine if a given number is prime or not
#include<stdio.h>
int prime(int n);
int a=0,d,i;
void main()
{
    int n;
    printf("Enter the Number=");
    scanf("%d",&n);
    prime(n);
    d>2?printf("%d is not a Prime",n):printf("Prime");
}
int prime(int n){
    for(i=1;i<=n;i++){
        d=(n%i==0)?++a:a;
    }
}