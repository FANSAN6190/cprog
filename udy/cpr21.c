#include<stdio.h>
int gcd(int x,int y);
int abs(int x);
int sq(int x);
void main()
{
    int a,b;
    char ch;
    printf("Enter the choice = ");
    scanf("%c",&ch);
    if(ch=='g'){
        printf("Enter the two numbers = ");
        scanf("%d %d",&a,&b);
        printf("GCD=%d",gcd(a,b));
    }
    else if(ch=='a'){
        printf("Enter the Number =" );
        scanf("%d",&a);
        printf("absolute value= %d",abs(a));
    }
    else if(ch=='s'){
        printf("Enter the Number = ");
        scanf("%d",&a);
        printf("square root= %d",sq(a));
    }
    else{
        printf("Wrong input");
    }
}
int gcd(int x, int y){
    int r;
    for(r;r!=0;y=r){
        r=x%y;
        x=y;
        if(r==0)
          return y;
    }
}
int abs(int x){
    x=x*x;
    return(sq(x));
}
int sq(int x){
    int s;
    for(s=1;s<x;s++){
        if(s*s==x)
            return s;
    }
}
