#include<stdio.h>
void main()
{
    int i,a,n;
    printf("Enter the number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(a=1;a<=n;a++){
            if(a==1||i==1||a==n||i==n||a==i || a==n-i+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}