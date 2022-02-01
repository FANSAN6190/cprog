#include<stdio.h>
void main()
{
    int a=10;
    int ar[5]={100,200,300,400,500};
    int *p1,*arp1,*arp2,*arp3,*arp4,*arp5;
    p1=&a;
    //printf("Address of pointer= %p\n",p1);
    /*printf("Address of a= %p\n",&a);
    printf("Value of pointer= %p\n",p1);
    printf("Address of pointer= %p\n",&p1);
    printf("value of variable a= %d\n",*p1); */
    arp1=&ar[0];
    arp2=&ar[1];
    arp3=&ar[2];
    arp4=&ar[3];
    arp5=&ar[4];
    printf("Value of pointer(ar[0])= %d\n",arp1);
    printf("value of pointer(ar[1])= %p\n",arp2);
    printf("value of pointer(ar[2])= %p\n",arp3);
    printf("value of pointer(ar[3])= %p\n",arp4);
    printf("value of pointer(ar[4])= %p\n",arp5);
    a=arp1+1;
    printf("a= %p ",a);
}
