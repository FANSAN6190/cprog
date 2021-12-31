//Functions
#include<stdio.h>
void main()
{
    int calc(float x,float y){
        float a,s,m,d;
        printf("Enter the first number=");
        scanf("%f",&x);
        printf("Entert he second number=");
        scanf("%f",&y);
        a=x+y;
        s=x-y;
        m=x*y;
        d=x/y;
        printf("Addition=%g\nSubtration=%g\nMultiplication=%g\nDivision=%g\n",a,s,m,d);
    }
    calc(0,0);
}
