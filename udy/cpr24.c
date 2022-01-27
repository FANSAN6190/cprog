#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20]="Hello String";
    char str2[10]="abcdefgh";
    char str3[10]="ABCDEFGH";
    char str4[10]="ABCDefgh";
    printf("%s\n",str1);

    //strchr()
    char *p=NULL;
    char w='e';
    p=strchr(str1,w);
    printf("%s\n",p);

    //strstr()
    char *q=NULL;
    char v[]="efg";
    q=strstr(str2,v);
    printf("%s\n",q);

    //strtok()
    char *s=null;
    
}