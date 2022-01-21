//WAP to sort an array
#include<stdio.h>
void main()
{
    int i,j,b,ar[10]={5,2,10,6,9,4,1,8,3,7};
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(ar[i]>ar[j]){
                b=ar[i];
                ar[i]=ar[j];
                ar[j]=b;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",ar[i]);
    }
}