#include<stdio.h>
void main()
{
    int N=0,rem=0,i;
    printf("Enter The Number=");
    scanf("/d",&i);
    while (i>0)
    {
        rem=i%10;
        N=N*10+rem;
        i=i/10;

    }
    printf("%d",N);

}
