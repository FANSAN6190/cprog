#include<stdio.h>
#define pi 3.14
void main()
{
    int l,b,r,ar,pr,ac,cc;
    printf("Enter the length of Rectangle=");
    scanf("%d",&l);
    printf("Enter the Breadth of Rectangle=");
    scanf("%d",&b);
    printf("Radius of circle=");
    scanf("%d",&r);
    ar=l*b;
    pr=2*(l+b);
    ac=pi*r*r;
    cc=2*pi*r;
    printf("Area of Rectangle is = %d \n perimeter of Rectangle is = %d \n area of circle is = %d \n circumference of circle is = %d",ar,pr,ac,cc);
    
}
