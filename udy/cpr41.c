#include<stdio.h>
int main()
{
    FILE *fp;
    char c[100];
    fp=fopen("abc.txt","r");
    //fgetc(fp);
    //fgets(c,10,fp)!=NULL

    if(fscanf(fp,"%s",c)!='\0')
    {
        printf("%s",c);
    }
    return 0;
    
}