//sum of digits
#include<stdio.h>
int r(int n);
void main()
{
    int a;
    printf("Enter the Number=");
    scanf("%d",&a);
    printf("Sum=%d",r(a));
}
int r(int n){
    static int sum=0;
    if(n>0){
        sum=sum+(n%10);
        n=n/10;
        r(n);
    }
    return sum;
}