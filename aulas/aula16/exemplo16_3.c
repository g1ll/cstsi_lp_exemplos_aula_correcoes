#include <stdio.h>

void alteraNumero(int n);

main()
{
    int num;
    num = 30;
    printf("Numero (main)antes: %d\n",num);
    alteraNumero(num);
    printf("Numero (main)depois: %d\n",num);

    getchar();
}

void alteraNumero(int num)
{
    num = 40;
    printf("Numero (funcao):%d\n",num);
}