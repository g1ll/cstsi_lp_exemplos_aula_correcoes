#include<stdio.h>

int main(void){
    int i,n;
    char x,y;
    
    printf("Informe a quantidade de caracteres:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("Informe o caractere:");
        scanf("\n%c",&x);
        y = x + 1;
        printf("%c --> %c \n",x,y);
    }
    
    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}