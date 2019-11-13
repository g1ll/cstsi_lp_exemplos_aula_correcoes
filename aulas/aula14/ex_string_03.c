#include<stdio.h>

int main(void){
    
    char palavra[20];
    int i;

    printf("\nInforme uma palavra: ");
    scanf("%s",palavra);

    for(i=0;palavra[i]!='\0';i++){
        printf("%c\n",palavra[i]);
    }

    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}