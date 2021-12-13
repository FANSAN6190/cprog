/*The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a C program 
to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.*/
#include<stdio.h>
void main()
{
    int l,b,r;
    float ar,ac,pr,cc;
    printf("Enter the length=");
    scanf("%d",&l);
    printf("Enter the breadth=");
    scanf("%d",&b);    
    printf("Enter the radius=");
    scanf("%d",&r);
    ar=l*b;
    ac=(22.0/7.0)*r*r;
    pr=2*(l+b);
    cc=2*(22.0/7.0)*r;
    printf("Area of Rectangle=%g\n",ar);
    printf("Perimeter of Rectangle=%g\n",pr);
    printf("Area of circle=%g\n",ac);
    printf("Circumference of Rectangle=%g\n",cc);
}
