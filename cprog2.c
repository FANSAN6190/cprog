/*Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.*/
#include<stdio.h>
void main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%4||y%400==0){
        printf("%d Year is Leap year",y);
    }
    else if (y%100==0){
        printf("%d Year is not a Leap year",y);
    }
    else{
        printf("%d Year is not a Leap year",y);
    }

}
