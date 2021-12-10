//while loop
#include<stdio.h>
void main()
{
    int count =1;
    while (count<=100)
    {
        printf("\n%i",count*2);
        ++count;
        if (count >10){
            printf("\n\t%d",count/2);
        }
    }
        
}