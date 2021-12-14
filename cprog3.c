/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.*/
#include<stdio.h>
void main()
{
    int R,S,A;
    printf("Enter the age of Ram:");
    scanf("%d",&R);
    printf("Enter the age of Shyam:");
    scanf("%d",&S);
    printf("Enter the age of Ajay:");
    scanf("%d",&A);
    if(R<A){
            if(R<S){
                printf("Ram is Younger");
                }
            else{
                printf("Shyam is younger");
            }
    }
    else{
        if(A<S){
            printf("Ajay is younger");
        }
}
}
