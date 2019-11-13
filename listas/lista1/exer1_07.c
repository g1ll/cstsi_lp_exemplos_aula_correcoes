#include <stdio.h>   /*Biblioteca padrão do C para funções de entrada e saída (printf, scanf, etc...)*/
#include <math.h>    /*Biblioteca para funções matemáticas (M_PI, pow, cbrt , etc ...) obs: usar -lm no gcc*/
#include <locale.h>  /*Biblioteca para configurações regionais, acentos, formato de números etc*/
#include <stdlib.h>  /*Biblioteca para funções de sistema (system, exit, etc)*/

int main(){
    
    int total_eleitores,nv_brancos,nv_nulos,nv_valios;
    float percBrancos,percNulos,percValidos;

    /*Função para configurar a região com idioma Português */
    setlocale(LC_ALL, "Portuguese");
    
    /*Função system executa comandos do sistema*/
    system("clear");    /*'clear' limpa a tela em ambientes Unix (Linux, Mac)*/
                        /*'cls' em ambientes DOS, Windows*/

    printf("\nInforme o número de eleitores: ");
    scanf("%d",&total_eleitores);

    printf("\nInforme o número de votos brancos: ");
    scanf("%d",&nv_brancos);
    
    printf("\nInforme o número de votos nulos: ");
    scanf("%d",&nv_nulos);

    printf("\nInforme o número de votos válidos: ");
    scanf("%d",&nv_valios);

    percBrancos = nv_brancos*100/total_eleitores;
    percValidos = nv_valios*100/total_eleitores;
    percNulos   = nv_nulos*100/total_eleitores;


    printf("\nTotal de Eleitores: %d\n",total_eleitores);
    printf("\nVotos brancos: %d (%.2f %%)\n",nv_brancos,percBrancos);
    printf("\nVotos nulos: %d (%.2f %%)\n",nv_nulos,percNulos);
    printf("\nVotos válidos: %d (%.2f %%)\n",nv_valios,percValidos);

    printf("\n-------------------------------------\nAperte qualquer tecla para sair! ");
    getchar();          /*Captura o enter do último scanf*/
    getchar();          /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}