#include<stdio.h>

const double PI = 3.14159265359;

void exibeSeno(int ang,int t);

int main(void){
    int angulo,termo;

    printf("\nInforme qtd. termos e angulo: ");
    scanf("%d",&termo);
    if(termo>0)
        scanf("%d",&angulo);
    
    while (termo>0)
    {
        exibeSeno(angulo,termo);
        
        printf("\nInforme qtd. termos e angulo: ");
        scanf("%d",&termo);
        if(termo>0)
            scanf("%d",&angulo);
    }
    
    printf("\n\n\n");
    return 0;
}

void exibeSeno(int ang,int t){
    float x = ang*PI/180;
    float seno = x;
    for(int i=1;i<=t;i++)
        seno*=1-(x*x)/((i*i)*(PI*PI));

    printf("\nseno(%d) = %f\n",ang,seno);
}