//Write a program to find the greatest common divisor of two given numbers using recursion.
#include<stdio.h>
int gcd(int,int);
void main()
{
    int a,b,G,L;
    printf("Enter a,b=");
    scanf("%d %d",&a,&b);
    if(a<b){
        G=gcd(a,b);
    }
    else{
        G=gcd(b,a);
    }
    L=(a*b)/G;
    printf("GCD=%d\n",G);
    printf("LCM=%d\n",L);
}
int gcd(int x, int y){
    if (x==0){
        return y;
    }
    else{
        return (gcd(y%x,x));
    }
}

/*{
    int a,b,r;
    printf("Enter the Numbers=");
    scanf("%d",&a);
    scanf("%d",&b);
    for(r=1;r>0;b=r){     
        r=a%b;
        a=b;
        if(r==0){
            printf("GCD=%d\n%d",b,5%10);

        }
    }
}*/

