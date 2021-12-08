#include<stdio.h>
void main()
{
    enum company{GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROOFT};
    enum company x=XEROX,g=GOOGLE,e=EBAY,m=MICROOFT;
    printf("The value of XEROX is %d",x);
    printf("\nThe value of GOOGLE is %d",g);
    printf("\nThe value of EBAY is %d",e); 
    printf("\nThe value of MICROSOFT is %d",m);


}