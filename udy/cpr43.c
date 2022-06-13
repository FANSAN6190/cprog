#include<stdio.h>
void main()
{
    int l;
    FILE *fp;
    fp=fopen("def.txt","r");
    fseek(fp,0,SEEK_END);
    l=ftell(fp);
    printf("Size of File = %d",l);
}