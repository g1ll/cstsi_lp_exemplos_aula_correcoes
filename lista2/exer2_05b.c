/*charset UTF-8*/
/*Referência da biblioteca time.h e função time()
    https://www.tutorialspoint.com/c_standard_library/time_h.htm
    https://www.geeksforgeeks.org/time-function-in-c/
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> /*Biblioteca para tempo e datas*/

int main(void){

    time_t tempo = time(NULL);/*Pega o tempo em segundos desde 01/01/1970*/
    int ano, ano_atual,idade;
    const IDADE_MIN = 18;
    const IDADE_OPT = 70;

    setlocale(LC_ALL,"Portuguese");
    system("clear");
    
    printf("\nInforme o seu ano de nascimento: ");
    scanf("%d",&ano);

    ano_atual = 1900+localtime(&tempo)->tm_year;/*Esta linha calcula o ano atual*/
    idade = ano_atual-ano;
    printf("\nVocê possui ou faz %d anos neste ano de %d.",idade,ano_atual);
    
    if(idade>=IDADE_MIN){
        if(idade>=IDADE_OPT)
            printf("\n\tPara você o voto é optativo!");
        else
            printf("\n\tVocê DEVE votar!");
    }
    else
        printf("\n\tVocê ainda NÃO PODE votar!");

    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();getchar();
    system("clear");
    return 0;
}