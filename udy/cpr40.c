#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct item
{
    char *itemName;
    int qty;
    float price; 
    float amount;
};
void readitem(struct item *prod,int n);
void print(struct item *prod,int n);
void main()
{
    int n;
    printf("Enter the Number of Item = ");
    scanf("%d",&n);
    struct item itm,*pitm;
    pitm=&itm;
                                                 //(*x).y or x
    readitem(pitm,n);
    print(pitm,n);
}
void readitem(struct item *prod,int n){
    char temp[10];
    for(int i=0;i<n;i++){
        printf("Enter the Item Name = ");
        scanf(" ");
        fgets(temp,15,stdin);
        (prod+i)->itemName=(char*)malloc(strlen(temp)+1);
        printf("Enter the Quantity = ");
        scanf("%d",&(prod+i)->qty);
        printf("Enter the Price = ");
        scanf("%f",&(prod+i)->price);
        (prod+i)->amount=((prod+i)->price)*((prod+i)->qty);
    }
}
void print(struct item *prod,int n){
    for(int i=0;i<n;i++){
        printf("|%s|---|%d|--|%0.2f|--|%0.2f|\n",(prod+i)->itemName,(prod+i)->qty,(prod+i)->price,(prod+i)->amount);
    }
}