#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables of type char occupy %ld bytes\n", sizeof(char));
    printf("Variables of type short occupy %ld bytes\n", sizeof(short));
    printf("Variables of type int occupy %ld bytes\n", sizeof(int));
    printf("Variables of type long occupy %ld bytes\n", sizeof(long));
    printf("Variables of type long long occupy %ld bytes\n", sizeof(long long));
    printf("Variables of type float occupy %ld bytes\n", sizeof(float));
    printf("Variables of type double occupy %ld bytes\n", sizeof(double));
    printf("Variables of type long double occupy %ld bytes\n", sizeof(long double));
    return 0;
}