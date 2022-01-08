//WAP to print all the factors of a given number.
#include<stdio.h>
int factor(int n);
void main()
{
    int n;
    printf("Enter the Number=");
    scanf("%d",&n);
    factor(n);
}
int factor(int n){
    int i;
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}