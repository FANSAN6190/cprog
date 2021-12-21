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
    int i,a;
    for(i=1;i<=7;i++){
        if(i>4){
                for(a=1;a<=i;a++);
                printf("%d",i);
        }
        else{
            for(a=i;a<=i;a--);
            printf("%d",a);
        }
        printf("\n");
    }

}

