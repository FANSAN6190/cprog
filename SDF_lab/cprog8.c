/*Any character is entered through the keyboard; write a program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.*/
#include<stdio.h>
void main()
{
    int A;
    printf("Enter the Character : ");
    scanf("%c",&A);
    if(A>64 && A<91){
        printf("Character is Capital");
    }
    else if(A>90 && A<123){
        printf("Character is Samll");
    }
}
