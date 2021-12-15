#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int n=0,r,i,d;
    time_t t;
    srand((unsigned)time(&t));
    r=rand()%21;
    if (n>=0 && n<=20){
        for (i = 1; i <=5; i++)
        {
            printf("\n**************************************************************");
            printf("\n___Attempt Number %d ___",i);
            printf("\nGuess the Number between 0 to 20=");
            scanf("%d",&n);
            d=n-r;
            if(n==r){
                printf("You have Right Guess");
                break;
            }
            else if(d>=3 || d<=-3){
                printf("Difference is too High");
                n<r?printf("\nNumber is Greater That"):printf("\nNumber is less than that");
            }
            else if(d<=3 || d>=-3){
                printf("You are Just Close");
                n<r?printf("\nNumber is Greater That"):printf("\nNumber is less than that");
            }
            else{
                printf("\nYour Guess is Wrong\n");
            }
        }
        printf("\nNumber is %d\n",r);
    }
    else{
        printf("Number is not Between 0 and 20");
    }
}