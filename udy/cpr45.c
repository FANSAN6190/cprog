#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char str[20];
    scanf("%s",str);
    printf("%s\n",str);
    str[0]=(char)toupper(str[0]);
    printf("%s\n",str);
}