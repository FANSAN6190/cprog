#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int n=0,r,i,d;
    time_t t;
    srand((unsigned)time(&t));
    r=rand()%21;   
    for (i = 1; i <=5; i++)
    {
        printf("\n**************************************************************");
        printf("\n___Attempt Number %d ___",i);
        printf("\nGuess the Number between 0 to 20=");
        scanf("%d",&n);
        d=n-r;
        if(n<0 || n>20){
            printf("The Number is not between 0 and 20");
            --i;
        }
        else if(n==r){
            printf("You have Right Guess");
            break;
        }
        else if(d>=3 || d<=-3){
            printf("\nDifference is too High");
            n<r?printf("\nNumber is Greater That"):printf("\nNumber is less than that");
        }
        else if(d<=3 || d>=-3){
            printf("\nYou are Just Close");
            n<r?printf("\nNumber is Greater That"):printf("\nNumber is less than that");
        }
    }    
    printf("\nYour Guess is Wrong\n");
    printf("\nNumber is %d\n",r);
}