#include<stdio.h>
void f(int *p, int *q) 
{ 
 printf("%d\n",*p);
 printf("%d\n",*q);
 p = q; 
*p = 2;
 printf("%d\n",*p);
 printf("%d\n",*q); 
} 
int i = 0, j = 1; 
int main() 
{ 
 f(&i, &j); 
 printf("%d %d \n", i, j); 
 return 0; 
}