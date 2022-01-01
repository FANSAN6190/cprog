/*Write a Menu Driven program to find addition, subtraction, multiplication and division all
using one user defined function for each operation.*/
#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter the Operation=");
    scanf("%c",&op);
    printf("Enter the First Number=");
    scanf("%d",&a);
    printf("Enter the second Number=");
    scanf("%d",&b);
    int add(){printf("Sum=%d",a+b);}
    int sub(){printf("Subtraction=%d",a-b);}
    int mul(){printf("Product=%d",a*b);}
    int div(){printf("division=%d",a/b);}
    if(op=='+'){add();}
    else if(op=='-'){sub();}
    else if(op=='*'){mul();}
    else if(op=='/'){div();}
}
