#include<stdio.h>
void main()
{
    int r,s,a;
    printf("Enter the ages =");
    scanf("%d %d %d",&r,&s,&a);
    switch (r<s)
    {
    case 1:
        r<a?printf("Ram is younger"):printf("Ajay is Younger");
        break;
    
    case 0:
        s<a?printf("Shyam is younger"):printf("Ajay is Younger");
        break;
    }
}