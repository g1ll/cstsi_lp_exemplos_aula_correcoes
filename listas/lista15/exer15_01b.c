#include<stdio.h>

void exibeOnzeTracos(void);

int main(void){
    int torcedor;

    do{
        printf("\ncod. torcedor: ");
        scanf("%d",&torcedor);
    }while(torcedor!=1&&torcedor!=2);

    printf("Cod: %d \nArquibancanda:",torcedor);
    
    printf("\n\t   +");
    exibeOnzeTracos();
    printf("+\n");
    exibeOnzeTracos();
    if(torcedor==1){
        printf("|  Xavante  |");
    }else{
        printf("|  Pelotas  |");
    }
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