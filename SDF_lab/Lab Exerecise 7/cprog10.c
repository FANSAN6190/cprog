/*Two numbers are input through the keyboard into two locations C and D. Write a C program to interchange the 
contents of C and D. (a) using third variable (b) without using third variable*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the first Number(C)=");
    scanf("%d",&a);
    printf("Enter the Second Number(D)=");
    scanf("%d",&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("Interchanged Value of C and D are \nC=%d\nD=%d\n",a,b);

    //without third variable
    printf("Enter the first Number(C)=");
    scanf("%d",&a);
    printf("Enter the Second Number(D)=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Interchanged Value of C and D are \nC=%d\nD=%d\n",a,b);
}
