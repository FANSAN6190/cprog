/*Given three points (x1, y1), (x2, y2) and (x3, y3),
write a program to check if all the three points fall on one straight line.*/
#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3,A;
    printf("Enter the X coordinates=");
    scanf("%d %d %d",&x1,&x2,&x3);
    printf("Enter the Y coordinates=");
    scanf("%d %d %d",&y1,&y2,&y3);
    A=((x1*(y2-y3))-(x2*(y3-y1))+(x3*(y1-y2)))/2;
    printf("Area= %d",A);
    printf("\n%d,%d,%d,%d,%d,%d",x1,x2,x3,y1,y2,y3);
    A!=0?printf("\nPoints are Non-Collinear"):printf("\nPoints are Collinear");
}
