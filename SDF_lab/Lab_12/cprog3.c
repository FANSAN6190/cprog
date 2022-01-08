/*Write a program to find the greatest common divisor of two given numbers*/
#include<stdio.h>
int a,b,d;
int gcd();
void main()
{
    printf("Enter the numbers=");
    scanf("%d %d",&a,&b);
    gcd();
    printf("%d",d);
}
int gcd()
{
    int i;
    for(i=1;i<a && i<b;i++){
        if(a%i==0 && b%i==0)
            d=i;
    }
}
