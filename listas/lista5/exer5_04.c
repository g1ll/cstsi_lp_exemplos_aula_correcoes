#include<stdio.h>
#include<stdlib.h>

int main(void){

    float litros, preco, pago;
    int tipo;

    system("clear");

    printf("\nlitros:");
    scanf("%f",&litros);
    
    printf("\ntipo:");
    scanf("%d",&tipo);
    
    printf("\npreco:");
    scanf("%f",&preco);
    
    if(tipo==1 && litros<=20){
        pago = litros*preco*(1-0.03);
    }else{
        if(tipo==1 && litros>20){
            pago = litros*preco*(1-0.05);
        }else{
            if(tipo==2 && litros<=15){
                pago = litros*preco*(1-0.035);
            }else{
                pago = litros*preco*(1-0.06);
            }
        }
    }

    printf("\n\tTotal Pago: %.2f",pago);

    getchar();getchar();
    system("clear");
}