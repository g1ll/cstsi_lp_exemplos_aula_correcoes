#include<stdio.h>
#include<string.h>

int main(void){
    
    char palavra[20];
    int tam;

    printf("\nInforme uma palavra: ");
    scanf("%s",palavra);

    tam = strlen(palavra);
    printf("\nQuantidade de caracteres: %d\n",tam);

    for(int i=0;i<tam;i++){
        printf(" %d ",palavra[i]);
    }
    printf("\n");
    for(int i=0;i<tam;i++){
        printf(" %c ",palavra[i]);
    }

    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}