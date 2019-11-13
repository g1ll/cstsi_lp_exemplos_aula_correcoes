#include <stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/
#include <stdlib.h>  /*Biblioteca para funções de sistema (system, exit, etc)*/

/*Exemplo de constante com o preprocessador #define
#defini COBERTURA 1.5
*/

int main(){
    
    /*Constantes são valores que não mudam e podem ser defindos de duas formas
    usando o 'const type NOME = valor' ou preprocessador #define NOME valor' antes do main
        */
    const float COBERTURA = 1.5;
    float comp,largura, altura,area_total,qtd_caixas;


    /*Função para configurar a região com idioma Português */
    setlocale(LC_ALL, "Portuguese");
    
    /*Função system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o comprimento da cozinha: ");
    scanf("%f",&comp);

    printf("\nInforme a largura da cozinha: ");
    scanf("%f",&largura);

    printf("\nInforme a altura da cozinha: ");
    scanf("%f",&altura);

    area_total = 2*largura*altura+2*comp*altura;
    qtd_caixas = area_total/COBERTURA;
    
    printf("\nPara cobrir a área de  %.2f m² da cozinha serão necessárias %.2f caixas.\n\n",area_total,qtd_caixas);

    printf("\n-------------------------------------\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do último scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear"); 
    return 0;
}