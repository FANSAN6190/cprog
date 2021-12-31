#include<stdio.h>
void main()
{
    int l,b,a,p;
    printf("Enter the Length of Rectangle=");
    scanf("%d",&l);
    printf("Enter the Breadth of Rectangle =");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    switch (a>p)
    {
    case 1:
        printf("Area is greater");
        break;
    
    default:
        printf("Perimeter is greater");
        break;
    }
}