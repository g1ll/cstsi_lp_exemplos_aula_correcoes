#include<stdio.h>

void exibeDigitos(void);

int main(void){

    exibeDigitos();

    int a = 1;
    printf("\n int: %ld Bytes",sizeof(a));
    float b = 1.0;
    printf("\n float: %ld Bytes",sizeof(b));
    char c = '1';
    printf("\n char: %ld Bytes",sizeof(c));
    double d = 1.0;
    printf("\n double: %ld Bytes",sizeof(d));


    printf("\n\n\n");
    getchar(); 
    return 0;
}

void exibeDigitos(void){
    char digito = '0';
    do printf(" %c ",digito++);
    while(digito<='9');
}