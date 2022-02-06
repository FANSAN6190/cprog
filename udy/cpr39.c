#include<stdio.h>
#include<stdlib.h>
struct employee{
        char fname[15];
        char lname[15];
        /*t hiredate{
            int d,m,y;
        };
        struct hiredate hdate;*/
        int d,m,y;
        float salary;
    };
void main(){
    int n;
    printf("Enter the Number of Employees = ");
    scanf("%d",&n);
    struct employee emp[n];
    for(int i=0;i<n;i++){
        printf("Enter the name of Employee = ");
        scanf(" ");
        scanf("%s %s",emp[i].fname,emp[i].lname);
        /*if(emp[i].name =="exit"){break;}
        else{n++;}*/
        //fgets(emp[i].name,sizeof(name),stdin);
        printf("Enter the Hire Date = ");
        scanf("%d %d %d",&emp[i].d,&emp[i].m,&emp[i].y);
        printf("Enter the Salary = ");
        scanf("%f",&emp[i].salary);
    }
    printf("________________________________________________\n");
    for(int i=0;i<n;i++){
        printf("|%s %s|---|%d/%d/%d|---|%.2f|\n",emp[i].fname,emp[i].lname,emp[i].d,emp[i].m,emp[i].y,emp[i].salary);
    }
    printf("|_______________________________________________|\n");
}
