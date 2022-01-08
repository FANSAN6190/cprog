//WAP to calculate the factorial of a given number.
#include<stdio.h>
int fact();
int n,f=1;
void main()
{
    printf("Enter the Number=");
    scanf("%d",&n);
    fact();

}
int fact(){
    for(n;n>0;--n){
        f=f*n;
    }
    printf("%d",f);
}
