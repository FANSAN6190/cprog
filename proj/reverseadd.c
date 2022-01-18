#include<stdio.h>
int revn(int n);
void main()
{
    int a,b=0,c=0,rem;
    printf("Enter the Number=");
    scanf("%d",&a);
    printf("\n%d",revn(a));
    while(a!=b){
        c++;
        a=a+b;
        b=revn(a);
        printf("\n%d.---%d %d//",c,a,b);
    }
    printf("\n[%d___%d %d___]",c,a,b);
}
int revn(int n){
    int a;
    for(a=0;n>0;n/=10){
        a=(a*10)+(n%10);
    }
    return a;
}
