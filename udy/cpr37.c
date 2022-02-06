#include<stdio.h>
int main()
{
    FILE *fp;
    int c;
    char str[100];
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        perror("Error in opening file");
        return -1;
    }
    printf("!!\n");
    /*while (c=fgetc(fp)!=EOF)
    {
        printf("%c",c);
        //printf("!!\n");
    }*/
    if (fgets(str,60,fp)!=NULL){
        printf("%s",str);
    }
    fclose(fp);
    fp=NULL;
    printf("\n!!");
    return(0);
}