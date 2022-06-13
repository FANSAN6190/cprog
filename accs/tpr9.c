#include<stdio.h>
#include<string.h>
void main()
{
char p[20]; 
char *s = "string"; 
int length = strlen(s); 
int i; 
for (i = 0; i < length; i++){
    p[i] = s[length-1 - i]; 
}
printf("%s",p);
  
}