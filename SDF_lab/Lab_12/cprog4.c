/*WAP to divide one number by another without using the division operator.*/
#include<stdio.h>
int D,d;
void main()
{
    printf("Enter the Numbers=");
    scanf("%d %d",&D,&d);
    printf("%d",div());
}
    int div()
    {
        return ((D-(D%d))/d);
    }
