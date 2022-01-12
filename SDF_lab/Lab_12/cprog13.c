//WAP that calculates the factorial of a given number using recursion.
#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("Enter the Number=");
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
    
}