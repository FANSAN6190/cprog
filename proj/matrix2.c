#include<stdio.h>
void main()
{
    int mat[9];
    int i;
    for(i=0;i<9;++i){
        printf("Enter the values-\n");
        scanf("%d",&mat[i]);
    }
    
    for(i=0;i<9;++i){
        printf("%d",mat[i]);
    }

    //D=a*(e*i-h*f)-b*(d*i-g*f)+c*(d*h-g*e);
    //printf("\nDeterminant of Matrix is %d",D);
    //printf("\nCharacteristic equation of matrix is-\n [ x^3 - (%d)x^2 + (%d)x - (%d) ]\n",(a+e+i),((e*i-h*f)+(a*i-g*c)+(a*e-d*b)),D);

}