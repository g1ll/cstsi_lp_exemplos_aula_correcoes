#include<stdio.h>

void linhaDeAsteriscos(void);
void exibeSoma(float a, float b);

int main(void){
    float x,y;

    printf("\nInforme dois valores: ");
    scanf("%f %f",&x,&y);

    linhaDeAsteriscos();
    exibeSoma(x,y);
    linhaDeAsteriscos();

    getchar();
    getchar();
    return 0;
}

void linhaDeAsteriscos(void){
    for(int i=0;i<22;i++)
        printf("*");
}


void exibeSoma(float a, float b){
    printf("\nSoma: %.2f\n",a+b);
}