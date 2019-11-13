#include<stdio.h>
int main(void){//Exercício 11.14
    int n;
    float nota,maior=0;
    printf("\nN:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\nNota:");
        scanf("%f",&nota);
        if(nota>maior) 
            maior=nota;
    }

    printf("\nMaior Nota: %.2f\n",maior);
    return 0;
}