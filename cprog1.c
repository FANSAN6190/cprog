#include<stdio.h>
void main()
{
    int a,c1,c2;
    printf("Enter the number=");
    scanf("%d",&a);
    c1=a<11 && a>1;
    c2=a<21 && a>10;
    switch(c1)
    {
    case(1):
        printf("Square=%d",a*a);
        break;
    case(0):
        switch(c2)
        {
            case(1):
                printf("cube=%d",a*a*a);
                break;
            case(0):
                printf("%d",a);
                break;
        }
    }
}
