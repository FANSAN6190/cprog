#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[10],str2[10],str3[10];
    FILE *fp;
    int year;
    fp=fopen("abc.txt","w+");
    if(fp==NULL){
        fputs("Error in opening file",fp);
        rewind(fp);
    }
    fscanf(fp,"%s %s %s %d",str1,str2,str3,&year);
    printf("Read String 1 |%s|\n",str1);
    printf("Read String 2 |%s|\n",str2);
    printf("Read String 3 |%s|\n",str3);
    printf("Read Integer  |%d|\n",year);
    
    fclose(fp);
    return(0);
}