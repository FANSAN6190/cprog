#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    int multiple[]={10,20,30,40,50};
    int *p= multiple;
    for(i=0;i<(sizeof(multiple)/sizeof(multiple[0]));++i){
        printf(" multiple[%d] = %d | *(p+%d) = %d | &multiple[%d] = %llu | p+%d = %llu \n",i,multiple[i],i,*(p+i),i,(unsigned long long)&multiple[i],i,(unsigned long long)(p+i));
    }
}