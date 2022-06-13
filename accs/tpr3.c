#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct stc
{
    bool c;
    long double b;
    int a;
}s;
union uni
{
    int a;
    int b;
    char c;
}u;

void main()
{
    printf("\n%d\n",sizeof(short int));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(long long int));
    printf("%d\n",sizeof(unsigned int));
    printf("%d\n",sizeof(unsigned long int));
    
    printf("\n%d\n",sizeof(float));
    printf("%d\n",sizeof(double)); 
    printf("%d\n",sizeof(long double));

    printf("\n%d\n",sizeof(s));
    printf("%d\n",sizeof(u));
}
