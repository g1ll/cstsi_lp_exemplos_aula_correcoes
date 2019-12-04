#include<stdio.h>

void exibeDigitos(void);
void exibeAlfabeto(void);

int main(void){
    int menu = 0;

    printf("\n1.Alfabeto\n2.Digito\n3.Fim\n");
    do    scanf("%d",&menu);
    while(menu!=1&&menu!=2&&menu!=3);

    while(menu!=3){
        if(menu==1)
            exibeAlfabeto();
        else if(menu==2)
            exibeDigitos();
        printf("\n");

        do    scanf("%d",&menu);
        while(menu!=1&&menu!=2&&menu!=3);
    }

    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeDigitos(void){
    char digito = '0';
    do printf(" %c ",digito++);
    while(digito<='9');
}

void exibeAlfabeto(void){
    char letra = 'A';
    do printf(" %c ",letra++);
    while(letra<='Z');
}