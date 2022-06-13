#include<stdio.h>
void main()
{
    printf("---------------------------------\n");
    int c,l=1;
    FILE *fp;
    fp=fopen("/home/fansan/Desktop/cprog/udy/abc","r");
    printf("line %2d:   ",1);
    for(int i=0;(c=fgetc(fp))!=EOF;i++){
        printf("%c",c);
        if(c=='\n'){
            l++;
            printf("line %2d:   ",l);
        }
    }
    fclose(fp);
    printf("\n------------------------------    -\n");
    printf("Number of Line = %d",l);
}