/*Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered
through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/
#include<stdio.h>
void main()
{
    int a,s=0,n;
    for(n=1;n<4;++n){
        printf("Enter the Angle %d =",n);
        scanf("%d",&a);
        s=s+a;
    }
    printf("\nSum of Angles is=%d",s);
    s!=180?printf("\nTriangle is Invalid"):printf("\nTriangle is valid");

}
