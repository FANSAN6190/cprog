//WAP to sort and merge two arrays and store it into third array.
#include<stdio.h>
void main()
{
    int i,j,b,ar1[5]={4,3,5,2,1}, ar2[5]={10,6,9,8,7};
    int ar3[10];
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(ar1[i]>ar1[j]){
                b=ar1[i];
                ar1[i]=ar1[j];
                ar1[j]=b;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(ar2[i]>ar2[j]){
                b=ar2[i];
                ar2[i]=ar2[j];
                ar2[j]=b;
            }
        }
    } 
    for(i=0,j=0;i<10;i++){
       if(i<5){
           ar3[i]=ar1[i];
       }
       else{
           ar3[i]=ar2[j];
           j++;
       }
       printf("%d ",ar3[i]);
    } 
}