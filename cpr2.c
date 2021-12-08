#include <stdio.h>
int main()
{
    enum gen{m,f};
    enum gen mgen;
    mgen=m;
    printf("%d \n",m);
    return 0;
}
