#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *m=(int*)malloc(25*sizeof(int));
    int *c=(int*)calloc(75,sizeof(int));
    //int *r=(int*)realloc(25*sizeof(int));
    
    printf("%ld\n",sizeof(c));
    free(m);
    m=NULL;
    printf("%p\n",m);
}