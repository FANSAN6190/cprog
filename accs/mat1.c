#include<stdio.h>
void main()
{
    int ar[3][5]={
                {1,2,3,4,5},
                {1,3,5,7,9},
                {9,8,7,6,5}
                };
    int j,i,asd[20]={1,2,3,4,[8]=9,10};
    //printf("%d %d ",i,j);
    //int number []={0,0,0,0,0};
    //int aq[6]={5,62,56,5,2,10};
    //float word []={'A','R','R','A','Y'};
    //float item [3] [2] ={0,1,2,3,4,5};
    int xxx[10]={5,4,9,2,6};
    xxx[12]=19;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            //printf("%d ",ar[i][j]);
        }
    }
    //for(i=0;i<10;i++){
        printf("%d %d ",*xxx+3,xxx[9]);
    //}
    
}
