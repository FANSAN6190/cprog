#include<stdio.h>
void main()
{
    struct date
    {
        int d,m,y;
    };
    struct  date today, *ptr;
    ptr=&today;
    ptr->d=04;
    ptr->m=02;
    ptr->y=2021;
    printf("Today's date = %i/%i/%i.\n",ptr->d,ptr->m,ptr->y);
}