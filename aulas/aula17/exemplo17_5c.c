#include<stdio.h>

int funcaoTeste(void);
int s;//variavel global

int main()
{
    s=10;
    s=funcaoTeste();
    printf("s:%d\n",s);
    
    printf("\n\n\n");
    getchar();
    return 0;
}

int funcaoTeste(void)
{
    int s = 1;
    s++;//acesso a variavel local apenas
    return s;
}