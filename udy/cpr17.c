//Multidimensional Arrays
#include<stdio.h>
void main()
{
    int i,c,r,s;
    int mat[3][3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    },
    {
        {11,12,13},
        {14,15,16},
        {17,18,19}
    };
    
    for(c=0;c<3;++c){
        for(r=0;r<3;++r){
            for(s=0;s<2;++s){
                printf("\n%d",mat[s][c][r]);                
            }
        }
    }
}