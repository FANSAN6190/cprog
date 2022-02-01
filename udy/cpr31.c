#include<stdio.h>
int squ(int *a);
void main()
{
    int n;
    printf("Enter the Number = ");
    scanf("%d",&n);
    n=squ(&n);
    printf("square=%d",n);
}
int squ(int *a){
    return (*a)*(*a);
}
