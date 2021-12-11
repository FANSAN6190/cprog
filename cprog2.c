//Write a C program that takes two numbers as an input and print the average.
#include<stdio.h>
void main()
{
    float a,b,av;
    printf("Enter the first number ");
    scanf("%f",&a);
    printf("Enter the second number ");
    scanf("%f",&b);
    av=(a+b)/2;
    printf("Average of the 2 numbers is=%f",av);

}
