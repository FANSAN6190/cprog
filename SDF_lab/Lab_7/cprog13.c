/*Write a C program to find the gross salary of an employee Gross salary = base salary + DA + HRA+Bonus
DA= 40 % of the base salary, HRA=80% of DA, and Bonus= 25% of HRA. Ask user to enter the base salary only.*/
#include<stdio.h>
void main()
{
    float gs,bs,da,hra,b;
    printf("Enter the Base Salary=");
    scanf("%g",&bs);
    da=(0.40)*bs;
    hra=(0.80)*da;
    b=(0.25)*hra;
    gs=bs+da+hra+b;
    printf("Gross Salary of Employee is=%g\n",gs);
}
