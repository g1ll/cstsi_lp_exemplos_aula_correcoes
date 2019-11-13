#include<stdio.h>

int main(void){
    int op,apro=0,repro=0,exame=0;
    float  nota1,nota2,media;

    do{
        printf("\nInforme a n1:");
        scanf("%f",&nota1);
        printf("\nInforme a n2:");
        scanf("%f",&nota2);
        media = (nota1+nota2)/2;
        if(media>=6){ 
            apro++;
        }else{
            if(media>=3){
                exame++;
            }else{
                repro++;
            }
        }
        printf("\nA média é: %f",media);
        printf("\nCalcular a média de outro aluno 1.Sim 2.Não?");
        scanf("%d",&op);
    }while(op==1);
    printf("\n\n\tQuantidade de Aprovados: %d",apro);
    printf("\n\tQuantidade de Reprovados: %d",repro);
    printf("\n\tQuantidade em Exame: %d\n\n",exame);
    printf("\n\n\tTotal de Alunos: %d",(apro+repro+exame));
    printf("\n\tPercentual de Aprovados: %f",(apro*100.0)/(apro+repro+exame));
    printf("\n\tPercentual de Reprovados: %f",(repro*100.0)/(apro+repro+exame));
    printf("\n\tPercentual em Exame: %f\n\n",(exame*100.0)/(apro+repro+exame));
    return 0;
}