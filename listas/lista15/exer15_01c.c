#include<stdio.h>

void exibeOnzeTracos(void);
void exibeArqui(char nome[20]);

int main(void){
    int torcedor;

    do{
        printf("\ncod. torcedor: ");
        scanf("%d",&torcedor);
    }while(torcedor!=1&&torcedor!=2);

    printf("Cod: %d \nArquibancanda:",torcedor);
    
    if(torcedor==2)
        exibeArqui("Pelotas");
    else   
        exibeArqui("Xavante");

    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeOnzeTracos(void){
    for(int i=0;i<11;i++)
        printf("-");
}

void exibeArqui(char nome[20]){
    printf("\n\t   +");
    exibeOnzeTracos();
    printf("+\n");
    exibeOnzeTracos();
    printf("|  %s  |",nome);
    exibeOnzeTracos();
    printf("\n\t   +");
    exibeOnzeTracos();
    printf("+\n");
}