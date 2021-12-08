//bitwise operator
#include<stdio.h>
void main()
{
    unsigned int a=60; //0011 1100
    unsigned int b=13; //0000 1101
    int _and,_or,_not,_lshift,_rshift;
    _and=a&b; //0000 1100
    _or=a|b; //0011 1101
    _not=~b;
    _lshift=a<<2; //1111 0000 (shifted 2 bits of a to the left)
    _rshift=a>>2; /*0000 1111 for 2 bits right shift 
                    0000 0111 for 3 bits right shift*/
    printf("%d\n%d\n%d\n%d\n%d",_and,_or,_not,_lshift,_rshift);
}