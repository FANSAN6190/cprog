/*
   1
  2 2
 3 3 3
4 4 4 4
 3 3 3
  2 2
   1
*/
#include<stdio.h>
void main()
{
    int i,a,t;
    for(i=1;i<=4;i++){
        for(a=4;a>=1;a--){
                printf(" ");
            for(t=i;t>=i;t++){
                    printf("%d",t);
            }

        }
        printf("\n");

    }
}
