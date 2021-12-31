#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case(1):
        printf("Even");
        break;
    
    case(0):
        printf("Odd");
        break;
    }
}