/*Any character is entered through the keyboard; write a program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.*/
#include<stdio.h>
void main()
{
    int A;
    printf("Enter the Character : ");
    scanf("%c",&A);
    if(A>=65 && A<=90){
        printf("Character is Capital");
    }
    else if(A>=97 && A<=122){
        printf("Character is Samll");
    }
}
