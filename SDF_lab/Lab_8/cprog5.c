/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/
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
    printf("\nArea=%d\nPerimeter=%d",a,p);
    a<p?printf("\nArea is less than Perimeter"):printf("\nPerimeter of Rectangle is Greater than Area");

}
