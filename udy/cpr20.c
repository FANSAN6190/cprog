//Functions
#include<stdio.h>
void main()
{
    int arthoper(float x,float y){
        float a,s,m,d;
        printf("Enter the first number=");
        scanf("%f",&x);
        printf("Entert he second number=");
        scanf("%f",&y);
        a=x+y;
        s=x-y;
        m=x*y;
        d=x/y;
        printf("Addition=%g\nSubtration=%g\nMultiplication=%g\nDivision=%g\n",a,s,m,d);
    }
    int fact(){
        int x,f=1;
        printf("Enter the Number=");
        scanf("%d",&x);
        do{
            f=f*x;
            x=x-1;
        }while(x>0);
        printf("%d",f);
    }
    int conv(){
        float n0,m0;
        char un[3],unc[3];
        char units[4][2]={"mm","cm","m","km"};
        printf("Enter the Number=");
        scanf("%f",&n0);
        printf("Enter the initial unit=");
        scanf("%s",un);
        printf("Enter the conversion unit=");
        scanf("%s",unc);
        ((strcmp(un,"mm")==0)&&(strcmp(unc,"cm")==0))?(printf("%gmm= %gcm",n0,n0/10)):((strcmp(un,"mm")==0)&&(strcmp(unc,"m")==0))?(printf("%gmm= %gm",n0,n0/1000)):((strcmp(un,"mm")==0)&&(strcmp(unc,"km")==0))?(printf("%gmm= %gkm",n0,n0/1000000)):((strcmp(un,"cm")==0)&&(strcmp(unc,"mm")==0))?(printf("%gcm= %gmm",n0,n0*10)):((strcmp(un,"cm")==0)&&(strcmp(unc,"m")==0))?(printf("%gcm= %gm",n0,n0/100)):((strcmp(un,"cm")==0)&&(strcmp(unc,"km")==0))?(printf("%gcm= %gkm",n0,n0/100000)):((strcmp(un,"m")==0)&&(strcmp(unc,"mm")==0))?(printf("%gm= %gmm",n0,n0*1000)):((strcmp(un,"m")==0)&&(strcmp(unc,"cm")==0))?(printf("%gm= %gcm",n0,n0*100)):((strcmp(un,"m")==0)&&(strcmp(unc,"km")==0))?(printf("%gm= %gkm",n0,n0/1000)):((strcmp(un,"km")==0)&&(strcmp(unc,"mm")==0))?(printf("%gkm= %gmm",n0,n0*1000000)):((strcmp(un,"km")==0)&&(strcmp(unc,"cm")==0))?(printf("%gkm= %gcm",n0,n0*100000)):((strcmp(un,"km")==0)&&(strcmp(unc,"m")==0))?(printf("%gkm= %gm",n0,n0*1000)):(printf("Try Again"));
    }
    conv();
}