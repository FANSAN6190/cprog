#include<stdio.h>
void main()
{
    FILE *fp=NULL;
    int ch=69;
    fp=fopen("def.txt","w+");
    for(ch=32;ch<=126;ch++){
        //fputs("|",fp);
        //fputc(ch,fp);
        fprintf(fp,"[ %d ] = [ %c ] \n",ch,(char)ch);

    }
    fclose(fp);
}