#include<stdio.h>

int main(void){
    char ch,x;

    printf("\nDigite um caractere: ");

    scanf("%c",&ch);
    printf("\nO código de %c é %d\n",ch,ch);

    x = ch+1;
    printf("\nO seguinte é %c (%d)\n",x,x);
    
    getchar();
    getchar();

    printf("\n\n\n");
    return 0;
}