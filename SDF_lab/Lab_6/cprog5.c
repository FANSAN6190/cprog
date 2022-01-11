/*Write a program to find the sum of first 50 natural numbers.*/
#include<stdio.h>
void main()
{
    int n=1,s=0;
    while (n<=50){
        s=s+n;
        n=n+1;
    }

    printf("%d",s);

}
