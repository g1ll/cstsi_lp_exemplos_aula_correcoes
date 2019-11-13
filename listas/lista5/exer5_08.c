#include<stdio.h>
#include<stdlib.h>

int main(void){

    float mora, maca, preco;
    
    system("clear");
    
    printf("\nInforme a qtd de morangos: ");
    scanf("%f",&mora);

    printf("\nInforme a qtd de maca: ");
    scanf("%f",&maca);

    if(mora<=5&&maca<=5){
        preco = mora*5+maca*3;
    }else{
        if(mora>5&&maca>5){
                preco = mora*4+maca*2;
        }else{
            if(mora>5){
                preco = mora*4+maca*3;
            }else{
                preco = mora*5+maca*2;
            }
        }
    }

    if(maca+mora>8||preco>35)
        preco = preco*0.8;

    printf("\nO valor total da compre e: R$ %.2f !", preco);

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();          /*Captura o enter do �ltimo scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}