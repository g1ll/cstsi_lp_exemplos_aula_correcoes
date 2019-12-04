#include<stdio.h>

void funcaoTeste(void);
int s=8;

int main()
{
    int s; //variavel local
    s=10; 
    funcaoTeste();
    printf( "\n\ts: %d (main var local)\n" ,s);
    printf("\n\n\n");
    getchar();
    return 0;
}

void funcaoTeste(void)
{
    s++; //variavel global
    printf( "\n\ts: %d (funcao var global)\n" ,s);
}