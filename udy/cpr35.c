#include<stdio.h>
int main()
{
    struct date
    {
        int d[5];
        int m[5];
        int y[5];
    };
    char nam[5][10];
    struct date dob[2];
    for(int i=0;i<1;i++){
        printf("Enter the Name = ");
        fgets(&nam[i][10],10,stdin);
        printf("Enter your DOB = ");
        scanf("%d %d %d",dob[i].d,dob[i].m,dob[i].y);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            printf("%s-->%d / %d / %d\n",nam[i][j],*dob[i].d,*dob[i].m,*dob[i].y);
        }
    }
    return 0;
}
