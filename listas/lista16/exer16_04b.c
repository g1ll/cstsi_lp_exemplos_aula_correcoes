#include<stdio.h>

void exibePi(int termos);

int main(void){
    int t=0;

    printf("\nt: ");
    scanf("%d",&t);
    while (t>0)
    {
        exibePi(t);
        printf("\nt: ");
        scanf("%d",&t);
    }
    
    printf("\n\n\n");
    getchar();
    return 0;
}

void exibePi(int termos){
    double pi=0;
    printf("\n");
    if(termos>0)
        for(int i=1,d=1,n=1;i<=termos;i++,d+=2,n*=-1)
                pi+=(double) n*4/d;
    printf("= %.15lf\n",pi);
}