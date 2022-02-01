#include<stdio.h>
int stc(int c);
void main()
{
    /*char str1[]="Fanindra Saini";
    char str2[20];
    printf("%s\n%s\n",str1,str2);
    for(int i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    }
    printf("%s\n%s",str1,str2);*/
    char str1[20];
    char str2[20];
    printf("Enter the string to be copied=");
    scanf("%s",str1);
    printf("%s\n",stc(str1));
}
