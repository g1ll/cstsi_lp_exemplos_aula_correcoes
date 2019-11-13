
#include<stdio.h>

int main(void){
    int ca=0,ce=0;
    float nota,ma=0,me=0;

    printf("\nnota: ");
    scanf("%f",&nota);
    while(nota!=99){
        if(nota>=6){
            ca=ca+1;
            ma=ma+nota;
        }else{
            if(nota>=3){
                ce++;
                me+=nota;
            }
        }
        printf("\nnota: ");
        scanf("%f",&nota);
    }
    ma/=ca;me/=ce;
    printf("\n%.2f m.apro\n%.2f m.exame\n",ma,me);
    return 0;
}