/*prime numbers using array*/
#include<stdio.h>
void main()
{
    int n,a,d,i=1,j;
    int prime[100]={2,3};
    for(n=4;n<100;++n){
        for(a=1,d=0;a<=n;++a){
            if(n%a==0){
                d=d+1;
            }
        }
        if(d<=2){
            ++i;
            prime[i]=n;
        }
    }
    for(j=0;j<=i;++j){
        printf("%d ",prime[j]);
    }
}