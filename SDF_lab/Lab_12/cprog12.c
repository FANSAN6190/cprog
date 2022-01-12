//WAP to convert decimal into binary number.
#include<stdio.h>
int deci(int x);
void main()
{
    int d;
    printf("Enter the Number=");
    scanf("%d",&d);
    deci(d);
}
int deci(int x){
    int r,b=0;
    for(r=0;x>0;x/=2){
        r=x%2;
        b=(b*10)+r;
        printf(" %d ",b);
    } 
    printf("%d",b);
}
