//WAP to calculate series: sin X = X � X 3 / 3! + X 5 / 5! � X7 / 7! +.
#include<stdio.h>
int sint(int l);
int fact(int n);
void main()
{
    int X,n=1,l;
    printf("Enter the number=");
    scanf("%d",&l);
    printf("Sin X = ");
    sint(l);
}
int sint(int l){
    for(int n=1;l>0;l=l-2){
        printf("[(X^%d)/%d] + ",n,fact(n));
        n=n+2;
    }
}

int fact(int n){
    int f;
    for(f=1;n>0;n--){
        f=f*n;
    }
    return f;
}
