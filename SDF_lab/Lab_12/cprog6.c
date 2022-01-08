//WAP to convert binary number into decimal
#include<stdio.h>
#include<math.h>
int btd();
int b,d=0,n;
void main()
{

    printf("Enetr the Number=");
    scanf("%d",&b);
    btd();
}
int btd(){
    for(n=0;b>0;n++){
        d=d+(b%10)*(pow(2,n));
        b=b/10;
    }
    printf("%d",d);
}

