#include<stdio.h>
#include<stdlib.h>

int main(void){

    int gls_gre,gls_int;

    system("clear");

    printf("\nGols do Gremio: ");
    scanf("%d",&gls_gre);
    
    printf("\nGols do Inter: ");
    scanf("%d",&gls_int);

    if(gls_gre!=gls_int)
        if(gls_gre>gls_int)
            printf("\n\tGremio VENCEU de %d a %d!\n",gls_gre,gls_int);
        else
            printf("\n\tInter VENCEU de %d a %d!\n",gls_int,gls_gre);
    else
        printf("\n\tA partida EMPATOU em %d a %d\n",gls_int,gls_gre);
    
    printf("\n\n---------------------------------------");
    printf("\nAperte <enter> para sair! ");
    getchar();   /*Captura o enter do ultimo scanf*/
    getchar();   /*Aguarda que uma nova entrada seja gerada (Qualquer tecla)*/
    system("clear");
    return 0;
}