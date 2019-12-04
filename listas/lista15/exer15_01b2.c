#include<stdio.h>
#include<string.h>

void exibeOnzeTracos(void);

int main(void){
    int torcedor;
    char torcida[] = "Xavante";

    do{
        printf("\ncod. torcedor: ");
        scanf("%d",&torcedor);
    }while(torcedor!=1&&torcedor!=2);

    printf("Cod: %d \nArquibancanda:",torcedor);
    
    if(torcedor==2)
        strcpy(torcida,"Pelotas");

    printf("\n\t   +");
    exibeOnzeTracos();
    printf("+\n");
    exibeOnzeTracos();
    printf("|  %s  |",torcida);
    exibeOnzeTracos();
    printf("\n\t   +");
    exibeOnzeTracos();
    printf("+\n");

    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeOnzeTracos(void){
    for(int i=0;i<11;i++)
        printf("-");
}