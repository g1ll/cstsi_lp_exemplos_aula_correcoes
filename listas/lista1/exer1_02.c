/*CODIFICAÇÃO DE CARACTER UTF-8*/
#include <stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/
#include <stdlib.h>  /*Biblioteca para funções de sistema (system, exit, etc)*/

int main(){
    int numFilhos;
    float valorHoras,salario,qtdHoras;

    /*Função para configurar a região com idioma Português */
    setlocale(LC_ALL, "Portuguese");
    
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme a quantidade de horas trabalhadas em um mês: ");
    scanf("%f",&qtdHoras);

    printf("\nInforme o valor por hora: ");
    scanf("%f",&valorHoras);

    printf("\nInforme a quantidade de filhos menor do que 14 anos: ");
    scanf("%d",&numFilhos);

    salario = qtdHoras*valorHoras;
    salario = salario + salario * numFilhos * .02;
    
    printf("\nO salário final é R$ %.2f\n\n",salario);

    return 0;
}