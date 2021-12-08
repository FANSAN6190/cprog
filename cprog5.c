#include<stdio.h>
void main()
{
    int a=24,b;
    b=++a;
    printf("\n%d",--b);
    printf("\n%d",a&&b);
    printf("\n%d",a||b);
    printf("\n%d",!(a&&b));
}