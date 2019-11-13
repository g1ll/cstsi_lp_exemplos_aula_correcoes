/*charset UTF-8*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    int ano_atual = 2019,ano,idade;
    const IDADE_MIN = 18;

    setlocale(LC_ALL,"Portuguese");
    system("clear");
    
    printf("\nInforme o seu ano de nascimento: ");
    scanf("%d",&ano);

    idade = ano_atual-ano;
    printf("\nVocê possui ou faz %d anos neste ano de %d.",idade,ano_atual);
    
    if(idade>=IDADE_MIN)
         printf("Você DEVE votar!");
    else
        printf("\nVocê  ainda NÃO PODE votar!");

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();getchar();
    system("clear");
    return 0;
}