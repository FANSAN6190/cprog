//Rectangle
#include<stdio.h>
void main()
{
    double a,b,ar,pr;
    printf("Enter the length area of rectangle=");
    scanf("%lf",&a);
    printf("\nEnter the breadth of rectangle=");
    scanf("%lf",&b);
    ar=a*b;
    pr=2*(a+b);
    printf("\aArea of Rectangle is %lf \n",ar);
    printf("\aPerimeter of Rectangle is %lf \n",pr);
}
