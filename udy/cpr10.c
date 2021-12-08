//factorial using goto statement
#include<stdio.h>
void main()
{
    int n,f=1;
    printf("Enter the Number= ");
    scanf("%d",&n);
    factorial:f=f*n;
    n=n-1;
    if(n==0){
        printf("%d",f);
    }
    else{
        goto factorial;
    }
}