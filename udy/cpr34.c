#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pt;
    int n,l;
    printf("Enter the size = ");
    scanf("%d",&n);
    pt=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the Value %d = ",i+1);
        scanf("%d",&pt[i]);
    }
    for(int i=0;i<n;i++){
        printf("The Value at %d is = %d\n",i+1,pt[i]);
    }
    return 0;
}