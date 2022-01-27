#include<stdio.h>
char smd(char n,char c);
void cfw(char p);
void display(void);
char ttt[3][3]={
                {'1','2','3'},
                {'4','5','6'},
                {'7','8','9'}
               };
char ent[9];
void main()
{
    char p='X', ch=1;
    int i,k=0;
    printf("xoxoxoxoxoxox_TIC_TAC_TOE_oxoxoxoxoxox\n");
    while(ent[k]!=ch){
        printf("\nPlayer %c = ",p);
        scanf("%c",&ch);
        ent[k]=ch;
        k++;
        if(p=='X'){
            smd(ch,'X');
            cfw(p);
            p='O';
        }
        else if(p=='O'){
            smd(ch,'O');
            cfw(p);
            p='X';
        }
    }
}
char smd(char ch,char c){   
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(ttt[i][j]==ch){
                ttt[i][j]=c;
                display();
            }
        }
    }
    return 0;
}
void cfw(char p){
    int i,j,hc,vc,dc1=0,dc2=0;
    for(i=0,vc=0;i<3;i++){
        for(j=0,hc=0;j<3;j++){
            if(ttt[i][j]=='X'){
                hc++;
                //if(hc==3){printf("X Wins\n");break;}
            }
            if(i==j && ttt[i][j]=='X'){
                dc1++;
                //if(dc1==3){printf("X Wins\n");break;}
            }
            if(i==2-j && ttt[i][j]=='X'){
                dc2++;
                //if(dc2==3){printf("X Wins\n");break;}
            }
            if(ttt[j][i]=='X'){
                vc++;
                //if(vc==3){printf("X Wins\n");break;}
            }
        } 
        if(hc==3 || dc1==3 || dc2==3 || vc==3){
            printf("%c Wins \n",p);
            break;
        }
    }
}
void display(void){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %c ",ttt[i][j]);
        }
        printf("\n");
    }
}