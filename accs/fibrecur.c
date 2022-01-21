//fibbonachi series through recursion
#include<stdio.h>
int fibbo(int n);
int n1=0,n2=1,n3,n;
void main()
{
    printf("Enter the Number of elements=");
    scanf("%d",&n);
    printf("%d %d ",0,1);
    fibbo(n);   
}
int fibbo(int n){
    if(n-2>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        fibbo(n-1);
    }
}