/*The distance between two cities (in km.) is input through the keyboard. Write a
program to convert and print this distance in meters, feet, inches and centimeters*/
#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter the value=");
    scanf("%f",a);
    printf(" Distance in meters= %f \n Distance in feet=%f \n Distance in inches = %f \n Distance in centimeters=%f",a*1000,a*3280.84,a*39370.08,a*1000000);

}
