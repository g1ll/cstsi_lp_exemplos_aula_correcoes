#include<stdio.h>
int main(void){
    char letra, digito, simbolo;

    letra = 'A';
    digito = '1';
    simbolo = '!';

    printf("\n\nLetra: %c \n", letra);
    printf("Digito: %c\n", digito);
    printf("Simbolo: %c\n", simbolo);
    printf("\nTam. Letra: %ld Byte ",(sizeof letra));

    printf("\nTamanho dos Tipos em Bytes:\n");
    printf("char: %lu\n", sizeof(char)); 
    printf("int: %lu\n", sizeof(int)); 
    printf("float: %lu\n", sizeof(float)); 
    printf("double: %lu", sizeof(double)); 

    printf("\n\n\n");
    return 0;
}