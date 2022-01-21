#include<stdio.h>
void main()
{
    int i,g=0,ar[2+3];
    for(i=0;i<5;++i){
        printf("Enter the Number %d =",i+1);
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++){
        if(g<ar[i]){
            g=ar[i];
        }
    }
    printf("\ngreatest number= %d",g);
}
