/*Write an to find the largest of three numbers A, B, and C*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of first number=");
    scanf("%d",&a);
    printf("Enter the value of second number=");
    scanf("%d",&b);
    printf("Enter the value of third number=");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        if (b>c)
            {
            printf("%d",b);
            }
    }
}

