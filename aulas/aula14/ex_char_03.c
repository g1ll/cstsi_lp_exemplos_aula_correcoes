#include<stdio.h>
#include<wchar.h>
#include<locale.h>

int main(void){
    char carac;

    wchar_t carutf8 = 126;

    setlocale(LC_ALL,"Portuguese");

    printf("\nOlá!\n");
    printf("Digite um caractere: ");
    scanf("%c",&carac);
    printf("Caractere digitado: ");
    putchar(carac);
    printf(" = %d",carac);
    printf("\n %c = %d",carac,carac);
    printf("\nx: \x41");
    printf("\nu: \u00AF");
    printf("\nu: \u00c0");
    printf("\nu: \u2639");
    printf("\nu: \u2661");
    printf("\a");

    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}