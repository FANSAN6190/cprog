#include<stdio.h>
#define bpr 12.00
void main()
{
    float t,ta,p;
    printf("Enter the number of hours of work=");
    scanf("%f",&t);
    if (t>40){
        t=t-40;
        p=(bpr*40)+t*(bpr+bpr/2);
    }
    else{
        p=t*bpr;
    }
    printf("total pay is = %f",p);
    if (p<=300){
        ta=((15.0/100.0)*p);
        printf("tax 1= %f",ta);
    }
    else if (p<=450)
    {
        ta=(((15.0/100.0)*300)+((20.0/100.0)*(p-300)));
        printf("tax 2= %f",ta);
    }
    else{
        ta=(((15.0/100.0)*300)+((20.0/100.0)*150))+((25.0/100.0)*(p-450));
        printf("tax 3 = %f",ta);
        
    }
    printf("total gross pay is = %f",(p-ta));
}