/*The distance between two cities (in km.) is input through the keyboard. Write a C program to convert and 
print this distance in meters, feet, inches and centimeters. (Hint: 1 meter = 3.281 feet)*/
#include<stdio.h>
void main()
{
    float km;
    printf("Enter the Distance in Km=");
    scanf("%f",&km);
    printf("\nDistance in Meters=%g\n",km*1000);
    printf("Distance in Feet=%g\n",km*3281);
    printf("Distance in Inches=%g\n",km*3281*12);
    printf("Distance in Centimeters=%g\n",km*1000000);
}

