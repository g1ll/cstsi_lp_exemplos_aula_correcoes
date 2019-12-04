#include<stdio.h>

void exibePi(int termos);

int main(void){

    exibePi(1000);
    printf("\n\n\n");
    getchar();
    return 0;
}

void exibePi(int termos){
    float pi=0;
    printf("\n");
    if(termos>0)
        for(int i=1,d=1,n=1;i<=termos;i++,d+=2,n*=-1)
                pi+=(float) n*4/d;
    printf("= %.15lf\n",pi);
}