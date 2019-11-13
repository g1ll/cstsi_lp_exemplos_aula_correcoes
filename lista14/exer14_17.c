#include<stdio.h>

int main(void){
    int n;
    char palavra[100],letra;

    scanf("%c",&letra);
    while(letra!='f'&&letra!='F'){
        scanf("\n%s",palavra);
        for(int i=0;palavra[i]!='\0';i++)
            if(palavra[i]==letra)n++;
        printf(" %d\n",n);
        n=0;
        scanf("\n%c",&letra);
    }

    printf("\n");
    return 0;
}