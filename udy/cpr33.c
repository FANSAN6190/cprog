#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    //char st[20];
    printf("Enter the length of string = ");
    scanf("%d",&n);
    char *st=(char*)malloc(n*sizeof(char));

    printf("Enter the String = ");
    scanf(" ");
    gets(st);

    printf("1.|%s|_\n",st);
    printf("2.|%d|_\n",st);
    //st=NULL;
    free(st);
    printf("3.|%d|_\n",sizeof(st));
    
}