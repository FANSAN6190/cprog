#include<stdio.h>
void main()
{
    int l,c;
    char s1[5]={'a','b','c','d','\0'};
    char s2[20];
    scanf("%[^\n]%*c",s2);
    fputs(s2,stdout);
    for(l=0,c=1;s2[l]!='\0';l++){c=c+1;}
    printf("\nLength of string=%d",c);
}