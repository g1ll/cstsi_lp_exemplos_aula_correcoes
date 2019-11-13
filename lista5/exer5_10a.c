#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MIN_SALDOC 1000
#define MIN_SALDOP 1000

int main(void){

    float saldoC,saldoP,limite=0;

    setlocale(LC_ALL,"Portuguese");
    system("clear");

    printf("\nSaldo da Conta Corrente: ");
    scanf("%f",&saldoC);

    printf("\nSaldo da Conta Poupança: ");
    scanf("%f",&saldoP);

    if(saldoC>MIN_SALDOC || saldoP>MIN_SALDOP){
        if(saldoC>saldoP && 2*saldoC > 3*saldoP){
            limite = 2*saldoC;
        }else{
            if(saldoP>saldoC && 2*saldoP>3*saldoC)
                limite = 2*saldoP;
            else{
                if(saldoC<saldoP){
                    limite = 3*saldoC;
                }else{
                    limite = 3*saldoP;
                }
            }
        }
        printf("\nSaldo do Limite Especial: %.2f\n",limite);
    }else{
        printf("\nSem Conta Especial!");
    }
    
    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do ultimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}