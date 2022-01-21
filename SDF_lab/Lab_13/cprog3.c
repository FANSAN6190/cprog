//WAP to sort an array and then find median.
#include<stdio.h>
void main()
{
    int i,j,b,n,ar[10]={5,2,10,6,9,4,1,8,3,7};
    float m;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(ar[i]>ar[j]){
                b=ar[i];
                ar[i]=ar[j];
                ar[j]=b;
            }
        }
    }
    for(i=0,n=0;i<10;++i){
        printf("%d ",ar[i]);
    }
    i=i-1;
    printf("\n%d",i);
    if((i+1)%2==0){
        m=(ar[i/2]+ar[(i/2)+1])/2.0;
        printf("\nMedian=%g",m);
    }
    else{
        m=ar[(i+1)/2];
        printf("\nMedian=%g",m);
    }
}
