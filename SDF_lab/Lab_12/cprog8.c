//WAP to determine whether a number is ‘even’ or ‘odd’.
#include<stdio.h>
void eo(int n);
void main()
{
    int n;
    printf("Enter the Number=");
    scanf("%d",&n);
    eo(n);
}
void eo(int n){
    n%2==0?printf("Even"):printf("Odd");
}