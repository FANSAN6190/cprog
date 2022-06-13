#include<stdio.h>
int f(int n);
void main(){
    printf("%d",f(1));
}
int f(int n) 
{ 
 static int i = 1; 
 if (n >= 5){
     return n;
 }
 n = n+i; 
 i++;
 return f(n); 
}
