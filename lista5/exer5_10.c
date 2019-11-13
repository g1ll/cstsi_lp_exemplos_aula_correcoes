#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){

    float saldoC,saldoP,limite1,limite2,limitef;

    setlocale(LC_ALL,"Portuguese");
    system("clear");

    printf("\nsaldoC:");
    scanf("%f",&saldoC);

    printf("\nsaldoP:");
    scanf("%f",&saldoP);

    if(saldoC>1000 || saldoP>1000){
        printf("\nsaldo especial");
        if(saldoC>saldoP){
            limite1 = 2*saldoC;
            limite2 = 3*saldoP;
        }else{
            limite1 = 2*saldoP;
            limite2 = 3*saldoC;
        }
        if(limite1>limite2)
            limitef = limite1;
        else
            limitef=limite2;        
        printf("\nlimite espercial: %f\n",limitef);
    }else{
        printf("\nsem saldo especial");
    }

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}