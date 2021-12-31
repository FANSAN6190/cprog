#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the angles=");
    scanf("%d %d %d",&a,&b,&c);
    switch (a+b+c)
    {
    case 180:
        printf("Tringle is valid");
        break;
    
    default:
        printf("Tringle is invalid");
        break;
    }
}