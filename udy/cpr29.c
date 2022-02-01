#include<stdio.h>
int len(const char *s);
void main()
{
    int l;
    char str[30];
    printf("Enter the string= ");
    scanf("%s",str);
    printf("%s\n",str);
    l=len(str);
    printf("Length of string=%d",l);
}

int len(const char * s){
    const char *l=s;
    while(*l){
        ++l;
    }
    return l-s;
}