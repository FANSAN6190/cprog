#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h,i,D;
    printf("Enter the values-\n");

/*    a b c 
      d e f
      g h i  */

    scanf("\n%d\t%d\t%d\t\n%d\t%d\t%d\t\n%d\t%d\t%d ",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    printf("\n%d\t%d\t%d\t\n%d\t%d\t%d\t\n%d\t%d\t%d",a,b,c,d,e,f,g,h,i);
    D=a*(e*i-h*f)-b*(d*i-g*f)+c*(d*h-g*e);
    printf("\nDeterminant of Matrix is %d",D);
    printf("\nCharacteristic equation of matrix is-\n [ x^3 - (%d)x^2 + (%d)x - (%d) ]\n",(a+e+i),((e*i-h*f)+(a*i-g*c)+(a*e-d*b)),D);

}