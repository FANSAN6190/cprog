//WAP to find sum of all the elements in an array
#include<stdio.h>
void main()
{
    int i,sum=0,ar[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<10;i++){
        sum=sum+ar[i];
    }
    printf("%d",sum);
}
