#include<stdio.h>

void linhaDeAsteriscos(void);

int main(void)
{
    int n;
    n=5;
    linhaDeAsteriscos();
    printf("\nIFSUL\n");
    n=22;
    linhaDeAsteriscos();
    getchar();
    return 0;
}

void linhaDeAsteriscos(){
    int n;
    for(int i=0;i<=n;i++)
        printf("*");
}